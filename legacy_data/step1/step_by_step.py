import ROOT as r
import sys
import os
import pickle
import datetime
import math

print (datetime.datetime.now())
def generateTimeWindows(whichScan,whichVtx):
   if whichScan == "B1Y1":
        begin = [
            1530417492,         # -1sigma [start]
            1530417562,         # 0sigma/head-on [start]
            1530417633          # +1sigma [start]
            ]
        end = [
            1530417537,         # -1sigma [end]
            1530417607,         # 0sigma/head-on [end]
            1530417677          # +1sigma [end]
            ]
   if whichScan == "B1Y2":
        begin = [ 1530417706, 1530417778, 1530417847]    
        end =   [ 1530417751, 1530417821, 1530417893]

   if whichScan == "B1Y3":
        begin = [1530417920,1530417992,1530418062]     
        end =   [1530417965,1530418035,1530418107]
         
   if whichScan == "B1Y4":
        begin = [1530418135,1530418204,1530418276]    
        end =   [1530418180,1530418250,1530418321] 
        
   if whichScan == "B1Y5":
        begin = [1530418349,1530418419,1530418490]     
        end =   [1530418394,1530418464,1530418534]

   if whichScan == "B1X1":
        begin = [1530418959,1530419030,1530419103]    
        end =   [1530419004,1530419076,1530419147]
           
   if whichScan == "B1X2":
        begin = [1530419175,1530419248,1530419319]     
        end =   [1530419220,1530419291,1530419364] 
          
   if whichScan == "B1X3":
        begin = [1530419392,1530419463,1530419535]    
        end =   [1530419436,1530419507,1530419580]
            
   if whichScan == "B1X4":
        begin = [1530419606,1530419677,1530419750]
        end =   [1530419651,1530419723,1530419795]
            
   if whichScan == "B1X5":
        begin = [1530419822,1530419894,1530419967]
        end =   [1530419867,1530419938,1530420011]

   if whichScan == "B2Y1":
        begin = [1530420649,1530420723,1530420796]    
        end =   [1530420694,1530420767,1530420840]
            
   if whichScan == "B2Y2":
        begin = [1530420869,1530420942,1530421016]
        end =   [1530420914,1530420987,1530421060]
          
   if whichScan == "B2Y3":
        begin = [1530421089,1530421162,1530421235]
        end =   [1530421133,1530421206,1530421279]

   if whichScan == "B2Y4":
        begin = [1530421308,1530421381,1530421453]
        end =   [1530421353,1530421426,1530421499]

   if whichScan == "B2Y5":
        begin = [1530421526,1530421599,1530421672]
        end =   [1530421571,1530421644,1530421717]
    
   if whichScan == "B2X1":
        begin = [1530422217,1530422287,1530422357]
        end =   [1530422261,1530422332,1530422402]
            
   if whichScan == "B2X2":
        begin = [1530422428,1530422498,1530422568]
        end =   [1530422473,1530422543,1530422612]
            
   if whichScan == "B2X3":
        begin = [1530422639,1530422708,1530422778]
        end =   [1530422683,1530422753,1530422823]

   if whichScan == "B2X4":
        begin = [1530422849,1530422919,1530422988]
        end =   [1530422894,1530422963,1530423033]
            
   if whichScan == "B2X5":
        begin = [1530423060,1530423129,1530423199]
        end =   [1530423104,1530423174,1530423243]
   return begin, end

def generateOffsetPositions(whichScan):
   if "B1Y1" in whichScan: 
	nomPos_arc =[ -125.173228646667 , -0.965174166666674 , 120.874581073334 ]
	nomPos_DOR =[ -122.27601093657 , 0.560869565217474 , 123.77179878343 ]
	nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
	nomPos_av =[ -123.724619791619 , -0.2021523007246 , 122.323189928382 ]
  
   if "B1Y2" in whichScan:
	nomPos_arc =[ -123.275469010542 , 0.560171487 , 122.772355610459 ]
	nomPos_DOR =[ -119.92180777716 , 2.47045454545478 , 126.126016843841 ]
	nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
	nomPos_av =[ -121.598638393851 , 1.51531301622739 , 124.449186227149 ]

   if "B1Y3" in whichScan:
        nomPos_arc =[ -121.739925172979 , 1.03784128000003 , 124.307899449021 ]
	nomPos_DOR =[ -117.827173180566 , 4.36477272727289 , 128.220651441434 ]
	nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
	nomPos_av =[ -119.783549176773 , 2.70130700363646 , 126.264275445227 ]

   if "B1Y4" in whichScan:
        nomPos_arc =[ -121.591797345 , 1.12904371875 , 124.456027276 ]
	nomPos_DOR =[ -115.828803615348 , 6.55851063829805 , 130.219021005652 ]
	nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
	nomPos_av =[ -118.710300480174 , 3.84377717852403 , 127.337524140825 ]

   if "B1Y5" in whichScan:
        nomPos_arc =[ -121.717507846666 , 0.836668616666664 , 124.330301873334 ]
	nomPos_DOR =[ -114.604075353478 , 8.36956521739147 , 131.443734366522 ]
	nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
	nomPos_av =[ -118.160791600072 , 4.60311691702907 , 127.887018119928 ]

   if "B1X1" in whichScan:
	nomPos_arc =[ -123.44584642131 , -0.941747843749999 , 122.60196329869 ]
	nomPos_DOR =[ -122.287399825459 , 0.31063829787232 , 123.760409894541 ]
	nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
	nomPos_av =[ -122.866623123385 , -0.31555477293884 , 123.181186596616 ]

   if "B1X2" in whichScan:
        nomPos_arc =[ -124.399532056167 , -2.11773649333333 , 121.648292564834 ]
	nomPos_DOR =[ -122.994564483913 , -1.12613636363639 , 123.053260137087 ]
	nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
	nomPos_av =[ -123.69704827004 , -1.62193642848486 , 122.35077635096 ]

   if "B1X3" in whichScan:
        nomPos_arc =[ -121.871443611833 , -0.401172946428544 , 124.176381010166 ]
	nomPos_DOR =[ -121.773912311 , 0.075555555555527 , 124.273912311 ]
	nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
	nomPos_av =[ -121.822677961417 , -0.162808695436508 , 124.225146660583 ]

   if "B1X4" in whichScan:
        nomPos_arc =[ -123.510141972438 , -0.717837824999998 , 122.537682648562 ]
	nomPos_DOR =[ -123.323682842401 , -0.862765957446816 , 122.724141778599 ]
	nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
	nomPos_av =[ -123.41691240742 , -0.790301891223407 , 122.630912213581 ]

   if "B1X5" in whichScan:
        nomPos_arc =[ -124.014152707959 , -1.19031816666666 , 122.033657012042 ]
	nomPos_DOR =[ -124.535397817247 , -1.99111111111115 , 121.512411902754 ]
	nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
	nomPos_av =[ -124.274775262603 , -1.59071463888891 , 121.773034457398 ]

   if "B2Y1" in whichScan:
        nomPos_arc =[ 123.971875799167 , -0.896217186666667 , -122.075933920834 ]
	nomPos_DOR =[ 120.85639741 , -2.51444444444444 , -125.19141231 ]
	nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
	nomPos_av =[ 122.414136604583 , -1.70533081555555 , -123.633673115417 ]

   if "B2Y2" in whichScan:
        nomPos_arc =[ 121.365594176167 , -1.23693588033333 , -124.682230444833 ]
	nomPos_DOR =[ 120.438694918696 , -1.94891304347826 , -125.609129702305 ]
	nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
	nomPos_av =[ 120.902144547431 , -1.5929244619058 , -125.145680073569 ]

   if "B2Y3" in whichScan:
        nomPos_arc =[ 122.010097318667 , -1.46271982666669 , -124.037727303333 ]
	nomPos_DOR =[ 121.288356755445 , -1.15444444444442 , -124.759467866555 ]
	nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
	nomPos_av =[ 121.649227037056 , -1.30858213555556 , -124.398597584944 ]

   if "B2Y4" in whichScan:
        nomPos_arc =[ 121.3513653665 , -0.952520668749997 , -124.6964592545 ]
	nomPos_DOR =[ 122.924751554499 , 0.835869565217377 , -123.123073066502 ]
	nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
	nomPos_av =[ 122.138058460499 , -0.05832555176631 , -123.909766160501 ]

   if "B2Y5" in whichScan:
        nomPos_arc =[ 121.794729677709 , -1.76310044333333 , -124.253080042292 ]
	nomPos_DOR =[ 124.816303614348 , 2.15543478260864 , -121.231506105653 ]
	nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
	nomPos_av =[ 123.305516646028 , 0.196167169637655 , -122.742293073972 ]

   if "B2X1" in whichScan:
        nomPos_arc =[ 124.578919728833 , 0.204112884062498 , -121.468889991167 ]
	nomPos_DOR =[ 121.876288714348 , -2.12717391304346 , -124.171521005652 ]
	nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
	nomPos_av =[ 123.227604221591 , -0.961530514490481 , -122.820205498409 ]

   if "B2X2" in whichScan:
        nomPos_arc =[ 123.036158155959 , -1.25988816333333 , -123.011666465042 ]
	nomPos_DOR =[ 119.237547575701 , -4.01413043478259 , -126.8102770453 ]
	nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
	nomPos_av =[ 121.13685286583 , -2.63700929905796 , -124.910971755171 ]

   if "B2X3" in whichScan:
        nomPos_arc =[ 123.410140765934 , 0.890955333333306 , -122.637683856066 ]
	nomPos_DOR =[ 118.90679878443 , -3.40326086956521 , -127.14102583757 ]
	nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
	nomPos_av =[ 121.158469775182 , -1.25615276811595 , -124.889354846818 ]

   if "B2X4" in whichScan:
        nomPos_arc =[ 124.0358014565 , 1.5854841 , -122.0120231645 ]
	nomPos_DOR =[ 118.323912311 , -4.06022727272726 , -127.72391231 ]
	nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
	nomPos_av =[ 121.17985688375 , -1.23737158636363 , -124.86796773725 ]

   if "B2X5" in whichScan:
        nomPos_arc =[ 122.734850288334 , 1.27429093333333 , -123.312959431667 ]
	nomPos_DOR =[ 116.094518370606 , -5.4195652173913 , -129.953291349394 ]
	nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
	nomPos_av =[ 119.41468432947 , -2.07263714202899 , -126.63312539053 ]

   return nomPos_arc, nomPos_DOR, nomPos, nomPos_av  

def makeCalibPlot(whichScan,rootOutFile,pdfOutFile,mean_gauss_av,mean_gauss_av_err,mean_gauss_nom,mean_gauss_nom_err,mean_gauss_dor,mean_gauss_dor_err,mean_gauss_arc,mean_gauss_arc_err):
   if 'B1X' in whichScan or "B2X" in whichScan:
        whichVtx = "vtx_x" 

   if 'B1Y' in whichScan or "B2Y" in whichScan:
        whichVtx = "vtx_y"

   print "Now for scan ", whichScan, " and vtx coordinate ", whichVtx

   filelist = os.listdir("./")

   chain = r.TChain("lumi/tree")

   with open('./filesForScan.pkl', 'rb') as f:
        filelist= pickle.load(f)

   for name in filelist[whichScan]:
        localName = name.split('/')[-1] # pcc_
        posZeroBias = name.find('ZeroBias') #112
        print "posZeroBias" ,posZeroBias
        print name   #root://eoscms/eos
        if not posZeroBias:
            print "Problem with form of filename, assumed to be of a form such that filename[pos, pos+8] == ZeroBias, please check"
            sys.exit(1)
        whichZeroBias = name[posZeroBias: posZeroBias+9]
        print "whichzerobias" ,whichZeroBias
        localName = whichZeroBias + '_' + localName
        if localName.find(".root"):
            chain.Add(name)

   numFiles = chain.GetListOfFiles().GetEntries()
   nentries = chain.GetEntries()
   print "Chain contains " + str(numFiles) + " files"
   print "Chain contains events", nentries

   beginTS, endTS=  generateTimeWindows(whichScan,whichVtx)
   Pos_arc , Pos_DOR , Pos_nom , Pos_av = generateOffsetPositions(whichScan)
   rfile = r.TFile(rootOutFile,"recreate")
   print "ok text0-1-2-3"
   canvas = [r.TCanvas() for i in range(0,8)]
   #    r.gStyle.SetPalette(1)
   r.gStyle.SetOptStat(1) #show normal statistics
   r.gStyle.SetOptFit(1)  #show fit statistics
   if whichVtx == "vtx_y":
      r.gStyle.SetStatX(0.8)
      r.gStyle.SetStatY(0.5)
   if whichVtx == "vtx_x":
      r.gStyle.SetStatX(0.5)
      r.gStyle.SetStatY(0.55)
   
   hist = r.TH1F("hist",whichScan + " scan, " + whichVtx, 150, -0.2, 0.2) # hardcoded
   hList = [r.TH1F() for entry in beginTS]
   histoList = [r.TH1F() for entry in beginTS]
   avVtxPos = [0.0 for entry in beginTS]
   errAvVtxPos = [0.0 for entry in beginTS]
   chi2_ndfAvVtxPos = [0.0 for entry in beginTS]
   vtxVspos=[r.TGraphErrors()for i in range(0,4)]
   resedual_vtxVspos=[r.TGraphErrors()for i in range(0,4)]
   line = [r.TLine for i in range(0,4)]
   fit_vtxVspos=[]
   intersection_whichScan_vtxVspos=[0.0 for i in range(0,4)]
   linefit_chi2_ndfAvVtxPos = [0.0 for i in range(0,4)]
   intersection_whichScan_error_chi2=[0.0 for i in range(0,4)]
   true_beamspot_pos_whichScan = [0.0 for i in range(0,4)]
   true_beamspot_pos_whichScan_err = [0.0 for i in range(0,4)]
   latex1 = r . TLatex ()
   latex1 . SetNDC ()
   latex1 . SetTextColor(r.kRed)
   latex1.SetTextFont(42)
   print "all definitions are ok"

   for index, value in enumerate(beginTS):
      hList[index] = hist.Clone()
      hList[index].SetName("hist"+str(index))

      stringCond = "run == 319019 " + "&& timeStamp_begin >= " + str(beginTS[index]) + " && timeStamp_begin <= " + str(endTS[index]) + "&& nVtx >= 1 " + " && vtx_isGood"
      print stringCond
      chain.Draw(whichVtx + " >>hist"+str(index), stringCond)
               
      histoList[index]= r.gDirectory.Get("hist"+str(index))
      histoList[index].GetXaxis().SetTitle(whichVtx + " [cm]")
      histoList[index].GetYaxis().SetTitle("Offset in [#mum]")
      histoList[index].SetTitle("%i" %index)
      if histoList[index].GetEntries()==0:
         continue
        
      histoList[index].Fit("gaus")
      fit = histoList[index].GetFunction("gaus")
      avVtxPos[index]=fit.GetParameter(1)*10000
      errAvVtxPos[index] = fit.GetParError(1)*10000
      chi2_ndfAvVtxPos[index] = (fit.GetChisquare()/ fit.GetNDF())
      canvas[index].cd()                
      histoList[index].Draw()
      histoList[index].Write()
      canvas[index].SaveAs(pdfOutFile+"(")

   for index in range(0,3):
      vtxVspos[0].SetPoint(index, Pos_av[index],avVtxPos[index])
      vtxVspos[0].SetPointError(index, 0. ,errAvVtxPos[index]*max(1,math.sqrt(chi2_ndfAvVtxPos[index])))
      vtxVspos[1].SetPoint(index, Pos_nom[index],avVtxPos[index])
      vtxVspos[1].SetPointError(index, 0. ,errAvVtxPos[index]*max(1,math.sqrt(chi2_ndfAvVtxPos[index])))
      vtxVspos[2].SetPoint(index, Pos_DOR[index],avVtxPos[index])
      vtxVspos[2].SetPointError(index, 0. ,errAvVtxPos[index]*max(1,math.sqrt(chi2_ndfAvVtxPos[index])))
      vtxVspos[3].SetPoint(index, Pos_arc[index],avVtxPos[index])
      vtxVspos[3].SetPointError(index, 0. ,errAvVtxPos[index]*max(1,math.sqrt(chi2_ndfAvVtxPos[index])))

   for j in range(0,4):
      vtxVspos[j].SetLineWidth(2)
      vtxVspos[j].SetMarkerColor(r.kRed)
      vtxVspos[j].SetMarkerStyle(21)
      vtxVspos[j].SetMarkerSize(0.5)
      vtxVspos[j].Fit("pol1")
      fit_vtxVspos.append(vtxVspos[j].GetFunction("pol1"))
      linear_fit = vtxVspos[j].GetFunction("pol1")
      intersection_whichScan_vtxVspos[j]=linear_fit.GetParameter(0)
      linefit_chi2_ndfAvVtxPos[j]=(linear_fit.GetChisquare()/ linear_fit.GetNDF())
      intersection_whichScan_error_chi2[j]=(linear_fit.GetParError(0)*max(1,math.sqrt(linefit_chi2_ndfAvVtxPos[j])))

      if j == 0:
         linear_fit = vtxVspos[0].GetFunction("pol1")
         av_true_beamspot_pos_whichScan = fit_vtxVspos[j].Eval(mean_gauss_av)
         av_true_beamspot_pos_whichScan_err = math.sqrt(((linear_fit.GetParameter(1)**2) * (mean_gauss_av**2) * ((linear_fit.GetParError(1) / linear_fit.GetParameter(1))**2 + (mean_gauss_av_err / mean_gauss_av)**2)) + (linear_fit.GetParError(0)**2))
         true_beamspot_pos_whichScan[0] = av_true_beamspot_pos_whichScan
         true_beamspot_pos_whichScan_err[0] = av_true_beamspot_pos_whichScan_err
         print 'av_true_beamspot_pos_' , whichScan , '=  ' , av_true_beamspot_pos_whichScan
         print 'av_true_beamspot_pos_' , whichScan , '_err=  ' , av_true_beamspot_pos_whichScan_err

      if j == 1:
         linear_fit = vtxVspos[1].GetFunction("pol1")
         nom_true_beamspot_pos_whichScan = fit_vtxVspos[j].Eval(mean_gauss_nom)
         nom_true_beamspot_pos_whichScan_err = math.sqrt(((linear_fit.GetParameter(1)**2) * (mean_gauss_nom**2) * ((linear_fit.GetParError(1) / linear_fit.GetParameter(1))**2 + (mean_gauss_nom_err / mean_gauss_nom)**2)) + (linear_fit.GetParError(0)**2))
         true_beamspot_pos_whichScan[1] = nom_true_beamspot_pos_whichScan
         true_beamspot_pos_whichScan_err[1] = nom_true_beamspot_pos_whichScan_err
         print 'nom_true_beamspot_pos_' , whichScan , '=  ' , nom_true_beamspot_pos_whichScan
         print 'nom_true_beamspot_pos_' , whichScan , '_err=  ' , nom_true_beamspot_pos_whichScan_err

      if j == 2:
         linear_fit = vtxVspos[2].GetFunction("pol1")
         dor_true_beamspot_pos_whichScan = fit_vtxVspos[j].Eval(mean_gauss_dor)
         dor_true_beamspot_pos_whichScan_err = math.sqrt(((linear_fit.GetParameter(1)**2) * (mean_gauss_dor**2) * ((linear_fit.GetParError(1) / linear_fit.GetParameter(1))**2 + (mean_gauss_dor_err / mean_gauss_dor)**2)) + (linear_fit.GetParError(0)**2))
         true_beamspot_pos_whichScan[2] = dor_true_beamspot_pos_whichScan
         true_beamspot_pos_whichScan_err[2] = dor_true_beamspot_pos_whichScan_err
         print 'dor_true_beamspot_pos_' , whichScan , '=  ' , dor_true_beamspot_pos_whichScan
         print 'dor_true_beamspot_pos_' , whichScan , '_err=  ' , dor_true_beamspot_pos_whichScan_err

      if j == 3:
         linear_fit = vtxVspos[3].GetFunction("pol1")
         arc_true_beamspot_pos_whichScan = fit_vtxVspos[j].Eval(mean_gauss_arc)
         arc_true_beamspot_pos_whichScan_err = math.sqrt(((linear_fit.GetParameter(1)**2) * (mean_gauss_arc**2) * ((linear_fit.GetParError(1) / linear_fit.GetParameter(1))**2 + (mean_gauss_arc_err / mean_gauss_arc)**2)) + (linear_fit.GetParError(0)**2))
         true_beamspot_pos_whichScan[3] = arc_true_beamspot_pos_whichScan
         true_beamspot_pos_whichScan_err[3] = arc_true_beamspot_pos_whichScan_err
         print 'arc_true_beamspot_pos_' , whichScan , '=  ' , arc_true_beamspot_pos_whichScan
         print 'arc_true_beamspot_pos_' , whichScan , '_err=  ' , arc_true_beamspot_pos_whichScan_err

   for j in range(0,4):
      canvas[j+3].Divide(1,2)
      canvas[j+3].cd(1)
      canvas[j+3].cd(1).SetPad(0,0.3,1.0,1.0)     
      vtxVspos[j].Draw("ap")
      if j == 0:
         vtxVspos[j].SetTitle("timestamp scan " + whichScan + ": Mean " + whichVtx + " position in microns vs Pos_av separation in microns")
         vtxVspos[j].GetXaxis().SetTitle("Pos_av in microns")
         vtxVspos[j].GetYaxis().SetTitle("Pos_av" + whichVtx + "  in microns")
      elif j == 1:
         vtxVspos[j].SetTitle("timestamp scan " + whichScan + ": Mean " + whichVtx + " position in microns vs Pos_nom separation in microns")
         vtxVspos[j].GetXaxis().SetTitle("Pos_nom in microns")
         vtxVspos[j].GetYaxis().SetTitle("Pos_nom" + whichVtx + "  in microns")
      elif j == 2:
         vtxVspos[j].SetTitle("timestamp scan " + whichScan + ": Mean " + whichVtx + " position in microns vs Pos_DOR separation in microns")
         vtxVspos[j].GetXaxis().SetTitle("Pos_DOR in microns")
         vtxVspos[j].GetYaxis().SetTitle("Pos_DOR" + whichVtx + "  in microns")
      elif j == 3:
         vtxVspos[j].SetTitle("timestamp scan " + whichScan + ": Mean " + whichVtx + " position in microns vs Pos_arc separation in microns")
         vtxVspos[j].GetXaxis().SetTitle("Pos_arc in microns")
         vtxVspos[j].GetYaxis().SetTitle("Pos_arc" + whichVtx + "  in microns")

      vtxVspos[j].GetFunction("pol1").SetLineColor(r.kBlue)
      vtxVspos[j].Write()


   for i in range(0,3):
      y0_fit = fit_vtxVspos[0].Eval(Pos_av[i])
      y1_fit = fit_vtxVspos[1].Eval(Pos_nom[i])
      y2_fit = fit_vtxVspos[2].Eval(Pos_DOR[i])
      y3_fit = fit_vtxVspos[3].Eval(Pos_arc[i])
      resedual_vtxVspos[0].SetPoint(i,Pos_av[i],(avVtxPos[i] - y0_fit))
      resedual_vtxVspos[0].SetPointError(i, 0. , errAvVtxPos[i]*max(1,math.sqrt(chi2_ndfAvVtxPos[i])))
      resedual_vtxVspos[1].SetPoint(i,Pos_nom[i],(avVtxPos[i] - y1_fit))
      resedual_vtxVspos[1].SetPointError(i, 0. , errAvVtxPos[i]*max(1,math.sqrt(chi2_ndfAvVtxPos[i])))
      resedual_vtxVspos[2].SetPoint(i,Pos_DOR[i],(avVtxPos[i] - y2_fit))
      resedual_vtxVspos[2].SetPointError(i, 0. , errAvVtxPos[i]*max(1,math.sqrt(chi2_ndfAvVtxPos[i])))
      resedual_vtxVspos[3].SetPoint(i,Pos_arc[i],(avVtxPos[i] - y3_fit))
      resedual_vtxVspos[3].SetPointError(i, 0. , errAvVtxPos[i]*max(1,math.sqrt(chi2_ndfAvVtxPos[i])))
      

   for j in range(0,4):
      resedual_vtxVspos[j].SetMarkerColor(r.kRed)
      resedual_vtxVspos[j].SetMarkerStyle(21)
      resedual_vtxVspos[j].SetMarkerSize(1.)
      canvas[j+3].cd(2)
      canvas[j+3].cd(2).SetPad(0,0,1.0,0.3)
      resedual_vtxVspos[j].Draw("PA")
      resedual_vtxVspos[j].GetYaxis().SetTitle("Residuals [#mum]")
      resedual_vtxVspos[j].GetYaxis().SetLabelSize(0.07)
      resedual_vtxVspos[j].GetYaxis().SetTitleSize(0.07)
      resedual_vtxVspos[j].GetYaxis().SetTitleOffset(0.5)
      resedual_vtxVspos[j].SetTitle("")
      resedual_vtxVspos[j].Write()
      line[j] = r.TLine(vtxVspos[j].GetXaxis().GetXmin(), 0.0, vtxVspos[j].GetXaxis().GetXmax(), 0.0)
      line[j].SetLineColor(14)
      line[j].SetLineStyle(3)
      line[j].Draw("same") 

   for j in range(0,4): 
      canvas[j+3].cd(1)
      stats1 =vtxVspos[j].GetListOfFunctions().FindObject("stats")
      if not stats1: 
         continue 
      stats1.__class__ = r.TPaveStats
      stats1.SetLineWidth (0)
      stats1.SetTextColor(r.kRed)
      stats1.SetTextSize(0.04)
      
      if 'B1X' in whichScan or "B2X" in whichScan:
         latex1 . DrawText (0.2, 0.4 , whichScan )
         stats1.SetX1NDC(0.15) 
         stats1.SetX2NDC(0.50)
         stats1.SetY1NDC(0.15)
         stats1.SetY2NDC(0.38)
         canvas[j+3].Modified()
         canvas[j+3].Update()
         
      if 'B1Y' in whichScan or "B2Y" in whichScan:
         latex1 . DrawText (0.2,0.8 , whichScan )
         stats1.SetX1NDC(0.15) 
         stats1.SetX2NDC(0.50)
         stats1.SetY1NDC(0.55)
         stats1.SetY2NDC(0.78)

   for j in range(0,4):      
      canvas[j+3].SaveAs("calib_"+whichScan+".root"+"(")
      canvas[j+3].SaveAs(pdfOutFile+"(")

   canvas[7].SaveAs("calib_"+whichScan+".root"+"]")
   canvas[7].SaveAs(pdfOutFile+"]")

   with open("parameters"+ whichScan + ".txt", 'w') as f:
      f.write(" first line is average, second is nominal , third is DOR and last is ARC \n") 
      f.write("interersection and errors multiplied by sqrt(chi2/dof) of "+ whichScan + "is: \n")
      for item1, item2 in zip(intersection_whichScan_vtxVspos, intersection_whichScan_error_chi2):
         f.write("%s , %s \n" % (item1, item2))
      f.write("--------------------------- \n")
      f.write(" first line is average, second is nominal , third is DOR and last is ARC \n") 
      f.write("true beamspot pos after vtx counting of "+ whichScan + "is: \n")
      for item1, item2 in zip(true_beamspot_pos_whichScan, true_beamspot_pos_whichScan_err):
         f.write("%s , %s \n" % (item1, item2))
      f.write("=============================================================================================== \n")
   rfile.Write()
   rfile.Close()

if __name__ == '__main__':

	makeCalibPlot("B1Y1", "LScalib_B1Y1.root", "plotsLScalib_B1Y1.pdf" , 1.11882 , 0.132495 , 1.81936 , 0.132766 , 2.56717 , 0.133196 , -0.329635 , 0.132914 )
	makeCalibPlot("B1Y2", "LScalib_B1Y2.root", "plotsLScalib_B1Y2.pdf" , 0.96302 , 0.130344 , -0.462255 , 0.130295 , 2.63986 , 0.130678 , -0.713787 , 0.131553 )
	makeCalibPlot("B1Y3", "LScalib_B1Y3.root", "plotsLScalib_B1Y3.pdf" , 0.766611 , 0.131227 , -2.47338 , 0.131159 , 2.72282 , 0.131415 , -1.18957 , 0.131112 )
	makeCalibPlot("B1Y4", "LScalib_B1Y4.root", "plotsLScalib_B1Y4.pdf" , -0.201806 , 0.131829 , -4.51422 , 0.131825 , 2.6793 , 0.131786 , -3.08289 , 0.131855 )
	makeCalibPlot("B1Y5", "LScalib_B1Y5.root", "plotsLScalib_B1Y5.pdf" , -0.79618 , 0.133379 , -5.65822 , 0.133346 , 2.7614 , 0.133357 , -4.35372 , 0.133352 )
	makeCalibPlot("B1X1", "LScalib_B1X1.root", "plotsLScalib_B1X1.pdf" , -1.53926 , 0.191698 , -1.69636 , 0.156575 , -0.96002 , 0.191668 , -2.11848 , 0.192129 )
	makeCalibPlot("B1X2", "LScalib_B1X2.root", "plotsLScalib_B1X2.pdf" , -1.88436 , 0.189724 , -1.21111 , 0.189678 , -1.18188 , 0.189731 , -2.58683 , 0.189716 )
	makeCalibPlot("B1X3", "LScalib_B1X3.root", "plotsLScalib_B1X3.pdf" , -1.65469 , 0.18723 , -2.85481 , 0.187062 , -1.60581 , 0.187209 , -1.70356 , 0.187249 )
	makeCalibPlot("B1X4", "LScalib_B1X4.root", "plotsLScalib_B1X4.pdf" , -2.34452 , 0.19002 , -1.95134 , 0.189983 , -2.25136 , 0.190033 , -2.43768 , 0.190005 )
	makeCalibPlot("B1X5", "LScalib_B1X5.root", "plotsLScalib_B1X5.pdf" , -2.19107 , 0.192639 , -0.940169 , 0.192624 , -2.4517 , 0.192645 , -1.93044 , 0.192633 )
	makeCalibPlot("B2Y1", "LScalib_B2Y1.root", "plotsLScalib_B2Y1.pdf" , 2.19903 , 0.13519 , 2.81015 , 0.134497 , 0.642263 , 0.134727 , 3.75559 , 0.13563 )
	makeCalibPlot("B2Y2", "LScalib_B2Y2.root", "plotsLScalib_B2Y2.pdf" , 0.773493 , 0.133001 , 2.89474 , 0.132892 , 0.310138 , 0.133054 , 1.23685 , 0.132953 )
	makeCalibPlot("B2Y3", "LScalib_B2Y3.root", "plotsLScalib_B2Y3.pdf" , 0.730959 , 0.133875 , 2.10561 , 0.133878 , 0.370332 , 0.134069 , 1.09151 , 0.134667 )
	makeCalibPlot("B2Y4", "LScalib_B2Y4.root", "plotsLScalib_B2Y4.pdf" , -0.509655 , 0.132013 , 0.376215 , 0.131515 , 0.277034 , 0.132082 , -1.29634 , 0.131947 )
	makeCalibPlot("B2Y5", "LScalib_B2Y5.root", "plotsLScalib_B2Y5.pdf" , -1.84033 , 0.132138 , -2.1219 , 0.132151 , -0.32927 , 0.132788 , -3.35134 , 0.13228 )
	makeCalibPlot("B2X1", "LScalib_B2X1.root", "plotsLScalib_B2X1.pdf" , -0.0725787 , 0.158533 , -0.276333 , 0.188481 , -1.42385 , 0.16047 , 1.27869 , 0.158675 )
	makeCalibPlot("B2X2", "LScalib_B2X2.root", "plotsLScalib_B2X2.pdf" , -0.564419 , 0.189299 , 1.32292 , 0.155519 , -2.46364 , 0.15679 , 1.33467 , 0.189255 )
	makeCalibPlot("B2X3", "LScalib_B2X3.root", "plotsLScalib_B2X3.pdf" , -0.247812 , 0.193205 , 1.61746 , 0.193159 , -2.49946 , 0.193212 , 2.00384 , 0.193198 )
	makeCalibPlot("B2X4", "LScalib_B2X4.root", "plotsLScalib_B2X4.pdf" , -0.0147647 , 0.197511 , 1.82907 , 0.197459 , -2.8707 , 0.197514 , 2.84117 , 0.197509 )
	makeCalibPlot("B2X5", "LScalib_B2X5.root", "plotsLScalib_B2X5.pdf" , -0.223828 , 0.163564 , 3.38365 , 0.195861 , -3.54403 , 0.163873 , 3.09637 , 0.163295 )

print (datetime.datetime.now())

