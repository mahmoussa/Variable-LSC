
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

    nomPos_B1Y = [-246.047824621,-123.855803574333,-1.14104092500034,122.109256603166,246.047824620999]
    nomPos_B1X = [-246.047824621,-122.761224793079,-1.337517095895,121.438786123014,244.447620007185]
    nomPos_B2Y = [-246.047824621,-123.341361021501,-1.09144423666798,122.726102806082,246.047824620998]
    nomPos_B2X = [-246.047824621,-123.168042027861,0.486002588736014,123.718798341999,246.677956926596]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def DOROSposition(whichScan):

    nomPos_B1Y = [-246.047824621,-124.143246961856,-1.18348155467636,121.783029500472,244.928489970145]
    nomPos_B1X = [-246.047824621,-123.260631273676,-1.87805645103498,120.931792173454,244.40648713264]
    nomPos_B2Y = [-246.047824621,-124.096901441435,-1.20689613526599,122.720959412448,246.047824620998]
    nomPos_B2X = [-246.047824621,-123.331883325493,0.547101449276013,123.822183061989,246.90289708477]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def averageposition(whichScan):

    nomPos_B1Y = [-246.047824621,-123.999525268095,-1.16226123983935,121.946143051818,245.48815729557]
    nomPos_B1X = [-246.047824621,-123.010928033378,-1.60778677346599,121.185289148233,244.427053569911]
    nomPos_B2Y = [-246.047824621,-123.719131231468,-1.14917018596699,122.723531109265,246.047824620998]
    nomPos_B2X = [-246.047824621,-123.249962676677,0.516552019005019,123.770490701993,246.790427005682]
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
            b1y  = [1197.91699337,1075.87274355,953.688514479,830.323003775,707.415567678] # bump position of beam 1 in X (B1X1,B1X2,..)                                         
            b1y1 = [0.498553028646, 0.481742627195, 0.479584738765,0.478754563183,0.480987173572] # bump position of beam 1 in X                                                          

            b2y  = [1200.16070677,1077.84057753,955.794728835,833.635147097,711.731872357] # bump position of beam 2 in X (B2X1,B2X2,...)                                       
            b2y1 = [0.487056650428,0.482025341903,0.474624671316,0.500143139116,0.48976491841] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-815.926673954,-693.441884697,-570.375929692,-447.509891309,-324.161479628] # bump position of beam 1 in Y (B1Y1, B1Y2, ..)
            b1y1 = [0.574320932218,0.586871912234,0.573644475035,0.569295095077,0.584422255188] # bump error of beam 1  in Y
        
            b2y  = [-815.785150927,-692.605783391,-570.16700899,-446.835401034,-323.990496471] # bump position of beam 2 in Y (B2Y1, B2Y2, ..)
            b2y1 = [0.579729897776,0.582675963454,0.578386086549,0.586178394555,0.585519568975] # bump error of beam 2  in Y

    if 'nom' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1198.35832938,1076.00196083,953.29087781,830.611027342,707.830500522] # bump position of beam 1 in X                                          
            b1y1 = [0.498312824382,0.481688985564,0.479709926184,0.478610583493,0.481016270786] # bump position of beam 1 in X                                                          

            b2y  = [1201.1308334,1078.03528147,956.178662668,834.148449303,711.825506399] # bump position of beam 2 in X                                        
            b2y1 = [0.487640046324,0.482080980759,0.474475256441,0.50031610026,0.489720277017] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-815.749652967,-693.70868862,-570.48635931,-447.42430521,-324.220089291] # bump position of beam 1 in Y
            b1y1 = [0.574399450569,0.586802219481 ,0.573574740447,0.569318256344,0.584425111956] # bump error of beam 1  in Y
        
            b2y  = [-815.217827301,-692.969869066,-570.304602448,-446.942086314,-323.987995227] # bump position of beam 2 in Y
            b2y1 = [0.57981063116,0.58245843753,0.578368256616,0.586111376107,0.585518815983] # bump error of beam 2  in Y

    if 'dor' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1197.87493635,1075.85758259,953.67442057,830.32700667,707.415928332] # bump position of beam 1 in X                                          
            b1y1 = [0.498578102922,0.481749149753,0.479588588032,0.47875244135,0.480987181803] # bump position of beam 1 in X                                                          

            b2y  = [1200.95819317,1077.79677293,955.815340029,833.689149127,711.700676876] # bump position of beam 2 in X                                        
            b2y1 = [0.487516160089,0.482014219308,0.474615567786,0.50015763033,0.489780359384] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-815.374396038,-693.34656305,-570.375560308,-447.557626799,-324.332562247] # bump position of beam 1 in Y
            b1y1 = [0.57459690469,0.586902073038,0.573644709218,0.569283079603,0.584433490328] # bump error of beam 1  in Y
        
            b2y  = [-815.383550614,-692.672131772,-570.113679307,-446.841891865,-323.898656605] # bump position of beam 2 in Y
            b2y1 = [0.579775909634,0.58263304079,0.578394581797,0.586174220494,0.585493267931] # bump error of beam 2  in Y

    if 'arc' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1197.95898298,1075.88792445,953.702585151,830.318999945,707.415206472] # bump position of beam 1 in X                                          
            b1y1 = [0.49852837356,0.481736144777,0.479580939338,0.478756690019,0.480987165359] # bump position of beam 1 in X                                                          

            b2y  = [1201.30267962,1077.88447243,955.774087267,833.581028932,711.763027536] # bump position of beam 2 in X                                        
            b2y1 = [0.526162989728,0.482037004735,0.474633911453,0.500129490876,0.489749781271] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-816.472278928,-693.537498654,-570.376312486,-447.462022753,-323.98975919] # bump position of beam 1 in Y
            b1y1 = [0.57413794352,0.586844447204,0.573644236285,0.569307793114,0.584419838593] # bump error of beam 1  in Y
        
            b2y  = [-816.183835608,-692.539233766,-570.220465833,-446.828905333,-324.082390646] # bump position of beam 2 in Y
            b2y1 = [0.57973762878,0.582720485147,0.578378460221,0.586182584906,0.585548634844] # bump error of beam 2  in Y
 

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
