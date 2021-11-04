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
      nomPos_arc =[ -125.999257618712 , -0.965174166666674 , 121.700610045379 ]
      nomPos_DOR =[ -121.637431817442 , 0.560869565217474 , 123.133219664302 ]
      nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
      nomPos_av =[ -123.818344718078 , -0.2021523007246 , 122.416914854841 ]
  
   if "B1Y2" in whichScan:
      nomPos_arc =[ -122.528739318712 , 0.560171487 , 122.025625918629 ]
      nomPos_DOR =[ -119.529838021789 , 2.47045454545478 , 125.73404708847 ]
      nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
      nomPos_av =[ -121.029288670251 , 1.51531301622739 , 123.87983650355 ]

   if "B1Y3" in whichScan:
      nomPos_arc =[ -121.651030678004 , 1.03784128000003 , 124.219004954046 ]
      nomPos_DOR =[ -118.037446718442 , 4.36477272727289 , 128.430924979311 ]
      nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
      nomPos_av =[ -119.844238698224 , 2.70130700363646 , 126.324964966679 ]

   if "B1Y4" in whichScan:
      nomPos_arc =[ -121.813939987712 , 1.12904371875 , 124.678169918712 ]
      nomPos_DOR =[ -116.402664109746 , 6.55851063829805 , 130.79288150005 ]
      nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
      nomPos_av =[ -119.10830204873 , 3.84377717852403 , 127.735525709381 ]

   if "B1Y5" in whichScan:
      nomPos_arc =[ -121.504960418712 , 0.836668616666664 , 124.117754445379 ]
      nomPos_DOR =[ -114.850490195702 , 8.36956521739147 , 131.690149208746 ]
      nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
      nomPos_av =[ -118.177725307207 , 4.60311691702907 , 127.903951827063 ]

   if "B1X1" in whichScan:
      nomPos_arc =[ -122.921320188108 , -0.941747843749999 , 122.077437065489 ]
      nomPos_DOR =[ -121.563018182947 , 0.31063829787232 , 123.036028252029 ]
      nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
      nomPos_av =[ -122.242169185528 , -0.31555477293884 , 122.556732658759 ]

   if "B1X2" in whichScan:
      nomPos_arc =[ -124.516415688108 , -2.11773649333333 , 121.765176196775 ]
      nomPos_DOR =[ -123.239120039468 , -1.12613636363639 , 123.297815692642 ]
      nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
      nomPos_av =[ -123.877767863788 , -1.62193642848486 , 122.531495944708 ]

   if "B1X3" in whichScan:
      nomPos_arc =[ -123.403460444441 , -0.401172946428544 , 125.708397842774 ]
      nomPos_DOR =[ -123.069361586362 , 0.075555555555527 , 125.569361586362 ]
      nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
      nomPos_av =[ -123.236411015402 , -0.162808695436508 , 125.638879714568 ]

   if "B1X4" in whichScan:
      nomPos_arc =[ -123.067152263025 , -0.717837824999998 , 122.09469293915 ]
      nomPos_DOR =[ -123.048902649164 , -0.862765957446816 , 122.449361585362 ]
      nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
      nomPos_av =[ -123.058027456095 , -0.790301891223407 , 122.272027262256 ]

   if "B1X5" in whichScan:
      nomPos_arc =[ -123.332768186025 , -1.19031816666666 , 121.352272490108 ]
      nomPos_DOR =[ -123.994554822077 , -1.99111111111115 , 120.971568907584 ]
      nomPos =[ -123.02391231 , 0 , 123.02391231 ] 
      nomPos_av =[ -123.663661504051 , -1.59071463888891 , 121.161920698846 ]

   if "B2Y1" in whichScan:
      nomPos_arc =[ 124.996751762175 , -0.896217186666667 , -123.100809883842 ]
      nomPos_DOR =[ 121.013768157251 , -2.51444444444444 , -125.348783057251 ]
      nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
      nomPos_av =[ 123.005259959712 , -1.70533081555555 , -124.224796470546 ]

   if "B2Y2" in whichScan:
      nomPos_arc =[ 120.705533113842 , -1.23693588033333 , -124.022169382508 ]
      nomPos_DOR =[ 120.158348274642 , -1.94891304347826 , -125.328783058251 ]
      nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
      nomPos_av =[ 120.431940694241 , -1.5929244619058 , -124.675476220379 ]

   if "B2Y3" in whichScan:
      nomPos_arc =[ 121.619652009175 , -1.46271982666669 , -123.647281993842 ]
      nomPos_DOR =[ 121.182116391584 , -1.15444444444442 , -124.653227502695 ]
      nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
      nomPos_av =[ 121.40088420038 , -1.30858213555556 , -124.150254748268 ]

   if "B2Y4" in whichScan:
      nomPos_arc =[ 121.453742249175 , -0.952520668749997 , -124.798836137175 ]
      nomPos_DOR =[ 123.153227502695 , 0.835869565217377 , -123.351549014698 ]
      nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
      nomPos_av =[ 122.303484875934 , -0.05832555176631 , -124.075192575936 ]

   if "B2Y5" in whichScan:
      nomPos_arc =[ 121.717983203842 , -1.76310044333333 , -124.176333568425 ]
      nomPos_DOR =[ 124.817043926816 , 2.15543478260864 , -121.232246418121 ]
      nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
      nomPos_av =[ 123.267513565328 , 0.196167169637655 , -122.704289993272 ]

   if "B2X1" in whichScan:
      nomPos_arc =[ 126.400500803088 , 0.204112884062498 , -123.290471065422 ]
      nomPos_DOR =[ 123.122563637492 , -2.12717391304346 , -125.417795928796 ]
      nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
      nomPos_av =[ 124.76153222029 , -0.961530514490481 , -124.354133497109 ]

   if "B2X2" in whichScan:
      nomPos_arc =[ 122.139592796005 , -1.25988816333333 , -122.115101105088 ]
      nomPos_DOR =[ 118.625404624449 , -4.01413043478259 , -126.198134094048 ]
      nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
      nomPos_av =[ 120.382498710227 , -2.63700929905796 , -124.156617599568 ]

   if "B2X3" in whichScan:
      nomPos_arc =[ 122.790578001622 , 0.890955333333306 , -122.018121091755 ]
      nomPos_DOR =[ 118.478134094048 , -3.40326086956521 , -126.712361147188 ]
      nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
      nomPos_av =[ 120.634356047835 , -1.25615276811595 , -124.365241119471 ]

   if "B2X4" in whichScan:
      nomPos_arc =[ 123.106851015088 , 1.5854841 , -121.083072723088 ]
      nomPos_DOR =[ 117.655839408057 , -4.06022727272726 , -127.055839407057 ]
      nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
      nomPos_av =[ 120.381345211572 , -1.23737158636363 , -124.069456065072 ]

   if "B2X5" in whichScan:
      nomPos_arc =[ 123.358347779755 , 1.27429093333333 , -123.936456923088 ]
      nomPos_DOR =[ 116.557123992037 , -5.4195652173913 , -130.415896970825 ]
      nomPos =[ 123.02391231 , 0 , -123.02391231 ] 
      nomPos_av =[ 119.957735885896 , -2.07263714202899 , -127.176176946956 ]

   return nomPos_arc, nomPos_DOR, nomPos, nomPos_av   

def makeCalibPlot(whichScan,rootOutFile,pdfOutFile,mean_gauss_av,mean_gauss_av_err,mean_gauss_nom,mean_gauss_nom_err,mean_gauss_dor,mean_gauss_dor_err,mean_gauss_arc,mean_gauss_arc_err):
   if 'B1X' in whichScan or "B2X" in whichScan:
        whichVtx = "vtx_x" 

   if 'B1Y' in whichScan or "B2Y" in whichScan:
        whichVtx = "vtx_y"

   print "Now for scan ", whichScan, " and vtx coordinate ", whichVtx

   filelist = os.listdir("./")

   chain = r.TChain("pccminitree")

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

   for j in range(0,4):
      line[j] = r.TLine(canvas[j+3].cd(2).GetUxmin(), 0.0, canvas[j+3].cd(2).GetUxmax(), 0.0)
      line[j].SetLineColor(14)
      line[j].SetLineStyle(3)
      line[j].Draw() 

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

   makeCalibPlot("B1Y1", "LScalib_B1Y1.root", "plotsLScalib_B1Y1.pdf",  1.06365, 0.137229, 1.76286, 0.137285, 2.50153, 0.137115, -0.374333, 0.13849)
   makeCalibPlot("B1Y2", "LScalib_B1Y2.root", "plotsLScalib_B1Y2.pdf",  0.991906, 0.134059, -0.435383, 0.134638, 2.66812, 0.134895, -0.684281, 0.135146)
   makeCalibPlot("B1Y3", "LScalib_B1Y3.root", "plotsLScalib_B1Y3.pdf",  0.795514, 0.135438, -2.44328, 0.135293, 2.74876, 0.135793, -1.15771, 0.135156)
   makeCalibPlot("B1Y4", "LScalib_B1Y4.root", "plotsLScalib_B1Y4.pdf",  -0.200027, 0.137018, -4.49791, 0.136721, 2.67465, 0.137104, -3.07469, 0.136918)
   makeCalibPlot("B1Y5", "LScalib_B1Y5.root", "plotsLScalib_B1Y5.pdf",  -0.764357, 0.138082, -5.62564, 0.138071, 2.78272, 0.138355, -4.3114, 0.137739)
   makeCalibPlot("B1X1", "LScalib_B1X1.root", "plotsLScalib_B1X1.pdf",  -1.99693, 0.162057, -2.16496, 0.201645, -1.41588, 0.162254, -2.57798, 0.161992)
   makeCalibPlot("B1X2", "LScalib_B1X2.root", "plotsLScalib_B1X2.pdf",  -2.02449, 0.160004, -1.34923, 0.19671, -1.32287, 0.160708, -2.72608, 0.160945)
   makeCalibPlot("B1X3", "LScalib_B1X3.root", "plotsLScalib_B1X3.pdf",  -1.79449, 0.197637, -2.96049, 0.195211, -1.74275, 0.197426, -1.84622, 0.197846)
   makeCalibPlot("B1X4", "LScalib_B1X4.root", "plotsLScalib_B1X4.pdf",  -2.31449, 0.197748, -1.92694, 0.198289, -2.22264, 0.197897, -2.40634, 0.197598)
   makeCalibPlot("B1X5", "LScalib_B1X5.root", "plotsLScalib_B1X5.pdf",  -2.01677, 0.197971, -0.769719, 0.198463, -2.27784, 0.19809, -1.7557, 0.197849)
   makeCalibPlot("B2Y1", "LScalib_B2Y1.root", "plotsLScalib_B2Y1.pdf",  -3.6072, 0.139376, -2.98208, 0.137569, -5.15378, 0.137827, -2.0604, 0.139922)
   makeCalibPlot("B2Y2", "LScalib_B2Y2.root", "plotsLScalib_B2Y2.pdf",  -4.73104, 0.137484, -2.6198, 0.137247, -5.19841, 0.137919, -4.26366, 0.137065)
   makeCalibPlot("B2Y3", "LScalib_B2Y3.root", "plotsLScalib_B2Y3.pdf",  -3.48217, 0.138245, -2.11178, 0.138452, -3.84514, 0.139495, -3.11912, 0.138175)
   makeCalibPlot("B2Y4", "LScalib_B2Y4.root", "plotsLScalib_B2Y4.pdf",  -1.02019, 0.136555, -0.134141, 0.13529, -0.233564, 0.136921, -1.80681, 0.136208)
   makeCalibPlot("B2Y5", "LScalib_B2Y5.root", "plotsLScalib_B2Y5.pdf",  2.2926, 0.136768, 2.01166, 0.136717, 3.80424, 0.136839, 0.780917, 0.137621)
   makeCalibPlot("B2X1", "LScalib_B2X1.root", "plotsLScalib_B2X1.pdf",  0.399149, 0.196422, 0.193063, 0.194031, -0.952611, 0.195975, 1.7509, 0.196868)
   makeCalibPlot("B2X2", "LScalib_B2X2.root", "plotsLScalib_B2X2.pdf",  -3.18451, 0.195519, -1.30541, 0.160653, -5.08527, 0.195215, -1.28373, 0.195314)
   makeCalibPlot("B2X3", "LScalib_B2X3.root", "plotsLScalib_B2X3.pdf",  -3.46804, 0.197204, -1.60971, 0.198103, -5.72091, 0.197347, -1.21517, 0.197061)
   makeCalibPlot("B2X4", "LScalib_B2X4.root", "plotsLScalib_B2X4.pdf",  -3.55625, 0.206448, -1.72366, 0.207859, -6.414, 0.206665, -0.698493, 0.206232)
   makeCalibPlot("B2X5", "LScalib_B2X5.root", "plotsLScalib_B2X5.pdf",  -6.99263, 0.17182, -3.37143, 0.201207, -10.3106, 0.171538, -3.6746, 0.172097)


print (datetime.datetime.now())
