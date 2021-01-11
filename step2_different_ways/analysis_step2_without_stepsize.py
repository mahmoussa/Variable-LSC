
import ROOT as r
import sys
import os
import pickle

def nominalposition(whichScan):

    nomPos_B1Y = [-246.047824621, -123.023912311, 0, 123.023912311, 246.047824621]
    nomPos_B1X = [-246.047824621, -123.023912311, 0, 123.023912311, 246.047824621]
    nomPos_B2Y = [-246.047824621, -123.023912311, 0, 123.023912311, 246.047824621]
    nomPos_B2X = [-246.047824621, -123.023912311, 0, 123.023912311, 246.047824621]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def arcposition(whichScan):

    nomPos_B1Y = [-244.068309687667,-122.767098861333,-0.943146433333333,121.4163408735,244.464098671]
    nomPos_B1X = [-244.9383956835,-121.249364677667,0.576774196428571,123.75550859225,247.166773654333]
    nomPos_B2Y = [-244.576684474333,-122.661992577667,-1.20384749666667,121.82192784225,244.351877954333]
    nomPos_B2X = [-246.170599392875,-123.989460574333,-1.03405973333333,121.500092244333,243.760607054333]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def DOROSposition(whichScan):

    nomPos_B1Y = [-245.714130434783,-125.264772727273,-3.76022727272736,117.751063829787,239.441304347826]
    nomPos_B1X = [-245.707446808511,-122.938636363636,-1.57444444444441,121.217021276596,244.673333333333]
    nomPos_B2Y = [-244.506666666667,-122.820652173913,-0.195555555555504,123.467391304348,246.529347826087]
    nomPos_B2X = [-248.490217391304,-127.489130434783,-5.32499999999999,116.235227272727,237.601086956522]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def averageposition(whichScan):

    nomPos_B1Y = [-244.891220061225,-124.015935794303,-2.35168685303035,119.583702351644,241.952701509413]
    nomPos_B1X = [-245.322921246006,-122.094000520652,-0.498835124007919,122.486264934423,245.920053493833]
    nomPos_B2Y = [-244.5416755705,-122.74132237579,-0.699701526111087,122.644659573299,245.44061289021]
    nomPos_B2X = [-247.33040839209,-125.739295504558,-3.17952986666666,118.86765975853,240.680847005427]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def makeCalibPlot(whichScan,rootOutFile,pdfOutFile):

    ###whichVtx = "vtx_y" #hardcoded, change accordingly for a X scan to "vtx_x"

    if 'X' in whichScan:
        whichVtx = "vtx_x"

    if 'Y' in whichScan:
        whichVtx = "vtx_y"

    if 'nom' in pdfOutFile:
        nomOff1,nomOff2,nomOff3,nomOff4 = nominalposition(whichScan)
   
    if 'arc' in pdfOutFile:
        nomOff1,nomOff2,nomOff3,nomOff4 = arcposition(whichScan) 

    if 'dor' in pdfOutFile:
        nomOff1,nomOff2,nomOff3,nomOff4 = DOROSposition(whichScan)

    if 'av' in pdfOutFile:
        nomOff1,nomOff2,nomOff3,nomOff4 = averageposition(whichScan)  

    rfile = r.TFile(rootOutFile,"recreate")

    canvas = r.TCanvas()
    r.gStyle.SetOptStat(1) #show normal statistics
    r.gStyle.SetOptFit(1)  #show fit statistics
    mult = r.TMultiGraph()
    mult.SetTitle("; Nominal Position [#mum]; Measured Vertex Position [#mum]");
    resedual_mult = r.TMultiGraph()
    vtxVsOff_B1=r.TGraphErrors()
    vtxVsOff_B1.SetTitle("LS scan " + whichScan + ": Mean " + whichVtx + " position in microns vs bump amplitude in microns")
    resedual_B1=r.TGraphErrors()
    resedual_B2=r.TGraphErrors()
    vtxVsOff_B2=r.TGraphErrors()
    vtxVsOff_B2.SetTitle("LS scan " + whichScan + " \"Fro\": Mean " + whichVtx + " position in microns vs nominal offset in microns")
    line = r.TLine()
    latex1 = r . TLatex ()
    latex2 = r . TLatex ()
    latex1 . SetNDC ()
    latex2 . SetNDC ()
    latex1 . SetTextColor(r.kRed)
    latex2 . SetTextColor(r.kBlue)
    latex1.SetTextFont(42)
    latex2.SetTextFont(42)

    if 'av' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1198.33003399,1075.42899268,953.57438889,830.308374144,707.084402026] # bump position of beam 1 in X                                          
            b1y1 = [0.498326964829,0.481953080405,0.479617144825,0.478762342573,0.480992140316] # bump position of beam 1 in X                                                          

            b2y  = [1200.32823444,1079.06029249,956.892611891,834.859679663,713.122031195] # bump position of beam 2 in X                                        
            b2y1 = [0.487137826718,0.482540910029,0.474310643425,0.500685684459,0.489365898218] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-815.530058436,-694.479081379,-571.97250052,-449.460416634,-326.592297002] # bump position of beam 1 in Y
            b1y1 = [0.575613703228,0.585412916039,0.572990006078,0.569330621533,0.585407858489] # bump error of beam 1  in Y
        
            b2y  = [-815.787987522,-693.866171638,-570.955683397,-447.184538081,-323.872443003] # bump position of beam 2 in Y
            b2y1 = [0.579729764598,0.582110742697,0.578363889745,0.585971801921,0.585486265755] # bump error of beam 2  in Y

    if 'nom' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1198.35833348,1076.00195926,953.290876237,830.611025767,707.830500911] # bump position of beam 1 in X                                          
            b1y1 = [0.498312821686,0.481688985845,0.479709927312,0.478610584568,0.481016270172] # bump position of beam 1 in X                                                          

            b2y  = [1200.16071056,1078.03528008,956.178661288,834.148447916,711.825506793] # bump position of beam 2 in X                                        
            b2y1 = [0.487056652828, 0.482080979665,0.474475257102,0.500316099474,0.489720277074] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-815.752904697,-693.743290709,-570.486357789,-447.424303694,-324.220089645] # bump position of beam 1 in Y
            b1y1 = [0.575491743421,0.585546170902,0.573574741079,0.569318256797,0.584425111857] # bump error of beam 1  in Y
        
            b2y  = [-815.217831399,-692.969867612,-570.304600989,-446.942084857,-323.987995575] # bump position of beam 2 in Y
            b2y1 = [0.579810629977,0.582458438578,0.578368257094,0.586111377517,0.585518816299] # bump error of beam 2  in Y

    if 'dor' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1198.64226004,1075.74821044,953.645052786,830.318466879,706.915553526] # bump position of beam 1 in X                                          
            b1y1 = [0.498180422121,0.481797589991,0.479596746903,0.478756969923,0.481004305423] # bump position of beam 1 in X                                                          

            b2y  = [1200.89411363,1079.81175815,957.883996141,836.149653285,714.614348617] # bump position of beam 2 in X                                        
            b2y1 = [0.487472390781,0.483056057633,0.474326538222,0.501740086071,0.489567597914] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-816.077185591,-695.119250708,-572.850107341,-450.815250536,-328.376597448] # bump position of beam 1 in Y
            b1y1 = [0.575340845787,0.58543082379,0.57295466666,0.569990160396,0.587257955658] # bump error of beam 1  in Y
        
            b2y  = [-816.346880378,-694.055253564,-571.003506257,-446.781588844,-323.037322435] # bump position of beam 2 in Y
            b2y1 = [0.579756118824,0.582071551234,0.578368775865,0.586213502309, 0.585380216035] # bump error of beam 2  in Y

    if 'arc' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1198.01541527,1075.10653086,953.503213412,830.298179104,707.255012827] # bump position of beam 1 in X                                          
            b1y1 = [0.498495833751,0.482131478406,0.479638788524,0.478767792543,0.480986455857] # bump position of beam 1 in X                                                          

            b2y  = [1199.75730408,1078.29666959,955.886151863,833.549254736,711.611381007] # bump position of beam 2 in X                                        
            b2y1 = [0.521656879014,0.482171622364,0.47458523124,0.500121885158,0.489826133446] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-814.977798395,-693.823218594,-571.073813383,-448.072363986,-324.762503704] # bump position of beam 1 in Y
            b1y1 = [0.575979999784,0.585523740699,0.573264782908,0.56919457485,0.584500614446] # bump error of beam 1  in Y
        
            b2y  = [-815.225907068,-693.674030957,-570.907122539,-447.593142954,-324.719075568] # bump position of beam 2 in Y
            b2y1 = [0.57980873747,0.582162763797,0.578359657272,0.585776661004,0.585825418364] # bump error of beam 2  in Y
 

    for i in range(0,5):
        if 'B1Y' in pdfOutFile:
            vtxVsOff_B1.SetPoint(i, nomOff1[i],b1y[i])
            ####vtxVsOff_B1.SetPointError(i, 0, b1y1[i])   # the chi2/dof from fit doesn't make sense 
            vtxVsOff_B1.SetPointError(i, 0, b1y1[i])
        
            vtxVsOff_B2.SetPoint(i, nomOff3[i],b2y[i])  
            ####vtxVsOff_B2.SetPointError(i, 0, b2y1[i])   # the chi2/dof from fit doesn't make sense 
            vtxVsOff_B2.SetPointError(i, 0, b2y1[i])

        if 'B1X' in pdfOutFile:
            vtxVsOff_B1.SetPoint(i, nomOff2[i],b1y[i])
            ####vtxVsOff_B1.SetPointError(i, 0, b1y1[i])   # the chi2/dof from fit doesn't make sense 
            vtxVsOff_B1.SetPointError(i, 0, b1y1[i])
        
            vtxVsOff_B2.SetPoint(i, nomOff4[i],b2y[i])  
            ####vtxVsOff_B2.SetPointError(i, 0, b2y1[i])   # the chi2/dof from fit doesn't make sense 
            vtxVsOff_B2.SetPointError(i, 0, b2y1[i])

    vtxVsOff_B1.SetLineWidth(2)
    vtxVsOff_B1.SetMarkerSize(1.5)
    vtxVsOff_B1.SetMarkerStyle(21)
    vtxVsOff_B1.SetMarkerColor(r.kRed)
    vtxVsOff_B1.Fit("pol1")
    fit_B1=vtxVsOff_B1.GetFunction("pol1")
    mult.Add(vtxVsOff_B1)

    vtxVsOff_B2.SetLineWidth(2)
    vtxVsOff_B2.SetMarkerStyle(25)
    vtxVsOff_B2.SetMarkerColor(r.kBlue)
    vtxVsOff_B2.SetMarkerSize(1.5)
    vtxVsOff_B2.Fit("pol1")
    fit_B2=vtxVsOff_B2.GetFunction("pol1")
    mult.Add(vtxVsOff_B2)
    
    canvas.Divide(1,2)
    canvas.cd(1)
    canvas.cd(1).SetPad(0,0.3,1.0,1.0)
    mult.Draw("AP")
    mult.GetXaxis().SetTitle("bump amplitude in microns")
    mult.GetYaxis().SetTitle("Measured " + whichVtx + "  in microns")
    vtxVsOff_B1.GetFunction("pol1").SetLineColor(r.kRed)
    vtxVsOff_B2.GetFunction("pol1").SetLineColor(r.kBlue)
    vtxVsOff_B1.Write()
    vtxVsOff_B2.Write()
    mult.Write()

    for i in range(0,5):
        if 'B1Y' in pdfOutFile:
            B1y_fit = fit_B1.Eval(nomOff1[i])
            resedual_B1.SetPoint(i, nomOff1[i],(b1y[i] - B1y_fit ))
            resedual_B1.SetPointError(i, 0. , b1y1[i]) 

            B2y_fit = fit_B2.Eval(nomOff3[i])
            resedual_B2.SetPoint(i, nomOff3[i],(b2y[i] - B2y_fit ))
            resedual_B2.SetPointError(i, 0. , b2y1[i])

        if 'B1X' in pdfOutFile:
            B1y_fit = fit_B1.Eval(nomOff2[i])
            resedual_B1.SetPoint(i, nomOff2[i],(b1y[i] - B1y_fit ))
            resedual_B1.SetPointError(i, 0. , b1y1[i]) 

            B2y_fit = fit_B2.Eval(nomOff4[i])
            resedual_B2.SetPoint(i, nomOff4[i],(b2y[i] - B2y_fit ))
            resedual_B2.SetPointError(i, 0. , b2y1[i])

    resedual_B1.SetMarkerColor(r.kRed)
    resedual_B1.SetMarkerStyle(21)
    resedual_B1.SetMarkerSize(1.5)
    resedual_mult.Add(resedual_B1) 

    resedual_B2.SetMarkerColor(r.kBlue)
    resedual_B2.SetMarkerStyle(21)
    resedual_B2.SetMarkerSize(1.5)
    resedual_mult.Add(resedual_B2)

    canvas.cd(2)
    canvas.cd(2).SetPad(0,0,1.0,0.3)
    resedual_mult.Draw("PA")
    resedual_mult.GetYaxis().SetTitle("Residuals [#mum]")
    resedual_mult.GetYaxis().SetLabelSize(0.07)
    resedual_mult.GetYaxis().SetTitleSize(0.07)
    resedual_mult.GetYaxis().SetTitleOffset(0.5)
    resedual_mult.SetTitle("")
    resedual_mult.Write()

    line = r.TLine(canvas.cd(2).GetUxmin(), 0.0, canvas.cd(2).GetUxmax(), 0.0)
    line.SetLineColor(14)
    line.SetLineStyle(3)
    line.Draw() 

    canvas.cd(1)
    stats1 =vtxVsOff_B1.GetListOfFunctions().FindObject("stats") 
    if not stats1:
       stats1.__class__ = r.TPaveStats
    stats2 =vtxVsOff_B2.GetListOfFunctions().FindObject("stats")
    if not stats2: 
       stats2.__class__ = r.TPaveStats
    stats1.SetLineWidth (0)
    stats2.SetLineWidth (0)
    stats1.SetTextColor(r.kRed)
    stats1.SetTextSize(0.04)
    stats2.SetTextColor(r.kBlue)
    stats2.SetTextSize(0.04)
    if 'B1X' in pdfOutFile:
         latex1 . DrawText (0.2, 0.4 , " B1X " )
         stats1.SetX1NDC(0.15) 
         stats1.SetX2NDC(0.50)
         stats1.SetY1NDC(0.15)
         stats1.SetY2NDC(0.38)
         latex2 . DrawText (0.55, 0.8 , " B2X " )
         stats2.SetX1NDC(0.50)
         stats2.SetX2NDC(0.85) 
         stats2.SetY1NDC(0.55)
         stats2.SetY2NDC(0.78)
         #canvas.cd(1).Modified()
         #canvas.cd(1).Update()
    if 'B1Y' in pdfOutFile:
         latex1 . DrawText (0.2,0.8 , " B1Y " )
         stats1.SetX1NDC(0.15) 
         stats1.SetX2NDC(0.50)
         stats1.SetY1NDC(0.55)
         stats1.SetY2NDC(0.78)
         latex2 . DrawText (0.55,0.4 , " B2Y " )
         stats2.SetX1NDC(0.50)
         stats2.SetX2NDC(0.85) 
         stats2.SetY1NDC(0.15)
         stats2.SetY2NDC(0.38)

    text2=r.TLatex(0.10,0.91,"CMS #bf{#scale[0.75]{#it{Preliminary}}}")
    text2.SetNDC()
    text2.SetTextSize(0.05)
    text2.SetTextFont(62)
    text=r.TLatex(0.90,0.91,"2018 (13 TeV)")
    text.SetNDC()
    #text.SetTextFont(62)
    text.SetTextSize(0.05)
    text.SetTextAlign(31)
    text2.Draw("same")
    text.Draw("same")
    canvas.cd(1).Modified()
    canvas.cd(1).Update()

    canvas.cd()
    canvas.SaveAs(pdfOutFile)
    canvas.SaveAs("calib_"+whichScan+".root")
    rfile.Write()
    rfile.Close()
    
    


if __name__ == '__main__':

    #string="nominalLHC_constrWindow_5points"

    makeCalibPlot("B1B2Y", "LScalib_B1B2Y_v1.root", "plotsLScalib_B1Y_arc_p1.pdf")
    makeCalibPlot("B1B2X", "LScalib_B1B2X_v1.root", "plotsLScalib_B1X_arc_p1.pdf")
    makeCalibPlot("B1B2Y", "LScalib_B1B2Y_v1.root", "plotsLScalib_B1Y_dor_p1.pdf")
    makeCalibPlot("B1B2X", "LScalib_B1B2X_v1.root", "plotsLScalib_B1X_dor_p1.pdf")
    makeCalibPlot("B1B2Y", "LScalib_B1B2Y_v1.root", "plotsLScalib_B1Y_nom_p1.pdf")
    makeCalibPlot("B1B2X", "LScalib_B1B2X_v1.root", "plotsLScalib_B1X_nom_p1.pdf")
    makeCalibPlot("B1B2Y", "LScalib_B1B2Y_v1.root", "plotsLScalib_B1Y_av_p1.pdf")
    makeCalibPlot("B1B2X", "LScalib_B1B2X_v1.root", "plotsLScalib_B1X_av_p1.pdf")
