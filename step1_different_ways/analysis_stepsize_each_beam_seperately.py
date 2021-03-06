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
      nomPos_arc =[-123.02389741,2.01018604204563,124.675970254092]
      nomPos_DOR =[-123.02389741,-0.825596027340538,121.746754071744]
      nomPos =[-123.02389741,-1.19204000128548E-05,123.0239033692] 
      nomPos_av =[-123.02389741,0.592295007352547,123.211362162918]
  
   if "B1Y2" in whichScan:
      nomPos_arc =[-123.02391231,0.064998495712303,121.530452927342]
      nomPos_DOR =[-123.02391231,-1.02361974275622,122.239972800259]
      nomPos =[-123.02391231,2.9795999836324E-06,123.0239182712] 
      nomPos_av =[-123.02391231,-0.479310623521954,121.8852128638]

   if "B1Y3" in whichScan:
      nomPos_arc =[-123.023912311,-0.335040352995648,122.846123321051]
      nomPos_DOR =[-123.023912311,-0.621692865285084,123.444459386753]
      nomPos =[-123.023912311,2.98060004411127E-06,123.0239182722] 
      nomPos_av =[-123.023912311,-0.478366609140366,123.145291353902]

   if "B1Y4" in whichScan:
      nomPos_arc =[-123.023912311,-0.080928604537704,123.468197595425]
      nomPos_DOR =[-123.023912311,-0.06273756295596,124.171633298796]
      nomPos =[-123.023912311,2.98059998726785E-06,123.0239182702] 
      nomPos_av =[-123.023912311,-0.071833083746824,123.81991544711]

   if "B1Y5" in whichScan:
      nomPos_arc =[-123.02391231,-0.682283274621028,122.598802554092]
      nomPos_DOR =[-123.02391231,0.196143103093462,123.516727094448]
      nomPos =[-123.02391231,2.9795999836324E-06,123.0238884692] 
      nomPos_av =[-123.02391231,-0.24307008576379,123.05776482427]

   if "B1X1" in whichScan:
      nomPos_arc =[-123.02389741,-1.04432506564251,121.974859843596]
      nomPos_DOR =[-123.02389741,-1.15024092918038,121.575149024977]
      nomPos =[-123.02389741,-1.19204000128548E-05,123.0239033692] 
      nomPos_av =[-123.02389741,-1.09728299741143,121.775004434286]

   if "B1X2" in whichScan:
      nomPos_arc =[-123.02391231,-0.625233115225853,123.257679574882]
      nomPos_DOR =[-123.02391231,-0.910928634168101,123.513023422111]
      nomPos =[-123.02391231,2.9795999836324E-06,123.0239182712] 
      nomPos_av =[-123.02391231,-0.768080874696963,123.385351498496]

   if "B1X3" in whichScan:
      nomPos_arc =[-123.023912311,-0.021624812987042,126.087945976216]
      nomPos_DOR =[-123.023912311,0.12100483091784,125.614810861725]
      nomPos =[-123.023912311,2.98060004411127E-06,123.0239182722] 
      nomPos_av =[-123.023912311,0.049690008965413,125.85137841897]

   if "B1X4" in whichScan:
      nomPos_arc =[-123.023912311,-0.674597872975525,122.137932891174]
      nomPos_DOR =[-123.023912311,-0.83777561928251,122.474351923527]
      nomPos =[-123.023912311,2.98059998726785E-06,123.0239182702] 
      nomPos_av =[-123.023912311,-0.756186746129004,122.30614240735]

   if "B1X5" in whichScan:
      nomPos_arc =[-123.02391231,-0.881462290642176,121.661128366132]
      nomPos_DOR =[-123.02391231,-1.02046859903386,121.942211419662]
      nomPos =[-123.02391231,2.9795999836324E-06,123.0238884692] 
      nomPos_av =[-123.02391231,-0.950965444838005,121.801669892897]

   if "B2Y1" in whichScan:
      nomPos_arc =[123.02389741,-2.86907153884158,-125.073664236017]
      nomPos_DOR =[123.02389741,-0.504315191695028,-123.338653804501]
      nomPos =[123.02389741,1.19204000128548E-05,-123.0239033692] 
      nomPos_av =[123.02389741,-1.6866933652683,-124.206159020259]

   if "B2Y2" in whichScan:
      nomPos_arc =[123.02391231,1.08144331582476,-121.70379018635]
      nomPos_DOR =[123.02391231,0.916650991880147,-122.463219022892]
      nomPos =[123.02391231,-2.9795999836324E-06,-123.0239182712] 
      nomPos_av =[123.02391231,0.999047153852473,-122.083504604621]

   if "B2Y3" in whichScan:
      nomPos_arc =[123.023912311,-0.058459524841624,-122.243021692017]
      nomPos_DOR =[123.023912311,0.687351474971948,-122.811431583278]
      nomPos =[123.023912311,-2.98060004411127E-06,-123.0239182722] 
      nomPos_av =[123.023912311,0.314445975065183,-122.527226637647]

   if "B2Y4" in whichScan:
      nomPos_arc =[123.023912311,0.617649393075084,-123.22866607535]
      nomPos_DOR =[123.023912311,0.706554373522778,-123.480864206392]
      nomPos =[123.023912311,-2.98059998726785E-06,-123.0239182702] 
      nomPos_av =[123.023912311,0.662101883298945,-123.354765140871]

   if "B2Y5" in whichScan:
      nomPos_arc =[123.02391231,-0.45717133717524,-122.870404462267]
      nomPos_DOR =[123.02391231,0.362303165793037,-123.025378034936]
      nomPos =[123.02391231,-2.9795999836324E-06,-123.0238884692] 
      nomPos_av =[123.02391231,-0.04743408569108,-122.947891248601]

   if "B2X1" in whichScan:
      nomPos_arc =[123.02389741,-3.17249050902559,-126.66707445851]
      nomPos_DOR =[123.02389741,-2.22584014053574,-125.516462156289]
      nomPos =[123.02389741,-2.69916532478068,-126.091768307399] 
      nomPos_av =[123.02389741,1.19204000128548E-05,-123.0239033692]

   if "B2X2" in whichScan:
      nomPos_arc =[123.02391231,-0.375568649338419,-121.230781591093]
      nomPos_DOR =[123.02391231,0.384377250768125,-121.799626408498]
      nomPos =[123.02391231,-2.9795999836324E-06,-123.0239182712] 
      nomPos_av =[123.02391231,0.004404300714839,-121.515203999795]

   if "B2X3" in whichScan:
      nomPos_arc =[123.023912311,1.12428964271119,-121.784786782377]
      nomPos_DOR =[123.023912311,1.14251734738646,-122.166582930237]
      nomPos =[123.023912311,-2.98060004411127E-06,-123.0239182722] 
      nomPos_av =[123.023912311,1.13340349504881,-121.975684856307]

   if "B2X4" in whichScan:
      nomPos_arc =[123.023912311,1.50254539591191,-121.166011427176]
      nomPos_DOR =[123.023912311,1.30784563021545,-121.687766504115]
      nomPos =[123.023912311,-2.98059998726785E-06,-123.0239182702] 
      nomPos_av =[123.023912311,1.40519551306366,-121.426888965645]

   if "B2X5" in whichScan:
      nomPos_arc =[123.02391231,0.93985546357824,-124.270892392843]
      nomPos_DOR =[123.02391231,1.04722310057142,-123.949108652863]
      nomPos =[123.02391231,-2.9795999836324E-06,-123.0238884692] 
      nomPos_av =[123.02391231,0.993539282074821,-124.110000522853]

   return nomPos_arc, nomPos_DOR, nomPos, nomPos_av  



def makeCalibPlot(whichScan,rootOutFile,pdfOutFile):
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



