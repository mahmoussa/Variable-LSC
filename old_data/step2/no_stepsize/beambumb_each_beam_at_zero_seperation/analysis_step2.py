
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

    nomPos_B1Y = [ -244.068309687667 , -122.767098861333 , -0.943146433333333 , 121.4163408735 , 244.464098671 ]
    nomPos_B1X = [ -244.9383956835 , -121.249364677667 , 0.576774196428571 , 123.75550859225 , 247.166773654333 ]
    nomPos_B2Y = [ -244.576684474333 , -122.661992577667 , -1.20384749666667 , 121.82192784225 , 244.351877954333 ]
    nomPos_B2X = [ -246.170599392875 , -123.989460574333 , -1.03405973333333 , 121.500092244333 , 243.760607054333 ]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def DOROSposition(whichScan):

    nomPos_B1Y = [ -245.714130434783 , -125.264772727273 , -3.76022727272736 , 117.751063829787 , 239.441304347826 ]
    nomPos_B1X = [ -245.707446808511 , -122.938636363636 , -1.57444444444441 , 121.217021276596 , 244.673333333333 ]
    nomPos_B2Y = [ -244.506666666667 , -122.820652173913 , -0.195555555555504 , 123.467391304348 , 246.529347826087 ]
    nomPos_B2X = [ -248.490217391304 , -127.489130434783 , -5.32499999999999 , 116.235227272727 , 237.601086956522 ]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def averageposition(whichScan):

    nomPos_B1Y = [ -244.891220061225 , -124.015935794303 , -2.35168685303035 , 119.583702351644 , 241.952701509413 ]
    nomPos_B1X = [ -245.322921246006 , -122.094000520652 , -0.498835124007919 , 122.486264934423 , 245.920053493833 ]
    nomPos_B2Y = [ -244.5416755705 , -122.74132237579 , -0.699701526111087 , 122.644659573299 , 245.44061289021 ]
    nomPos_B2X = [ -247.33040839209 , -125.739295504558 , -3.17952986666666 , 118.86765975853 , 240.680847005427 ]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def makeCalibPlot(whichScan,rootOutFile,pdfOutFile):

    ###whichVtx = "vtx_y" #hardcoded, change accordingly for a X scan to "vtx_x"

    if 'X' in whichScan:
        whichVtx = "vtx_x"
        direction = 'X'

    if 'Y' in whichScan:
        whichVtx = "vtx_y"
        direction = 'Y'

    if 'nom' in pdfOutFile:
        nomOff1,nomOff2,nomOff3,nomOff4 = nominalposition(whichScan)
        measurement = 'nom'
   
    if 'arc' in pdfOutFile:
        nomOff1,nomOff2,nomOff3,nomOff4 = arcposition(whichScan)
        measurement = 'arc'

    if 'dor' in pdfOutFile:
        nomOff1,nomOff2,nomOff3,nomOff4 = DOROSposition(whichScan)
        measurement = 'dor'

    if 'av' in pdfOutFile:
        nomOff1,nomOff2,nomOff3,nomOff4 = averageposition(whichScan)
        measurement = 'av'  

    rfile = r.TFile(rootOutFile,"recreate")

    canvas = r.TCanvas()
    r.gStyle.SetOptStat(1) #show normal statistics
    r.gStyle.SetOptFit(1)  #show fit statistics
    r.gStyle.SetFitFormat('1.6f')
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
        measurement = 'av'
        if whichVtx == "vtx_x":
            b1y  = [ 1187.69002108 , 1064.73625209 , 942.826638386 , 819.890856591 , 696.473875466 ] # true beamspot position of b1x scan
            b1y1 = [ 0.530207083844 , 0.508030953706 , 0.522511284524 , 0.514844321549 , 0.516985664757 ] # err in true beamspot position of b1x scan
            b2y  = [ 1188.8372905 , 1065.91069795 , 943.670347494 , 821.531550954 , 698.321981729 ] # true beamspot position of b2x scan
            b2y1 = [ 0.515563604668 , 0.527465144996 , 0.508999560379 , 0.532672537583 , 0.535776689905 ] # err in true beamspot position of b2x scan   

        if whichVtx == "vtx_y":
            b1y  = [ -841.150221715 , -720.137013119 , -597.822575027 , -475.7481367 , -353.168111029 ] # true beamspot position of b1y scan
            b1y1 = [ 0.613448862915 , 0.624705113376 , 0.618076408755 , 0.60601062697 , 0.629235619215 ] # err in true beamspot position of b1y scan
            b2y  = [ -840.193896164 , -717.772720612 , -595.475128106 , -472.799503234 , -351.109668724 ] # true beamspot position of b2y scan
            b2y1 = [ 0.61335560605 , 0.625252929224 , 0.610570492993 , 0.597893299568 , 0.611887803561 ] # err in true beamspot position of b2y scan

    if 'nom' in pdfOutFile:
        measurement = 'nom'
        if whichVtx == "vtx_x":
            b1y  = [ 1187.80049311 , 1064.95661996 , 943.16100442 , 819.982948147 , 696.560202996 ]
            b1y1 = [ 0.533883335133 , 0.511294350662 , 0.522663208634 , 0.514656286851 , 0.516365354028 ]
            b2y  = [ 1188.59418604 , 1065.76026737 , 943.806526416 , 821.667960807 , 698.64184651 ]
            b2y1 = [ 0.515490135513 , 0.524086485566 , 0.508529301956 , 0.531998086479 , 0.537102913857 ]  

        if whichVtx == "vtx_y":
            b1y  = [ -841.032555067 , -720.116142416 , -597.950764137 , -475.852930303 , -353.229748676 ]
            b1y1 = [ 0.613568514762 , 0.62474206175 , 0.618626789832 , 0.605971242985 , 0.629177281007 ]
            b2y  = [ -839.938620249 , -717.895272311 , -595.490625249 , -472.984703788 , -351.089120975 ]
            b2y1 = [ 0.613182022321 , 0.62488632122 , 0.610021260648 , 0.597895371787 , 0.611838885396 ]

    if 'dor' in pdfOutFile:
        measurement = 'dor'
        if whichVtx == "vtx_x":
            b1y  = [ 1187.70134857 , 1064.68968106 , 942.874179887 , 819.853125068 , 696.43900071 ]
            b1y1 = [ 0.530110328935 , 0.507854437037 , 0.522508308938 , 0.514828283608 , 0.517140973377 ]
            b2y  = [ 1188.79765973 , 1065.80560762 , 943.648173614 , 821.525233727 , 698.329457873 ]
            b2y1 = [ 0.515906713114 , 0.528397928845 , 0.510130118025 , 0.534634630025 , 0.537863897349 ]   

        if whichVtx == "vtx_y":
            b1y  = [ -840.988640663 , -719.971483823 , -597.755230711 , -475.71262472 , -353.217981328 ]
            b1y1 = [ 0.613795282978 , 0.625030799258 , 0.618431619404 , 0.60736836149 , 0.631518470133 ]
            b2y  = [ -840.019184921 , -717.749002202 , -595.355466631 , -472.776895946 , -351.002386681 ]
            b2y1 = [ 0.613881522619 , 0.625409701339 , 0.610748935803 , 0.598044002086 , 0.612351397473 ]

    if 'arc' in pdfOutFile:
        measurement = 'arc'
        if whichVtx == "vtx_x":
            b1y  = [ 1187.67860692 , 1064.78329012 , 942.778745962 , 819.928977478 , 696.509113386 ]
            b1y1 = [ 0.530359201004 , 0.508396448471 , 0.522515395244 , 0.51486093708 , 0.516838867657 ]
            b2y  = [ 1188.87726668 , 1066.01749018 , 943.69285062 , 821.537968774 , 698.314423133 ]
            b2y1 = [ 0.515415332808 , 0.526842068371 , 0.508461219146 , 0.531724863192 , 0.535001918294 ]   

        if whichVtx == "vtx_y":
            b1y  = [ -841.313463736 , -720.30661255 , -597.891528092 , -475.784515373 , -353.11694474 ]
            b1y1 = [ 0.613413247222 , 0.624812987612 , 0.618231480391 , 0.605703217294 , 0.628809240412 ]
            b2y  = [ -840.369779824 , -717.796824953 , -595.596684738 , -472.822423764 , -351.218376728 ]
            b2y1 = [ 0.61306610776 , 0.62512213495 , 0.610462812665 , 0.597836632595 , 0.611880052998 ]
 

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
    slope_B1= fit_B1.GetParameter(1)
    staterr_B1 = fit_B1.GetParError(1)
    chi2_B1 = fit_B1.GetChisquare()
    dof_B1 = fit_B1.GetNDF()
    mult.Add(vtxVsOff_B1)

    vtxVsOff_B2.SetLineWidth(2)
    vtxVsOff_B2.SetMarkerStyle(25)
    vtxVsOff_B2.SetMarkerColor(r.kBlue)
    vtxVsOff_B2.SetMarkerSize(1.5)
    vtxVsOff_B2.Fit("pol1")
    fit_B2=vtxVsOff_B2.GetFunction("pol1")
    slope_B2= fit_B2.GetParameter(1)
    staterr_B2 = fit_B2.GetParError(1)
    chi2_B2 = fit_B2.GetChisquare()
    dof_B2 = fit_B2.GetNDF()
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
    resedual_B1.SetMarkerSize(1)
    resedual_mult.Add(resedual_B1) 

    resedual_B2.SetMarkerColor(r.kBlue)
    resedual_B2.SetMarkerStyle(21)
    resedual_B2.SetMarkerSize(1)
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
    print(measurement, '  ' , 'B1',direction, float("{:.6f}".format(slope_B1)),' , ' , float("{:.6f}".format(staterr_B1)), ' , ' ,float("{:.6f}".format(chi2_B1))/dof_B1 )
    print(measurement, '  ' , 'B2',direction, float("{:.6f}".format(slope_B2)), ' , ' ,float("{:.6f}".format(staterr_B2)), ' , ' ,float("{:.6f}".format(chi2_B2))/dof_B2 )
    
    


if __name__ == '__main__':

    #string="nominalLHC_constrWindow_5points"
    makeCalibPlot("B1B2X", "LScalib_B1B2X_v1.root", "plotsLScalib_B1X_av_p1.pdf")
    makeCalibPlot("B1B2Y", "LScalib_B1B2Y_v1.root", "plotsLScalib_B1Y_av_p1.pdf")
    makeCalibPlot("B1B2X", "LScalib_B1B2X_v1.root", "plotsLScalib_B1X_nom_p1.pdf")
    makeCalibPlot("B1B2Y", "LScalib_B1B2Y_v1.root", "plotsLScalib_B1Y_nom_p1.pdf")
    makeCalibPlot("B1B2X", "LScalib_B1B2X_v1.root", "plotsLScalib_B1X_dor_p1.pdf")
    makeCalibPlot("B1B2Y", "LScalib_B1B2Y_v1.root", "plotsLScalib_B1Y_dor_p1.pdf")
    makeCalibPlot("B1B2X", "LScalib_B1B2X_v1.root", "plotsLScalib_B1X_arc_p1.pdf")
    makeCalibPlot("B1B2Y", "LScalib_B1B2Y_v1.root", "plotsLScalib_B1Y_arc_p1.pdf")
    
    
    
    
    
    
   
