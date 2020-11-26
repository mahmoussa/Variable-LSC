
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

    nomPos_B1Y = [-246.047824621,-123.137281825791,-0.227835358248996,123.023912311001,246.772141699501]
    nomPos_B1X = [-246.047824621,-123.021696806235,-0.412185023962721,122.533308067297,245.633424092271]
    nomPos_B2Y = [-246.047824621,-123.27936208175,-1.02491373083332,122.429173325875,246.047824621]
    nomPos_B2X = [-246.047824621,-122.459802324404,0.095059723620025,122.95683027331,246.047824621001]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def DOROSposition(whichScan):

    nomPos_B1Y = [-246.047824621,-124.171639583728,-1.24790019762899,121.832294701042,244.900097348271]
    nomPos_B1X = [-246.047824621,-123.086077849362,-0.209716312056642,123.023912311001,246.827375448424]
    nomPos_B2Y = [-246.047824621,-124.053272214381,-1.23410628019228,122.024987190228,245.018464717619]
    nomPos_B2X = [-246.047824621,-122.9766708749,0.008613306983619,123.023912311001,246.196029495836]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def averageposition(whichScan):

    nomPos_B1Y = [-246.047824621,-123.654460704759,-0.737867777938988,122.428103506022,245.836119523886]
    nomPos_B1X = [-246.047824621,-122.78882611128,0.219171765026346,123.573793838703,247.290644636419]
    nomPos_B2Y = [-246.047824621,-123.620405990976,-1.03768769133281,122.364813729322,245.716789297669]
    nomPos_B2X = [-246.047824621,-122.935703729046,-0.383097743486189,122.337969903974,245.252058540842]
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
            b1y  = [1186.77422212,1064.46887309,941.942658035,819.056935849,696.240418346] # bump position of beam 1 in X                                          
            b1y1 = [0.523090588137,0.500534079603 ,0.827166748649 ,0.503709939735,0.505540199412] # bump position of beam 1 in X                                                          

            b2y  = [1188.25338964,1066.21629678,944.68970308,822.608599949,700.532512123] # bump position of beam 2 in X                                        
            b2y1 = [0.507372695346 ,0.518612763738 ,0.500137230534,0.523083832266  ,0.528474050271 ] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-841.809250042,-719.874576688,-596.835345857,-473.672288568,-350.42401105] # bump position of beam 1 in Y
            b1y1 = [0.609443108636,0.621009272295 ,0.614478088781, 0.601248481298 , 0.623991607677] # bump error of beam 1  in Y
        
            b2y  = [-841.138628609,-719.297850033,-596.538885707,-473.237832191,-350.08428254] # bump position of beam 2 in Y
            b2y1 = [0.609178439436 ,0.6209597091,0.606084407159 ,0.594140166549,0.608010096941] # bump error of beam 2  in Y

    if 'nom' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1186.66287256,1064.24547186,941.60000741,818.963884802,696.153497379] # bump position of beam 1 in X                                          
            b1y1 = [0.523116306458,0.500617305001,0.512144585291,0.50374874509,0.505586326117] # bump position of beam 1 in X                                                          

            b2y  = [1188.50410673,1066.36869545,944.551425388,822.47032546,700.20418211] # bump position of beam 2 in X                                        
            b2y1 = [0.507476518792,0.518658207823,0.500114092748,0.5230244963,0.528579885847] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-841.929154572,-719.895713773,-596.704561494,-473.564796813,-350.360811641] # bump position of beam 1 in Y
            b1y1 = [0.609463975696,0.621004922296 ,0.614535141941,0.601236757043,0.623979748553] # bump error of beam 1  in Y
        
            b2y  = [-841.39827891,-719.174281934,-596.523228167,-473.050355447,-350.105068524] # bump position of beam 2 in Y
            b2y1 = [0.609126715514,0.621013799199,0.606079916578,0.594216963973,0.608011073344] # bump error of beam 2  in Y

    if 'dor' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1186.76316078,1064.51753591,941.89503801,819.095742513,696.276166039] # bump position of beam 1 in X                                          
            b1y1 = [0.523093017223,0.50051737248,0.777239616845,0.503694301408 ,0.505521736063] # bump position of beam 1 in X                                                          

            b2y  = [1188.2933395,1066.32241088,944.713432087,822.616141105,700.526794465] # bump position of beam 2 in X                                        
            b2y1 = [0.507388035912,0.518643719679,0.500141783456,0.5230872402,0.528475615351] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-841.974129119,-720.043993449,-596.906407648,-473.710440706,-350.373032779 ] # bump position of beam 1 in Y
            b1y1 = [0.609472897358,0.620978153438,0.614449219331 ,0.601253417722,0.623981947449] # bump error of beam 1  in Y
        
            b2y  = [-841.316049173,-719.322958487,-596.66086808,-473.262185719,-350.193402018] # bump position of beam 2 in Y
            b2y1 = [0.60914072062,0.620949333601,0.606122120399,0.594130976314,0.608016832603] # bump error of beam 2  in Y

    if 'arc' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1186.78528344,1064.42020904,941.990274735,819.018129086,696.204670411] # bump position of beam 1 in X                                          
            b1y1 = [0.523088186792,0.50055129566 ,0.877093470042,0.503725899076, 0.505558958384] # bump position of beam 1 in X                                                          

            b2y  = [1188.21344032,1066.11018625,944.665973571,822.60105874,700.538229742] # bump position of beam 2 in X                                        
            b2y1 = [0.507357810838,0.518584955687,0.500132848142,0.523080442092,0.528472495053 ] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-841.644379576 ,-719.705159136,-596.764281406,-473.634135764,-350.47498842] # bump position of beam 1 in Y
            b1y1 = [0.609421346869,0.62104895406 ,0.614508459429,0.601243950905,0.624002054916] # bump error of beam 1  in Y
        
            b2y  = [-840.961235076,-719.272741302,-596.416896014,-473.213478298,-349.975162875] # bump position of beam 2 in Y
            b2y1 = [0.609226403819,0.620970292546,0.606051528205,0.594149537609 ,0.608007338597] # bump error of beam 2  in Y
 

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
