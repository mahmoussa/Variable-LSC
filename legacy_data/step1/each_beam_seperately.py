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

	makeCalibPlot("B1Y1", "LScalib_B1Y1.root", "plotsLScalib_B1Y1.pdf" , 1.12021 , 0.132595 , 1.81936 , 0.132767 , 2.55773 , 0.132507 , -0.317422 , 0.133801 )
	makeCalibPlot("B1Y2", "LScalib_B1Y2.root", "plotsLScalib_B1Y2.pdf" , 0.965159 , 0.129741 , -0.462255 , 0.130295 , 2.64133 , 0.130263 , -0.710981 , 0.130765 )
	makeCalibPlot("B1Y3", "LScalib_B1Y3.root", "plotsLScalib_B1Y3.pdf" , 0.76539 , 0.131291 , -2.47338 , 0.131159 , 2.71859 , 0.131639 , -1.18779 , 0.131017 )
	makeCalibPlot("B1Y4", "LScalib_B1Y4.root", "plotsLScalib_B1Y4.pdf" , -0.216406 , 0.132256 , -4.51422 , 0.131825 , 2.65824 , 0.132402 , -3.09105 , 0.132093 )
	makeCalibPlot("B1Y5", "LScalib_B1Y5.root", "plotsLScalib_B1Y5.pdf" , -0.796959 , 0.133397 , -5.65822 , 0.133346 , 2.75007 , 0.133625 , -4.34395 , 0.133122 )
	makeCalibPlot("B1X1", "LScalib_B1X1.root", "plotsLScalib_B1X1.pdf" , -1.53065 , 0.190726 , -1.69636 , 0.156575 , -0.950031 , 0.190542 , -2.11124 , 0.19131 )
	makeCalibPlot("B1X2", "LScalib_B1X2.root", "plotsLScalib_B1X2.pdf" , -1.88614 , 0.190002 , -1.21111 , 0.189678 , -1.18429 , 0.190108 , -2.58798 , 0.189896 )
	makeCalibPlot("B1X3", "LScalib_B1X3.root", "plotsLScalib_B1X3.pdf" , -1.6875 , 0.18938 , -2.85481 , 0.187062 , -1.63588 , 0.189179 , -1.73911 , 0.189579 )
	makeCalibPlot("B1X4", "LScalib_B1X4.root", "plotsLScalib_B1X4.pdf" , -2.33883 , 0.189465 , -1.95134 , 0.189983 , -2.247 , 0.189609 , -2.43066 , 0.189321 )
	makeCalibPlot("B1X5", "LScalib_B1X5.root", "plotsLScalib_B1X5.pdf" , -2.1864 , 0.191682 , -0.940169 , 0.192624 , -2.44757 , 0.191798 , -1.92523 , 0.191566 )
	makeCalibPlot("B2Y1", "LScalib_B2Y1.root", "plotsLScalib_B2Y1.pdf" , 2.21253 , 0.135836 , 2.81015 , 0.134497 , 0.645858 , 0.134899 , 3.779 , 0.136756 )
	makeCalibPlot("B2Y2", "LScalib_B2Y2.root", "plotsLScalib_B2Y2.pdf" , 0.762428 , 0.132494 , 2.89474 , 0.132892 , 0.303541 , 0.132751 , 1.22132 , 0.132241 )
	makeCalibPlot("B2Y3", "LScalib_B2Y3.root", "plotsLScalib_B2Y3.pdf" , 0.726712 , 0.133605 , 2.10561 , 0.133878 , 0.368513 , 0.133953 , 1.08483 , 0.134243 )
	makeCalibPlot("B2Y4", "LScalib_B2Y4.root", "plotsLScalib_B2Y4.pdf" , -0.509153 , 0.13219 , 0.376215 , 0.131515 , 0.277733 , 0.132326 , -1.29603 , 0.132056 )
	makeCalibPlot("B2Y5", "LScalib_B2Y5.root", "plotsLScalib_B2Y5.pdf" , -1.83968 , 0.132097 , -2.1219 , 0.132151 , -0.329283 , 0.132789 , -3.35001 , 0.132198 )
	makeCalibPlot("B2X1", "LScalib_B2X1.root", "plotsLScalib_B2X1.pdf" , -0.0760199 , 0.160581 , -0.276333 , 0.188481 , -1.42664 , 0.16226 , 1.2746 , 0.160926 )
	makeCalibPlot("B2X2", "LScalib_B2X2.root", "plotsLScalib_B2X2.pdf" , -0.572531 , 0.188138 , 1.32292 , 0.155519 , -2.47022 , 0.156023 , 1.32503 , 0.187874 )
	makeCalibPlot("B2X3", "LScalib_B2X3.root", "plotsLScalib_B2X3.pdf" , -0.254703 , 0.192382 , 1.61746 , 0.193159 , -2.5051 , 0.192539 , 1.99569 , 0.192225 )
	makeCalibPlot("B2X4", "LScalib_B2X4.root", "plotsLScalib_B2X4.pdf" , -0.0266369 , 0.196229 , 1.82907 , 0.197459 , -2.88063 , 0.196441 , 2.82736 , 0.196017 )
	makeCalibPlot("B2X5", "LScalib_B2X5.root", "plotsLScalib_B2X5.pdf" , -0.208897 , 0.16436 , 3.38365 , 0.195861 , -3.53131 , 0.16456 , 3.11352 , 0.164198 )

print (datetime.datetime.now())
