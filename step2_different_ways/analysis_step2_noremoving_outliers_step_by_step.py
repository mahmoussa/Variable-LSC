
import ROOT as r
import sys
import os
import pickle

def nominalposition(whichScan):

    nomPos_B1Y = [-246.047824621, -123.0239123105, 0, 123.0239123105, 246.047824621]
    nomPos_B1X = [-246.047824621, -123.0239123105, 0, 123.0239123105, 246.047824621]
    nomPos_B2Y = [-246.047824621, -123.0239123105, 0, 123.0239123105, 246.047824621]
    nomPos_B2X = [-246.047824621, -123.0239123105, 0, 123.0239123105, 246.047824621]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def arcposition(whichScan):

    nomPos_B1Y = [-246.047824621,-123.855803574333,-1.14104092499981,122.109256603167,246.047824621]
    nomPos_B1X = [-246.047824621,-122.361173639625,-0.537414788987917,122.638939583375,246.047824621]
    nomPos_B2Y = [-246.047824621,-123.3413610215,-1.09144423666666,122.726102806084,246.047824621]
    nomPos_B2X = [-246.047824621,-123.32557510426,0.170936435937662,123.246199112802,246.047824621]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def DOROSposition(whichScan):

    nomPos_B1Y = [-246.047824621,-123.863413299142,-0.623814229248836,122.622530488613,246.047824621]
    nomPos_B1X = [-246.047824621,-122.850296901586,-1.05738770685544,122.162795289724,246.047824621]
    nomPos_B2Y = [-246.047824621,-124.096901441435,-1.20689613526548,122.72095941245,246.047824621]
    nomPos_B2X = [-246.047824621,-123.545651441436,0.119565217390971,123.180878714161,246.047824621]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def averageposition(whichScan):

    nomPos_B1Y = [-246.047824621,-123.859608436738,-0.882427577124318,122.36589354589,246.047824621]
    nomPos_B1X = [-246.047824621,-122.605735270606,-0.797401247921655,122.40086743655,246.047824621]
    nomPos_B2Y = [-246.047824621,-123.719131231468,-1.14917018596609,122.723531109267,246.047824621]
    nomPos_B2X = [-246.047824621,-123.435613272848,0.14525082666438,123.213538913482,246.047824621]
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
            b1y  = [1198.24724512,1075.77711473,952.946577018,830.513543738,707.740515324] # bump position of beam 1 in X (B1X1,B1X2,..)                                         
            b1y1 = [0.49836933874, 0.481784545131, 0.479846040125 , 0.478657357411, 0.481006623315] # bump position of beam 1 in X                                                          

            b2y  = [1200.42835112,1078.19344177,956.039069893,834.010113395,711.479868391] # bump position of beam 2 in X (B2X1,B2X2,...)                                       
            b2y1 = [0.487190226428, 0.482133640464, 0.474524652837, 0.500261736136, 0.489897789123] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-815.919422318,-693.785987797,-570.34899431,-447.307689559,-324.152833323] # bump position of beam 1 in Y (B1Y1, B1Y2, ..)
            b1y1 = [0.578075797279,0.589587335826,0.574287081756 ,0.569353159483,0.584421921249] # bump error of beam 1  in Y
        
            b2y  = [-815.498428173,-692.836735022 ,-570.288816242,-446.754367113,-324.00910566] # bump position of beam 2 in Y (B2Y1, B2Y2, ..)
            b2y1 = [0.579757236025,0.582532868934 ,0.578370002775,0.58623159097 ,0.585525232873] # bump error of beam 2  in Y

    if 'nom' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1198.35833173,1076.00195926,953.290876238,830.611025767,707.830502884] # bump position of beam 1 in X                                          
            b1y1 = [0.498312822906,0.48168898522,0.479709926164,0.478610584393,0.481016269914] # bump position of beam 1 in X                                                          

            b2y  = [1200.16070885,1078.03528008,956.178661288,834.148447916,711.825508469] # bump position of beam 2 in X                                        
            b2y1 = [0.487056652052,0.482080979823,0.474475257016 ,0.500316099857,0.489720276205] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-815.787648361,-693.763276698,-570.49082502,-447.424303694,-324.220091572] # bump position of beam 1 in Y
            b1y1 = [0.578146513154,0.589594188844,0.574210262865,0.569318257334,0.584425112057] # bump error of beam 1  in Y
        
            b2y  = [-815.217829491,-692.969867611,-570.304600989,-446.942084858,-323.987997416] # bump position of beam 2 in Y
            b2y1 = [0.579810630134,0.582458439101,0.578368256954,0.586111376747,0.585518817078] # bump error of beam 2  in Y

    if 'dor' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1198.25828006,1075.72814043,952.994431102,830.472890185,707.703506308] # bump position of beam 1 in X                                          
            b1y1 = [0.498363605636,0.48180674677,0.479825579154,0.478677455469 ,0.481003192234] # bump position of beam 1 in X                                                          

            b2y  = [1200.38570897,1078.0833164,956.015114215,834.002568549,711.485887427] # bump position of beam 2 in X                                        
            b2y1 = [0.487167540105 ,0.482096265882,0.474533695948,0.500258935648,0.489894398529] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-815.738220796,-693.603950471,-570.271926688,-447.266299443,-324.207085647] # bump position of beam 1 in Y
            b1y1 = [0.578174411016,0.589646646216,0.574331349099,0.569366475186,0.584424388831] # bump error of beam 1  in Y
        
            b2y  = [-815.306695233,-692.809682525,-570.165836026,-446.72998289,-323.898293559] # bump position of beam 2 in Y
            b2y1 = [0.579790869004,0.582548714026,0.57838626274,0.586247987002,0.58549316985] # bump error of beam 2  in Y

    if 'arc' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1198.23621026,1075.82609131,952.898724681,830.554198012,707.777524514] # bump position of beam 1 in X                                          
            b1y1 = [0.498375098059,0.481762838884,0.479866998499,0.478637607488,0.481010366959] # bump position of beam 1 in X                                                          

            b2y  = [1200.47099089 ,1078.30355648,956.063025717,834.01765825,711.473849399] # bump position of beam 2 in X                                        
            b2y1 = [0.530153920842 ,0.482174257507,0.47451577554,0.500264553645,0.489901190307] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-816.100606435,-693.968014939,-570.426062177,-447.349080322,-324.098581242] # bump position of beam 1 in Y
            b1y1 = [0.577987254722 ,0.589538038544,0.574244592797,0.569340329695,0.584420339733] # bump error of beam 1  in Y
        
            b2y  = [-815.690122904,-692.863787626,-570.411791735,-446.778751842,-324.119915769] # bump position of beam 2 in Y
            b2y1 = [0.579735909659,0.582517267323,0.578358454779,0.586215374085,0.585561293065 ] # bump error of beam 2  in Y
 

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
