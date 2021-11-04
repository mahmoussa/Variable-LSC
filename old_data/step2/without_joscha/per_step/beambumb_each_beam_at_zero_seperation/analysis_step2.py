
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
            b1y  = [ 1187.68932499 , 1064.73342593 , 942.818984336 , 819.890074435 , 696.473324329 ] # true beamspot position of b1x scan
            b1y1 = [ 0.530205544472 , 0.508034767482 , 0.522508975554 , 0.514846128521 , 0.516989989192 ] # err in true beamspot position of b1x scan
            b2y  = [ 1188.84486203 , 1065.91258586 , 943.668379892 , 821.529889069 , 698.314602453 ] # true beamspot position of b2x scan
            b2y1 = [ 0.515565978373 , 0.527477259871 , 0.50900897683 , 0.532683117366 , 0.535829317749 ] # err in true beamspot position of b2x scan   

        if whichVtx == "vtx_y":
            b1y  = [ -841.152344157 , -720.137277372 , -597.820293833 , -475.745987821 , -353.16704079 ] # true beamspot position of b1y scan
            b1y1 = [ 0.6134475175 , 0.624706656026 , 0.618079855089 , 0.606036750243 , 0.629267386463 ] # err in true beamspot position of b1y scan
            b2y  = [ -840.19793042 , -717.771840521 , -595.47498952 , -472.797212796 , -351.109890778 ] # true beamspot position of b2y scan
            b2y1 = [ 0.613362991918 , 0.625257942756 , 0.610576654164 , 0.597894493308 , 0.611888409059 ] # err in true beamspot position of b2y scan

    if 'nom' in pdfOutFile:
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
        if whichVtx == "vtx_x":
            b1y  = [ 1187.70034605 , 1064.68487563 , 942.86655728 , 819.851334169 , 696.437595678 ]
            b1y1 = [ 0.530105981004 , 0.507867638462 , 0.52250576747 , 0.514830826177 , 0.517151319048 ]
            b2y  = [ 1188.80492382 , 1065.80654111 , 943.644677322 , 821.522358617 , 698.320279014 ]
            b2y1 = [ 0.515925631908 , 0.528451063414 , 0.510186818644 , 0.5347146318 , 0.538051524238 ]   

        if whichVtx == "vtx_y":
            b1y  = [ -840.987628011 , -719.967867544 , -597.749370557 , -475.708006318 , -353.217624371 ]
            b1y1 = [ 0.613801429976 , 0.625056678419 , 0.618482143249 , 0.607527100875 , 0.631750452191 ]
            b2y  = [ -840.020704107 , -717.74676954 , -595.353206717 , -472.772859805 , -351.00086152 ]
            b2y1 = [ 0.613902060754 , 0.625424965862 , 0.610764804504 , 0.598048233185 , 0.61236530217 ]

    if 'arc' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [ 1187.67830384 , 1064.78196078 , 942.771398639 , 819.928808578 , 696.509058167 ]
            b1y1 = [ 0.530359306057 , 0.508397560382 , 0.522513408579 , 0.514861706281 , 0.516839485303 ]
            b2y  = [ 1188.88479509 , 1066.01864801 , 943.692083077 , 821.537417257 , 698.308912103 ]
            b2y1 = [ 0.515415879723 , 0.526842475794 , 0.508460859361 , 0.531724081618 , 0.53501576235 ]   

        if whichVtx == "vtx_y":
            b1y  = [ -841.317128534 , -720.306662676 , -597.891196676 , -475.783955765 , -353.11643206 ]
            b1y1 = [ 0.613415140904 , 0.62481304454 , 0.61822992306 , 0.60570205174 , 0.628808013451 ]
            b2y  = [ -840.375287933 , -717.796917583 , -595.59681834 , -472.821568711 , -351.218871929 ]
            b2y1 = [ 0.613066761966 , 0.625121716583 , 0.610463490363 , 0.597837458848 , 0.611880899165 ]
 

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
