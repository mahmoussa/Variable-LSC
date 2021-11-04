
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

    nomPos_B1Y = [ -245.849930129333 , -123.657909082666 , -0.943146433333333 , 122.307151094833 , 246.245719112666 ]
    nomPos_B1X = [ -244.933635635584 , -121.246984654209 , 0.576774196428571 , 123.753128568792 , 247.162013606417 ]
    nomPos_B2Y = [ -246.160227881 , -123.4537642815 , -1.20384749666667 , 122.613699546083 , 245.935421360999 ]
    nomPos_B2X = [ -247.252820790271 , -124.530571273531 , -1.03405973333333 , 122.041202943531 , 244.842828451729 ]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def DOROSposition(whichScan):

    nomPos_B1Y = [ -249.184237664479 , -126.999826342621 , -3.76022727272736 , 119.486117445135 , 242.911411577522 ]
    nomPos_B1X = [ -246.564881358589 , -123.367353639175 , -1.57444444444441 , 121.645738552135 , 245.530767883411 ]
    nomPos_B2Y = [ -245.036484041289 , -123.085560861724 , -0.195555555555504 , 123.732299992159 , 247.059165200709 ]
    nomPos_B2X = [ -251.49238983839 , -128.990216658826 , -5.32499999999999 , 117.73631349677 , 240.603259403608 ]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def averageposition(whichScan):

    nomPos_B1Y = [ -247.517083896905 , -125.328867712643 , -2.35168685303035 , 120.896634269984 , 244.578565345093 ]
    nomPos_B1X = [ -245.749258497086 , -122.307169146691 , -0.498835124007919 , 122.699433560463 , 246.346390744913 ]
    nomPos_B2Y = [ -245.598355961144 , -123.269662571612 , -0.699701526111087 , 123.172999769121 , 246.497293280854 ]
    nomPos_B2X = [ -249.372605314331 , -126.760393966179 , -3.17952986666666 , 119.888758220151 , 242.723043927669 ]
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
        if whichVtx == "vtx_x":
            b1y  = [ 1199.1378304 , 1076.41709912 , 954.458525158 , 831.544796366 , 708.236831667 ] # true beamspot position of b1x scan
            b1y1 = [ 0.508467883236 , 0.492361067883 , 0.489782419305 , 0.489345077772 , 0.491794095786 ] # err in true beamspot position of b1x scan
            b2y  = [ 1200.29635007 , 1078.81101479 , 956.787561623 , 834.86057878 , 713.049806287 ] # true beamspot position of b2x scan
            b2y1 = [ 0.492710857461 , 0.490564774777 , 0.482675477535 , 0.509062372706 , 0.495202849036 ] # err in true beamspot position of b2x scan   

        if whichVtx == "vtx_y":
            b1y  = [ -814.957139982 , -694.000596551 , -571.607676825 , -449.605227537 , -327.039770065 ] # true beamspot position of b1y scan
            b1y1 = [ 0.579591962212 , 0.589161365915 , 0.576910337445 , 0.573279358174 , 0.589404809598 ] # err in true beamspot position of b1y scan
            b2y  = [ -816.872436637 , -694.249731347 , -571.319207972 , -446.938571624 , -322.97000654 ] # true beamspot position of b2y scan
            b2y1 = [ 0.583689744601 , 0.585741945505 , 0.582082881093 , 0.58952448679 , 0.589182138938 ] # err in true beamspot position of b2y scan

    if 'nom' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [ 1199.24929217 , 1076.64144029 , 954.797930778 , 831.642364688 , 708.327258072 ]
            b1y1 = [ 0.50513733006 , 0.492032018255 , 0.490010516687 , 0.489139955428 , 0.49169315952 ]
            b2y  = [ 1200.03200165 , 1078.65195403 , 956.927590662 , 834.999804963 , 713.392674964 ]
            b2y1 = [ 0.494907422474 , 0.487551619304 , 0.482910846578 , 0.508794498932 , 0.498404756226 ]   

        if whichVtx == "vtx_y":
            b1y  = [ -814.827837279 , -693.977489266 , -571.748674462 , -449.720738981 , -327.10648106 ]
            b1y1 = [ 0.579564956214 , 0.589263787379 , 0.577703852006 , 0.573996721939 , 0.589614768782 ]
            b2y  = [ -816.594072674 , -694.382943237 , -571.335000091 , -447.126012402 , -322.948921088 ]
            b2y1 = [ 0.583854984874 , 0.586390084344 , 0.582231335228 , 0.589632548756 , 0.589258734005 ]

    if 'dor' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [ 1199.14882092 , 1076.36836106 , 954.505455381 , 831.504193051 , 708.199711438 ]
            b1y1 = [ 0.508276610271 , 0.492148113926 , 0.489754182068 , 0.489330392086 , 0.491845174438 ]
            b2y  = [ 1200.25477278 , 1078.70015906 , 956.763652025 , 834.853141309 , 713.05555768 ]
            b2y1 = [ 0.493257118951 , 0.488767598592 , 0.482891310515 , 0.510408953535 , 0.495834280267 ]  

        if whichVtx == "vtx_y":
            b1y  = [ -814.779051958 , -693.815607604 , -571.531298225 , -449.564430711 , -327.093608531 ]
            b1y1 = [ 0.579564341475 , 0.589440579156 , 0.577160266401 , 0.574240200696 , 0.591630146314 ]
            b2y  = [ -816.682575031 , -694.222902361 , -571.19629384 , -446.914332463 , -322.859381705 ]
            b2y1 = [ 0.583517734947 , 0.58568556594 , 0.582084731993 , 0.589765297088 , 0.588984787091 ]

    if 'arc' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [ 1199.12684248 , 1076.4658831 , 954.411677219 , 831.585454388 , 708.273994069 ]
            b1y1 = [ 0.50874151317 , 0.492622825065 , 0.489811628175 , 0.489360267686 , 0.491754028144 ]
            b2y  = [ 1200.33773371 , 1078.92204747 , 956.81150626 , 834.868033875 , 713.044064197 ]
            b2y1 = [ 0.492515334932 , 0.490229836252 , 0.483068029074 , 0.508756198255 , 0.495938510315 ]   

        if whichVtx == "vtx_y":
            b1y  = [ -815.133192317 , -694.18608706 , -571.684223951 , -449.646136353 , -326.985702659 ]
            b1y1 = [ 0.579935737531 , 0.589324115762 , 0.577210448735 , 0.573480162752 , 0.58918264223 ]
            b2y  = [ -817.060783482 , -694.276645047 , -571.442344753 , -446.962840377 , -323.080745859 ]
            b2y1 = [ 0.584158048385 , 0.585828630741 , 0.582145978831 , 0.589377924185 , 0.589833458812 ]
 

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
