
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
    nomPos_B1X = [ -244.133533328676 , -120.846933500755 , 0.576774196428571 , 123.353077415338 , 246.361911299509 ]
    nomPos_B2Y = [ -246.160227880999 , -123.4537642815 , -1.20384749666667 , 122.613699546083 , 245.935421360999 ]
    nomPos_B2X = [ -247.567886943069 , -124.68810434993 , -1.03405973333333 , 122.19873601993 , 245.157894604527 ]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def DOROSposition(whichScan):

    nomPos_B1Y = [ -248.624570339051 , -126.719992679907 , -3.76022727272736 , 119.206283782421 , 242.351744252094 ]
    nomPos_B1X = [ -245.744212614409 , -122.957019267085 , -1.57444444444441 , 121.235404180045 , 244.710099139231 ]
    nomPos_B2Y = [ -245.036484041289 , -123.085560861725 , -0.195555555555504 , 123.732299992159 , 247.059165200708 ]
    nomPos_B2X = [ -251.919926070276 , -129.203984774769 , -5.32499999999999 , 117.950081612713 , 241.030795635494 ]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def averageposition(whichScan):

    nomPos_B1Y = [ -246.959953146415 , -125.050302337398 , -2.35168685303035 , 120.618068894739 , 244.021434594603 ]
    nomPos_B1X = [ -244.938872971542 , -121.90197638392 , -0.498835124007919 , 122.294240797691 , 245.536005219369 ]
    nomPos_B2Y = [ -245.598355961144 , -123.269662571612 , -0.699701526111087 , 123.172999769121 , 246.497293280854 ]
    nomPos_B2X = [ -249.743906506672 , -126.946044562349 , -3.17952986666666 , 120.074408816321 , 243.094345120009 ]
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
            b1y  = [ 1187.68875731 , 1064.73375227 , 942.822870594 , 819.889803373 , 696.472892483 ] # true beamspot position of b1x scan
            b1y1 = [ 0.530204277585 , 0.508034325218 , 0.522510195471 , 0.514846665078 , 0.516993439922 ] # err in true beamspot position of b1x scan
            b2y  = [ 1188.8417754 , 1065.9135282 , 943.667789903 , 821.528983453 , 698.316036275 ] # true beamspot position of b2x scan
            b2y1 = [ 0.515565053629 , 0.52748332365 , 0.509011836132 , 0.532688782146 , 0.53581910625 ] # err in true beamspot position of b2x scan  

        if whichVtx == "vtx_y":
            b1y  = [ -841.152254499 , -720.137375605 , -597.820358522 , -475.746330475 , -353.167049755 ] # true beamspot position of b1y scan
            b1y1 = [ 0.613447612731 , 0.624707239806 , 0.618079771854 , 0.606032443359 , 0.629267126113 ] # err in true beamspot position of b1y scan
            b2y  = [ -840.196689623 , -717.771365523 , -595.474956445 , -472.79746474 , -351.109892997 ] # true beamspot position of b2y scan
            b2y1 = [ 0.613360740051 , 0.625260601524 , 0.610578092733 , 0.597894339033 , 0.611888436942 ] # err in true beamspot position of b2y scan

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
            b1y  = [ 1187.69975157 , 1064.68541365 , 942.869623991 , 819.851041611 , 696.437056339 ]
            b1y1 = [ 0.530103517858 , 0.507866109644 , 0.52250679452 , 0.514831230537 , 0.517155262782 ]
            b2y  = [ 1188.80281262 , 1065.80676995 , 943.64411197 , 821.521563571 , 698.321518888 ]
            b2y1 = [ 0.515920125654 , 0.528464354173 , 0.510196013982 , 0.534736908116 , 0.538026619773 ]   

        if whichVtx == "vtx_y":
            b1y  = [ -840.987393361 , -719.967392181 , -597.749716226 , -475.708678772 , -353.217649594 ]
            b1y1 = [ 0.613802819963 , 0.625060151137 , 0.618479098409 , 0.607503537654 , 0.631734372755 ]
            b2y  = [ -840.020596615 , -717.746430408 , -595.353091044 , -472.773252539 , -351.000865913 ]
            b2y1 = [ 0.613900643429 , 0.625427298036 , 0.610765646591 , 0.598047818037 , 0.61236530917 ]

    if 'arc' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [ 1187.67778091 , 1064.78212557 , 942.776198636 , 819.92861749 , 696.508769698 ]
            b1y1 = [ 0.530359525907 , 0.508397400831 , 0.52251469997 , 0.514862512157 , 0.516842205891 ]
            b2y  = [ 1188.88055187 , 1066.02054316 , 943.691505379 , 821.536422533 , 698.310588571 ]
            b2y1 = [ 0.515415612111 , 0.526843259521 , 0.508460657512 , 0.531722728789 , 0.535011631755 ]   

        if whichVtx == "vtx_y":
            b1y  = [ -841.315231735 , -720.30782642 , -597.89115639 , -475.784079175 , -353.116235591 ]
            b1y1 = [ 0.613414152108 , 0.624813902968 , 0.618229763473 , 0.605702303638 , 0.628807542531 ]
            b2y  = [ -840.371681107 , -717.796384118 , -595.597155357 , -472.821705145 , -351.218952886 ]
            b2y1 = [ 0.613066301235 , 0.625124092653 , 0.610465233949 , 0.597837336464 , 0.611881033933 ]
 

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
