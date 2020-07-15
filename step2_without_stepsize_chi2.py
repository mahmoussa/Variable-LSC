
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

    nomPos_B1Y = [-244.550896771,-122.487013117833,-0.424225793333319,121.980862732875,244.882432979333]
    nomPos_B1X = [-245.409269605375,-122.308232924334,0.3761877232143,123.39658967975,246.571614571]
    nomPos_B2Y = [-244.128575881,-122.0435246375,-0.472487583333321,122.298188176625,245.233428176]
    nomPos_B2X = [-246.272655834906,-123.359516492667,-1.47953739999998,120.707350194333,243.123461587667]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def DOROSposition(whichScan):

    nomPos_B1Y = [-245.433695652174,-124.029545454546,-1.57784090909092,121.030319148936,243.626086956521]
    nomPos_B1X = [-245.552127659574,-123.501704545454,-1.53666666666665,120.785638297873,243.677777777778]
    nomPos_B2Y = [-243.249444444445,-121.846195652174,0.381666666666706,123.049456521739,245.451630434782]
    nomPos_B2X = [-247.426630434783,-125.482065217392,-3.62336956521739,118.265340909091,240.310869565217]
    return nomPos_B1Y , nomPos_B1X, nomPos_B2Y, nomPos_B2X

def averageposition(whichScan):

    nomPos_B1Y = [-244.992296211587,-123.258279286189,-1.00103335121212,121.505590940906,244.254259967927]
    nomPos_B1X = [-245.480698632475,-122.904968734894,-0.580239471726173,122.091113988811,245.124696174389]
    nomPos_B2Y = [-243.689010162722,-121.944860144837,-0.045410458333308,122.673822349182,245.342529305391]
    nomPos_B2X = [-246.849643134844,-124.420790855029,-2.55145348260868,119.486345551712,241.717165576442]
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
            b1y  = [1186.63434619,1063.67456372,941.884203746,818.665506497,695.410363495] # bump position of beam 1 in X                                          
            b1y1 = [0.523123347504 ,0.500878672926 ,0.512150102559,0.503885631619,0.506051855716] # bump position of beam 1 in X                                                          

            b2y  = [1188.65501522,1067.38788332,945.266045453,823.181692847,701.518338148] # bump position of beam 2 in X                                        
            b2y1 = [0.550356607535,0.519128819351,0.500295972818,0.523393172836,0.528351548901] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-841.696843743,-720.629162037,-598.200122406,-475.609684771,-352.736268478] # bump position of beam 1 in Y
            b1y1 = [0.609427400703,0.620936537435,0.61418593108,0.602011882996,0.625255890133] # bump error of beam 1  in Y
        
            b2y  = [-841.94766579,-720.080165678,-597.173903546,-473.293492397,-349.989344649] # bump position of beam 2 in Y
            b2y1 = [0.609089641364 ,0.620734040423 ,0.606333540101 ,0.594119407594,0.608007472224] # bump error of beam 2  in Y

    if 'nom' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1186.6628708,1064.24547186,941.60000741,818.963884802,696.153499284] # bump position of beam 1 in X                                          
            b1y1 = [0.523116306885,0.500617305001,0.512144585291,0.50374874509,0.505586325087] # bump position of beam 1 in X                                                          

            b2y  = [1188.50410512,1066.36869545,944.551425388,822.47032546,700.204183702] # bump position of beam 2 in X                                        
            b2y1 = [0.507476518071,0.518658207823,0.500114092748,0.5230244963,0.528579885255] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-841.929152781,-719.895713773,-596.704561494,-473.564796813,-350.360813452] # bump position of beam 1 in Y
            b1y1 = [0.609463975352,0.621004922296 ,0.614535141941,0.601236757043 ,0.623979748875] # bump error of beam 1  in Y
        
            b2y  = [-841.398277145,-719.174281934,-596.523228167,-473.050355447,-350.105070337] # bump position of beam 2 in Y
            b2y1 = [0.609126715791,0.621013799199,0.606079916578,0.594216963973 ,0.608011073436 ] # bump error of beam 2  in Y

    if 'dor' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1186.94672762,1063.99343392,941.954636086,818.677430349,695.242693784] # bump position of beam 1 in X                                          
            b1y1 = [0.523056290049,0.500724072248,0.512154373085,0.503879795795,0.506174477756] # bump position of beam 1 in X                                                          

            b2y  = [1189.22464233,1068.1432148,946.256862238,824.471798007,703.010901499] # bump position of beam 2 in X                                        
            b2y1 = [0.507874657487,0.519664323288,0.500803588213,0.524463299089,0.528723946931] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-842.256994262 ,-721.283320967,-599.08253968,-476.967352405,-354.516857756] # bump position of beam 1 in Y
            b1y1 = [0.609542694912,0.621010979203,0.614291930213,0.603168586881 ,0.627326338268] # bump error of beam 1  in Y
        
            b2y  = [-842.520266698,-720.271096062,-597.222497827,-472.890177493,-349.156625558] # bump position of beam 2 in Y
            b2y1 = [0.609155605645,0.620709614862,0.606357978604,0.59429106475,0.608113454173] # bump error of beam 2  in Y

    if 'arc' in pdfOutFile:
        if whichVtx == "vtx_x":
            b1y  = [1186.3195747,1063.35245194,941.813262618,818.65346035,695.579771228] # bump position of beam 1 in X                                          
            b1y1 = [0.523213285901,0.50105696464,0.512146966911,0.503891558934,0.505934534602] # bump position of beam 1 in X                                                          

            b2y  = [1188.08030994,1066.62034106,944.260116402,821.871135478,700.007446235] # bump position of beam 2 in X                                        
            b2y1 = [0.593336035521,0.518747461884,0.500084301252,0.522836391394,0.528658884017] # bump error of beam 2  in X   

        if whichVtx == "vtx_y":
            b1y  = [-841.13112581,-719.958901205,-597.296453747,-474.218657214,-350.910317203] # bump position of beam 1 in Y
            b1y1 = [0.609404982643,0.620992715583,0.614317422634,0.601357890663 ,0.624123305332] # bump error of beam 1  in Y
        
            b2y  = [-841.371746806,-719.886143955,-597.124531101,-473.702473113,-350.833475671] # bump position of beam 2 in Y
            b2y1 = [0.609130999423 ,0.620771182885,0.60630949859,0.593995947996,0.608136420295 ] # bump error of beam 2  in Y
 

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
