import ROOT as r
import sys
import os
import pickle
import datetime

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
      nomPos_arc =[-126.778594743333, -0.965174166666674, 122.47993227]
      nomPos_DOR =[-125.109782608696, 0.560869565217474, 126.605555555556]
      nomPos =[-123.02389741, 0, 123.02391231] 
      nomPos_av =[-125.944188676014, -0.2021523007246, 124.542743912778 ]
  
   if "B1Y2" in whichScan:
      nomPos_arc =[-123.308061543333, 0.560171487, 122.80494814225]
      nomPos_DOR =[-123.002173913043, 2.47045454545478, 129.206382978724 ]
      nomPos =[ -123.02391231, 0, 123.023912311 ] 
      nomPos_av =[-123.155117728188, 1.51531301622739, 126.005665560487]

   if "B1Y3" in whichScan:
      nomPos_arc =[-122.430352901625, 1.03784128000003, 124.998327177667]
      nomPos_DOR =[-121.509782608696, 4.36477272727289, 131.903260869565 ]
      nomPos =[ -123.023912311, 2.77555756156E-14, 123.023912311 ] 
      nomPos_av =[-121.97006775516, 2.70130700363646, 128.450794023616 ]

   if "B1Y4" in whichScan:
      nomPos_arc =[-122.593262211333, 1.12904371875, 125.457492143333 ]
      nomPos_DOR =[-119.875, 6.55851063829805, 134.265217391304]
      nomPos =[ -123.023912311, 0, 123.02391231] 
      nomPos_av =[-121.234131105667, 3.84377717852403, 129.861354767319 ]

   if "B1Y5" in whichScan:
      nomPos_arc =[-122.284282643333, 0.836668616666664, 124.89709157]
      nomPos_DOR =[-118.322826086956, 8.36956521739147, 135.1625]
      nomPos =[ -123.02391231, 0, 123.02389741] 
      nomPos_av =[-120.303554365145, 4.60311691702907, 130.029795785]

   if "B1X1" in whichScan:
      nomPos_arc =[-123.750652743333, -0.941747843749999, 122.906754720714]
      nomPos_DOR =[-123.534782608696, 0.31063829787232, 125.007777777778]
      nomPos =[-123.02389741, 0, 123.02391231] 
      nomPos_av =[-123.642717676015, -0.31555477293884, 123.957266249246]

   if "B1X2" in whichScan:
      nomPos_arc =[-125.345733343333, -2.11773649333333, 122.594493851]
      nomPos_DOR =[-125.210869565217, -1.12613636363639, 125.269565217391]
      nomPos =[ -123.02391231, 0, 123.023912311] 
      nomPos_av =[-125.278301454275, -1.62193642848486, 123.932029534196]

   if "B1X3" in whichScan:
      nomPos_arc =[-124.232778098667, -0.401172946428544, 126.537715497]
      nomPos_DOR =[-125.041111111111, 0.075555555555527, 127.541111111111]
      nomPos =[ -123.023912311, 2.77555756156E-14, 123.023912311] 
      nomPos_av =[-124.636944604889, -0.162808695436508, 127.039413304056]

   if "B1X4" in whichScan:
      nomPos_arc =[-123.89646991725, -0.717837824999998, 122.924010594375]
      nomPos_DOR =[-125.020652173913, -0.862765957446816, 124.421111111111]
      nomPos =[-123.023912311, 0, 123.02391231] 
      nomPos_av =[-124.458561045582, -0.790301891223407, 123.672560852743]

   if "B1X5" in whichScan:
      nomPos_arc =[-124.16208584125, -1.19031816666666, 122.181605045333]
      nomPos_DOR =[-125.966304347826, -1.99111111111115, 122.943333333333]
      nomPos =[ -123.02391231, 0, 123.02389741] 
      nomPos_av =[-125.064195094538, -1.5907146388889, 122.562469189333]

   if "B2Y1" in whichScan:
      nomPos_arc =[125.543470635, -0.896217186666667, -123.647513856667]
      nomPos_DOR =[123.175, -2.51444444444444, -127.51]
      nomPos =[123.02389741, 0, -123.02391231] 
      nomPos_av =[124.3592353175, -1.70533081555555, -125.578756928333]

   if "B2Y2" in whichScan:
      nomPos_arc =[121.252237086667, -1.23693588033333, -124.568873354333]
      nomPos_DOR =[122.319565217391, -1.94891304347826, -127.49]
      nomPos =[123.02391231, 0, -123.023912311] 
      nomPos_av =[121.785901152029, -1.5929244619058, -126.029436677167]

   if "B2Y3" in whichScan:
      nomPos_arc =[122.166355981, -1.46271982666669, -124.193985965667 ]
      nomPos_DOR =[123.343333333333, -1.15444444444442, -126.814444444444]
      nomPos =[123.023912311, -2.77555756156E-14, -123.023912311] 
      nomPos_av =[122.754844657167, -1.30858213555556, -125.504215205056]

   if "B2Y4" in whichScan:
      nomPos_arc =[122.000446221, -0.952520668749997, -125.34554011]
      nomPos_DOR =[125.314444444444, 0.835869565217377, -125.512765957447]
      nomPos =[123.023912311, 0, -123.02391231] 
      nomPos_av =[123.657445332722, -0.05832555176631, -125.429153033723]

   if "B2Y5" in whichScan:
      nomPos_arc =[122.264687176667, -1.76310044333333, -124.72305244125]
      nomPos_DOR =[126.978260869565, 2.15543478260864, -123.39347826087 ]
      nomPos =[123.02391231, 0, -123.02389741] 
      nomPos_av =[124.621474023116, 0.196167169637659, -124.05826535106]

   if "B2X1" in whichScan:
      nomPos_arc =[127.851487123333, 0.204112884062498, -124.741442485667]
      nomPos_DOR =[126.27, -2.12717391304346, -128.565217391304]
      nomPos =[123.02389741, 0, -123.02391231] 
      nomPos_av =[127.060743561667, -0.961530514490483, -126.653329938485]

   if "B2X2" in whichScan:
      nomPos_arc =[123.59056421625, -1.25988816333333, -123.566072524333]
      nomPos_DOR =[121.772826086957, -4.01413043478259, -129.345555555556]
      nomPos =[123.02391231, 0, -123.023912311] 
      nomPos_av =[122.681695151603, -2.63700929905796, -126.455814039944]

   if "B2X3" in whichScan:
      nomPos_arc =[124.241549420867, 0.890955333333306, -123.469092511]
      nomPos_DOR =[121.625555555556, -3.40326086956521, -129.859782608696]
      nomPos =[123.023912311, -2.77555756156E-14, -123.023912311] 
      nomPos_av =[122.933552488211, -1.25615276811595, -126.664437559848]

   if "B2X4" in whichScan:
      nomPos_arc =[124.557822434333, 1.5854841, -122.534044143333]
      nomPos_DOR =[120.803260869565, -4.06022727272726, -130.203260869565]
      nomPos =[123.023912311, 0, -123.02391231] 
      nomPos_av =[122.680541651949, -1.23737158636363, -126.368652506449]

   if "B2X5" in whichScan:
      nomPos_arc =[124.8093192, 1.27429093333333, -125.387443243333]
      nomPos_DOR =[119.704545454545, -5.4195652173913, -133.563333333333]
      nomPos =[123.02391231, 0, -123.02389741] 
      nomPos_av =[122.256932327273, -2.07263714202898, -129.475388288333]

   return nomPos_arc, nomPos_DOR, nomPos, nomPos_av  



def makeCalibPlot(whichScan,rootOutFile,pdfOutFile):
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
      histoList[index].GetXaxis().SetTitle(whichVtx + " [mm]")
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
   
   rfile.Write()
   rfile.Close()

if __name__ == '__main__':

   makeCalibPlot("B1Y1", "LScalib_B1Y1.root", "plotsLScalib_B1Y1.pdf")
   makeCalibPlot("B1Y2", "LScalib_B1Y2.root", "plotsLScalib_B1Y2.pdf")
   makeCalibPlot("B1Y3", "LScalib_B1Y3.root", "plotsLScalib_B1Y3.pdf")
   makeCalibPlot("B1Y4", "LScalib_B1Y4.root", "plotsLScalib_B1Y4.pdf")
   makeCalibPlot("B1Y5", "LScalib_B1Y5.root", "plotsLScalib_B1Y5.pdf")

   makeCalibPlot("B1X1", "LScalib_B1X1.root", "plotsLScalib_B1X1.pdf")
   makeCalibPlot("B1X2", "LScalib_B1X2.root", "plotsLScalib_B1X2.pdf")
   makeCalibPlot("B1X3", "LScalib_B1X3.root", "plotsLScalib_B1X3.pdf")
   makeCalibPlot("B1X4", "LScalib_B1X4.root", "plotsLScalib_B1X4.pdf")
   makeCalibPlot("B1X5", "LScalib_B1X5.root", "plotsLScalib_B1X5.pdf")

   makeCalibPlot("B2Y1", "LScalib_B2Y1.root", "plotsLScalib_B2Y1.pdf")
   makeCalibPlot("B2Y2", "LScalib_B2Y2.root", "plotsLScalib_B2Y2.pdf")
   makeCalibPlot("B2Y3", "LScalib_B2Y3.root", "plotsLScalib_B2Y3.pdf")
   makeCalibPlot("B2Y4", "LScalib_B2Y4.root", "plotsLScalib_B2Y4.pdf")
   makeCalibPlot("B2Y5", "LScalib_B2Y5.root", "plotsLScalib_B2Y5.pdf")

   makeCalibPlot("B2X1", "LScalib_B2X1.root", "plotsLScalib_B2X1.pdf")
   makeCalibPlot("B2X2", "LScalib_B2X2.root", "plotsLScalib_B2X2.pdf")
   makeCalibPlot("B2X3", "LScalib_B2X3.root", "plotsLScalib_B2X3.pdf")
   makeCalibPlot("B2X4", "LScalib_B2X4.root", "plotsLScalib_B2X4.pdf")
   makeCalibPlot("B2X5", "LScalib_B2X5.root", "plotsLScalib_B2X5.pdf")


print (datetime.datetime.now())

