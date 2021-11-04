
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
            b1y  = [ 1199.13908825 , 1076.41962193 , 954.462308554 , 831.545900691 , 708.237854854 ] # true beamspot position of b1x scan
            b1y1 = [ 0.508467617246 , 0.492356927135 , 0.48978435807 , 0.489342626713 , 0.491791705321 ] # err in true beamspot position of b1x scan
            b2y  = [ 1200.29156408 , 1078.80807927 , 956.790143957 , 834.863149949 , 713.056068294 ] # true beamspot position of b2x scan
            b2y1 = [ 0.492718158286 , 0.490552583606 , 0.482676529217 , 0.509054106414 , 0.495227711701 ] # err in true beamspot position of b2x scan   

        if whichVtx == "vtx_y":
            b1y  = [ -814.954947488 , -694.000201914 , -571.610073162 , -449.607184249 , -327.040899886 ] # true beamspot position of b1y scan
            b1y1 = [ 0.579590703019 , 0.589160335293 , 0.576911129675 , 0.573270362663 , 0.589378588259 ] # err in true beamspot position of b1y scan
            b2y  = [ -816.869425824 , -694.251189278 , -571.3193804 , -446.940610983 , -322.969775358 ] # true beamspot position of b2y scan
            b2y1 = [ 0.583690776411 , 0.585745547348 , 0.582082995275 , 0.589525242437 , 0.589182948577 ] # err in true beamspot position of b2y scan

    if 'nom' in pdfOutFile:
        measurement = 'nom'
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
        measurement = 'dor'
        if whichVtx == "vtx_x":
            b1y  = [ 1199.15041747 , 1076.3726598 , 954.510025023 , 831.506375015 , 708.20172973 ]
            b1y1 = [ 0.508278679823 , 0.492146189904 , 0.489757278619 , 0.489327209579 , 0.491840115729 ]
            b2y  = [ 1200.24927753 , 1078.69895285 , 956.767755415 , 834.85681758 , 713.063932402 ]
            b2y1 = [ 0.493271950084 , 0.488713845947 , 0.482868531111 , 0.510336152045 , 0.495808200308 ]  

        if whichVtx == "vtx_y":
            b1y  = [ -814.780401713 , -693.820061636 , -571.537255657 , -449.568705969 , -327.093961558 ]
            b1y1 = [ 0.579563366313 , 0.589417598328 , 0.577123608099 , 0.57413869298 , 0.591429802153 ]
            b2y  = [ -816.68105111 , -694.225672713 , -571.198691103 , -446.917980041 , -322.860925612 ]
            b2y1 = [ 0.583516676136 , 0.585689694078 , 0.58208393543 , 0.589762917746 , 0.588984696703 ]

    if 'arc' in pdfOutFile:
        measurement = 'arc'
        if whichVtx == "vtx_x":
            b1y  = [ 1199.12767137 , 1076.46706055 , 954.414235251 , 831.585834624 , 708.274350528 ]
            b1y1 = [ 0.508739728144 , 0.492617909322 , 0.489812774402 , 0.489358597687 , 0.491753213821 ]
            b2y  = [ 1200.33422871 , 1078.91887568 , 956.812867792 , 834.869580416 , 713.048106694 ]
            b2y1 = [ 0.492511078409 , 0.490228802029 , 0.483065978997 , 0.508755649284 , 0.495950901123 ]   

        if whichVtx == "vtx_y":
            b1y  = [ -815.131282615 , -694.184765996 , -571.68462582 , -449.646601971 , -326.986459346 ]
            b1y1 = [ 0.579931477768 , 0.589323574512 , 0.577212842154 , 0.573482625055 , 0.589184686335 ]
            b2y  = [ -817.05874085 , -694.277115999 , -571.4418698 , -446.963560766 , -323.080158968 ]
            b2y1 = [ 0.584156700015 , 0.585830247375 , 0.58214588563 , 0.589378357383 , 0.589830208854 ]
 

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
    
    
    
    
    
    
   
