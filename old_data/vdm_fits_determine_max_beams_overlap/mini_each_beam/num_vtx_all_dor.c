{
   //ROOT::Math::MinimizerOptions::SetDefaultMaxFunctionCalls(10000);
   TFile *f = new TFile ("num_vtx_all_dor.root", "recreate");
 
  // using average values for per beam mini scan step sizes 
        float nomPos_dor_b1y1[] ={ -121.637431817442 , 0.560869565217474 , 123.133219664302 };
	float nomPos_dor_b1y2[] ={ -119.529838021789 , 2.47045454545478 , 125.73404708847 };
	float nomPos_dor_b1y3[] ={ -118.037446718442 , 4.36477272727289 , 128.430924979311 };
	float nomPos_dor_b1y4[] ={ -116.402664109746 , 6.55851063829805 , 130.79288150005 };
	float nomPos_dor_b1y5[] ={ -114.850490195702 , 8.36956521739147 , 131.690149208746 };
	float nomPos_dor_b1x1[] ={ -121.563018182947 , 0.31063829787232 , 123.036028252029 };
	float nomPos_dor_b1x2[] ={ -123.239120039468 , -1.12613636363639 , 123.297815692642 };
	float nomPos_dor_b1x3[] ={ -123.069361586362 , 0.075555555555527 , 125.569361586362 };
	float nomPos_dor_b1x4[] ={ -123.048902649164 , -0.862765957446816 , 122.449361585362 };
	float nomPos_dor_b1x5[] ={ -123.994554822077 , -1.99111111111115 , 120.971568907584 };
	float nomPos_dor_b2y1[] ={ -125.348783057251 , -2.51444444444444 , 121.013768157251 };
	float nomPos_dor_b2y2[] ={ -125.328783058251 , -1.94891304347826 , 120.158348274642 };
	float nomPos_dor_b2y3[] ={ -124.653227502695 , -1.15444444444442 , 121.182116391584 };
	float nomPos_dor_b2y4[] ={ -123.351549014698 , 0.835869565217377 , 123.153227502695 };
	float nomPos_dor_b2y5[] ={ -121.232246418121 , 2.15543478260864 , 124.817043926816 };
	float nomPos_dor_b2x1[] ={ -125.417795928796 , -2.12717391304346 , 123.122563637492 };
	float nomPos_dor_b2x2[] ={ -126.198134094048 , -4.01413043478259 , 118.625404624449 };
	float nomPos_dor_b2x3[] ={ -126.712361147188 , -3.40326086956521 , 118.478134094048 };
	float nomPos_dor_b2x4[] ={ -127.055839407057 , -4.06022727272726 , 117.655839408057 };
	float nomPos_dor_b2x5[] ={ -130.415896970825 , -5.4195652173913 , 116.557123992037 };

  double num_vtx_b1y1_plots[] ={1.49949e-27 , 3.04292e-27 , 1.5598e-27};
  double num_vtx_b1y2_plots[] ={1.53077e-27 , 3.03862e-27 , 1.51588e-27};
  double num_vtx_b1y3_plots[] ={1.54982e-27 , 3.03362e-27 , 1.46606e-27};
  double num_vtx_b1y4_plots[] ={1.58834e-27 , 3.03525e-27 , 1.43406e-27};
  double num_vtx_b1y5_plots[] ={1.61079e-27 , 3.02977e-27 , 1.41841e-27};

  double num_vtx_b1x1_plots[] ={2.03988e-27 , 3.03891e-27 , 1.98141e-27};
  double num_vtx_b1x2_plots[] ={2.00875e-27 , 3.03942e-27 , 1.97178e-27};
  double num_vtx_b1x3_plots[] ={2.01783e-27 , 3.04267e-27 , 1.93574e-27};
  double num_vtx_b1x4_plots[] ={2.02698e-27 , 3.04246e-27 , 1.97443e-27};
  double num_vtx_b1x5_plots[] ={2.00562e-27 , 3.03765e-27 , 1.98463e-27};

  double num_vtx_b2y1_plots[] ={1.58592e-27 , 3.03812e-27 , 1.48427e-27};
  double num_vtx_b2y2_plots[] ={1.58741e-27 , 3.0532e-27 , 1.49767e-27};
  double num_vtx_b2y3_plots[] ={1.57657e-27 , 3.04049e-27 , 1.50464e-27};
  double num_vtx_b2y4_plots[] ={1.53292e-27 , 3.04433e-27 , 1.52833e-27};
  double num_vtx_b2y5_plots[] ={1.50348e-27 , 3.0424e-27 , 1.57212e-27};

  double num_vtx_b2x1_plots[] ={1.96945e-27 , 3.05302e-27 , 1.97486e-27};
  double num_vtx_b2x2_plots[] ={2.00685e-27 , 3.04835e-27 , 1.9708e-27};
  double num_vtx_b2x3_plots[] ={2.01557e-27 , 3.04491e-27 , 1.97137e-27};
  double num_vtx_b2x4_plots[] ={2.01315e-27 , 3.05055e-27 , 1.96548e-27};
  double num_vtx_b2x5_plots[] ={2.02754e-27 , 3.03879e-27 , 1.93459e-27};

   double num_vtx_b1y1_err[] = {3.30324e-30 , 4.70591e-30 , 3.4191e-30};
   double num_vtx_b1y2_err[] = {3.33803e-30 , 4.80916e-30 , 3.2862e-30};
   double num_vtx_b1y3_err[] = {3.35957e-30 , 4.80518e-30 , 3.26727e-30};
   double num_vtx_b1y4_err[] = {3.40122e-30 , 4.6515e-30 , 3.23167e-30};
   double num_vtx_b1y5_err[] = {3.42606e-30 , 4.69858e-30 , 3.25044e-30};
   double num_vtx_b1x1_err[] = {3.85636e-30 , 4.65651e-30 , 3.84313e-30};
   double num_vtx_b1x2_err[] = {3.82769e-30 , 4.81435e-30 , 3.7925e-30};
   double num_vtx_b1x3_err[] = {3.88024e-30 , 4.82187e-30 , 3.7582e-30};
   double num_vtx_b1x4_err[] = {3.84561e-30 , 4.66137e-30 , 3.79651e-30};
   double num_vtx_b1x5_err[] = {3.82592e-30 , 4.76085e-30 , 3.84681e-30};
   
   double num_vtx_b2y1_err[] = {3.40526e-30 , 4.76426e-30 , 3.33018e-30};
   double num_vtx_b2y2_err[] = {3.40661e-30 , 4.72467e-30 , 3.34592e-30};
   double num_vtx_b2y3_err[] = {3.43259e-30 , 4.76572e-30 , 3.35437e-30};
   double num_vtx_b2y4_err[] = {3.3492e-30 , 4.71898e-30 , 3.30827e-30};
   double num_vtx_b2y5_err[] = {3.31665e-30 , 4.7185e-30 , 3.39168e-30};
   double num_vtx_b2x1_err[] = {3.88611e-30 , 4.73048e-30 , 3.80331e-30};
   double num_vtx_b2x2_err[] = {3.83727e-30 , 4.72504e-30 , 3.84319e-30};
   double num_vtx_b2x3_err[] = {3.88576e-30 , 4.73213e-30 , 3.80173e-30};
   double num_vtx_b2x4_err[] = {4.19108e-30 , 4.78189e-30 , 3.92297e-30};
   double num_vtx_b2x5_err[] = {3.8985e-30 , 4.72111e-30 , 3.93814e-30};
   

   TGraphErrors *step_b1y1_dor = new TGraphErrors ();
   TGraphErrors *step_b1y1_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b1y2_dor = new TGraphErrors ();
   TGraphErrors *step_b1y2_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b1y3_dor = new TGraphErrors ();
   TGraphErrors *step_b1y3_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b1y4_dor = new TGraphErrors ();
   TGraphErrors *step_b1y4_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b1y5_dor = new TGraphErrors ();
   TGraphErrors *step_b1y5_dor_residual = new TGraphErrors ();

   TGraphErrors *step_b1x1_dor = new TGraphErrors ();
   TGraphErrors *step_b1x1_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b1x2_dor = new TGraphErrors ();
   TGraphErrors *step_b1x2_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b1x3_dor = new TGraphErrors ();
   TGraphErrors *step_b1x3_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b1x4_dor = new TGraphErrors ();
   TGraphErrors *step_b1x4_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b1x5_dor = new TGraphErrors ();
   TGraphErrors *step_b1x5_dor_residual = new TGraphErrors ();

   TGraphErrors *step_b2y1_dor = new TGraphErrors ();
   TGraphErrors *step_b2y1_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b2y2_dor = new TGraphErrors ();
   TGraphErrors *step_b2y2_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b2y3_dor = new TGraphErrors ();
   TGraphErrors *step_b2y3_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b2y4_dor = new TGraphErrors ();
   TGraphErrors *step_b2y4_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b2y5_dor = new TGraphErrors ();
   TGraphErrors *step_b2y5_dor_residual = new TGraphErrors ();

   TGraphErrors *step_b2x1_dor = new TGraphErrors ();
   TGraphErrors *step_b2x1_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b2x2_dor = new TGraphErrors ();
   TGraphErrors *step_b2x2_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b2x3_dor = new TGraphErrors ();
   TGraphErrors *step_b2x3_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b2x4_dor = new TGraphErrors ();
   TGraphErrors *step_b2x4_dor_residual = new TGraphErrors ();
   TGraphErrors *step_b2x5_dor = new TGraphErrors ();
   TGraphErrors *step_b2x5_dor_residual = new TGraphErrors ();


   for (int j=0 ; j<3 ; j++){
     step_b1y1_dor -> SetPoint(j, nomPos_dor_b1y1[j], num_vtx_b1y1_plots[j]);
     step_b1y1_dor -> SetPointError( j , 0.0 , num_vtx_b1y1_err[j] );
     step_b1y2_dor -> SetPoint(j, nomPos_dor_b1y2[j], num_vtx_b1y2_plots[j]);
     step_b1y2_dor -> SetPointError( j , 0.0 , num_vtx_b1y2_err[j] );
     step_b1y3_dor -> SetPoint(j, nomPos_dor_b1y3[j], num_vtx_b1y3_plots[j]);
     step_b1y3_dor -> SetPointError( j , 0.0 , num_vtx_b1y3_err[j] );
     step_b1y4_dor -> SetPoint(j, nomPos_dor_b1y4[j], num_vtx_b1y4_plots[j]);
     step_b1y4_dor -> SetPointError( j , 0.0 , num_vtx_b1y4_err[j] );
     step_b1y5_dor -> SetPoint(j, nomPos_dor_b1y5[j], num_vtx_b1y5_plots[j]);
     step_b1y5_dor -> SetPointError( j , 0.0 , num_vtx_b1y5_err[j] );
     step_b2y1_dor -> SetPoint(j, nomPos_dor_b2y1[j], num_vtx_b2y1_plots[j]);
     step_b2y1_dor -> SetPointError( j , 0.0 , num_vtx_b2y1_err[j] );
     step_b2y2_dor -> SetPoint(j, nomPos_dor_b2y2[j], num_vtx_b2y2_plots[j]);
     step_b2y2_dor -> SetPointError( j , 0.0 , num_vtx_b2y2_err[j] );
     step_b2y3_dor -> SetPoint(j, nomPos_dor_b2y3[j], num_vtx_b2y3_plots[j]);
     step_b2y3_dor -> SetPointError( j , 0.0 , num_vtx_b2y3_err[j] );
     step_b2y4_dor -> SetPoint(j, nomPos_dor_b2y4[j], num_vtx_b2y4_plots[j]);
     step_b2y4_dor -> SetPointError( j , 0.0 , num_vtx_b2y4_err[j] );
     step_b2y5_dor -> SetPoint(j, nomPos_dor_b2y5[j], num_vtx_b2y5_plots[j]);
     step_b2y5_dor -> SetPointError( j , 0.0 , num_vtx_b2y5_err[j] );
     step_b1x1_dor -> SetPoint(j, nomPos_dor_b1x1[j], num_vtx_b1x1_plots[j]);
     step_b1x1_dor -> SetPointError( j , 0.0 , num_vtx_b1x1_err[j] );
     step_b1x2_dor -> SetPoint(j, nomPos_dor_b1x2[j], num_vtx_b1x2_plots[j]);
     step_b1x2_dor -> SetPointError( j , 0.0 , num_vtx_b1x2_err[j] );
     step_b1x3_dor -> SetPoint(j, nomPos_dor_b1x3[j], num_vtx_b1x3_plots[j]);
     step_b1x3_dor -> SetPointError( j , 0.0 , num_vtx_b1x3_err[j] );
     step_b1x4_dor -> SetPoint(j, nomPos_dor_b1x4[j], num_vtx_b1x4_plots[j]);
     step_b1x4_dor -> SetPointError( j , 0.0 , num_vtx_b1x4_err[j] );
     step_b1x5_dor -> SetPoint(j, nomPos_dor_b1x5[j], num_vtx_b1x5_plots[j]);
     step_b1x5_dor -> SetPointError( j , 0.0 , num_vtx_b1x5_err[j] );
     step_b2x1_dor -> SetPoint(j, nomPos_dor_b2x1[j], num_vtx_b2x1_plots[j]);
     step_b2x1_dor -> SetPointError( j , 0.0 , num_vtx_b2x1_err[j] );
     step_b2x2_dor -> SetPoint(j, nomPos_dor_b2x2[j], num_vtx_b2x2_plots[j]);
     step_b2x2_dor -> SetPointError( j , 0.0 , num_vtx_b2x2_err[j] );
     step_b2x3_dor -> SetPoint(j, nomPos_dor_b2x3[j], num_vtx_b2x3_plots[j]);
     step_b2x3_dor -> SetPointError( j , 0.0 , num_vtx_b2x3_err[j] );
     step_b2x4_dor -> SetPoint(j, nomPos_dor_b2x4[j], num_vtx_b2x4_plots[j]);
     step_b2x4_dor -> SetPointError( j , 0.0 , num_vtx_b2x4_err[j] );
     step_b2x5_dor -> SetPoint(j, nomPos_dor_b2x5[j], num_vtx_b2x5_plots[j]);
     step_b2x5_dor -> SetPointError( j , 0.0 , num_vtx_b2x5_err[j] );
     
     }

   TCanvas* c_dor_b1y1 = new TCanvas("c_dor_b1y1","dor_step_B1Y1",700,500); 
   step_b1y1_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b1y1_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y1_dor-> SetTitle("dor_step_B1Y1");
   step_b1y1_dor->SetMarkerStyle(21);
   step_b1y1_dor->SetMarkerSize(1.5);
   c_dor_b1y1 -> Divide(1,2);
   c_dor_b1y1 -> cd(1);
   c_dor_b1y1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y1_dor->Draw("ap");
   step_b1y1_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y1_dor -> Write();

   TF1 *fit_func_dor_b1y1 = step_b1y1_dor->GetFunction("gaus");
   double gauss_mean_dor_b1y1 =  fit_func_dor_b1y1->GetParameter(1);
   double gauss_err_dor_b1y1 =  fit_func_dor_b1y1->GetParError(1);   
   float fit_value_dor_b1y1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b1y1[i] = fit_func_dor_b1y1 -> Eval(nomPos_dor_b1y1[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_B1Y1_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b1y1_dor_residual -> SetPoint(i, nomPos_dor_b1y1[i], num_vtx_b1y1_plots[i] - fit_value_dor_b1y1[i] );
    step_b1y1_dor_residual -> SetPointError(i, 0.0,  num_vtx_b1y1_err[i]);
    }
  c_dor_b1y1 -> cd(2);
  c_dor_b1y1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y1_dor_residual -> Draw("PA");
  step_b1y1_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y1_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y1_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y1_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y1_dor_residual -> SetMarkerStyle(21);
  step_b1y1_dor_residual -> SetMarkerSize(1.5);
  step_b1y1_dor_residual -> SetTitle("");
  step_b1y1_dor_residual -> Write();
  

  TLine *line_dor_b1y1 = new TLine(c_dor_b1y1 -> cd(2) -> GetUxmin(), 0.0, c_dor_b1y1 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b1y1 -> SetLineColor(14);
  line_dor_b1y1 -> SetLineStyle(3);
  line_dor_b1y1 -> Draw();
  c_dor_b1y1 -> Update(); 
  //c_dor_b1y1 -> SaveAs("dor_step_B1Y1.root");
  c_dor_b1y1 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");
  

  TCanvas* c_dor_b1y2 = new TCanvas("c_dor_b1y2","dor_step_b1y2",700,500); 
   step_b1y2_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b1y2_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y2_dor-> SetTitle("dor_step_B1Y2");
   step_b1y2_dor->SetMarkerStyle(21);
   step_b1y2_dor->SetMarkerSize(1.5);
   c_dor_b1y2 -> Divide(1,2);
   c_dor_b1y2 -> cd(1);
   c_dor_b1y2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y2_dor->Draw("ap");
   step_b1y2_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y2_dor -> Write();

   TF1 *fit_func_dor_b1y2 = step_b1y2_dor->GetFunction("gaus");
   double gauss_mean_dor_b1y2 =  fit_func_dor_b1y2->GetParameter(1);
   double gauss_err_dor_b1y2 =  fit_func_dor_b1y2->GetParError(1);   
   float fit_value_dor_b1y2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b1y2[i] = fit_func_dor_b1y2 -> Eval(nomPos_dor_b1y2[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b1y2_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b1y2_dor_residual -> SetPoint(i, nomPos_dor_b1y2[i], num_vtx_b1y2_plots[i] - fit_value_dor_b1y2[i] );
    step_b1y2_dor_residual -> SetPointError(i, 0.0,  num_vtx_b1y2_err[i]);
    }
  c_dor_b1y2 -> cd(2);
  c_dor_b1y2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y2_dor_residual -> Draw("PA");
  step_b1y2_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y2_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y2_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y2_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y2_dor_residual -> SetMarkerStyle(21);
  step_b1y2_dor_residual -> SetMarkerSize(1.5);
  step_b1y2_dor_residual -> SetTitle("");
  step_b1y2_dor_residual -> Write();
  

  TLine *line_dor_b1y2 = new TLine(c_dor_b1y2 -> cd(2) -> GetUxmin(), 0.0, c_dor_b1y2 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b1y2 -> SetLineColor(14);
  line_dor_b1y2 -> SetLineStyle(3);
  line_dor_b1y2 -> Draw();
  c_dor_b1y2 -> Update(); 
  //c_dor_b1y2 -> SaveAs("dor_step_b1y2.root");
  c_dor_b1y2 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  
   TCanvas* c_dor_b1y3 = new TCanvas("c_dor_b1y3","dor_step_b1y3",700,500); 
   step_b1y3_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b1y3_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y3_dor-> SetTitle("dor_step_B1Y3");
   step_b1y3_dor->SetMarkerStyle(21);
   step_b1y3_dor->SetMarkerSize(1.5);
   c_dor_b1y3 -> Divide(1,2);
   c_dor_b1y3 -> cd(1);
   c_dor_b1y3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y3_dor->Draw("ap");
   step_b1y3_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y3_dor -> Write();

   TF1 *fit_func_dor_b1y3 = step_b1y3_dor->GetFunction("gaus");
   double gauss_mean_dor_b1y3 =  fit_func_dor_b1y3->GetParameter(1);
   double gauss_err_dor_b1y3 =  fit_func_dor_b1y3->GetParError(1);   
   float fit_value_dor_b1y3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b1y3[i] = fit_func_dor_b1y3 -> Eval(nomPos_dor_b1y3[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b1y3_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b1y3_dor_residual -> SetPoint(i, nomPos_dor_b1y3[i], num_vtx_b1y3_plots[i] - fit_value_dor_b1y3[i] );
    step_b1y3_dor_residual -> SetPointError(i, 0.0,  num_vtx_b1y3_err[i]);
    }
  c_dor_b1y3 -> cd(2);
  c_dor_b1y3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y3_dor_residual -> Draw("PA");
  step_b1y3_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y3_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y3_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y3_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y3_dor_residual -> SetMarkerStyle(21);
  step_b1y3_dor_residual -> SetMarkerSize(1.5);
  step_b1y3_dor_residual -> SetTitle("");
  step_b1y3_dor_residual -> Write();
  

  TLine *line_dor_b1y3 = new TLine(c_dor_b1y3 -> cd(2) -> GetUxmin(), 0.0, c_dor_b1y3 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b1y3 -> SetLineColor(14);
  line_dor_b1y3 -> SetLineStyle(3);
  line_dor_b1y3 -> Draw();
  c_dor_b1y3 -> Update(); 
  //c_dor_b1y3 -> SaveAs("dor_step_b1y3.root");
  c_dor_b1y3 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b1y4 = new TCanvas("c_dor_b1y4","dor_step_b1y4",700,500); 
   step_b1y4_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b1y4_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y4_dor-> SetTitle("dor_step_B1Y4");
   step_b1y4_dor->SetMarkerStyle(21);
   step_b1y4_dor->SetMarkerSize(1.5);
   c_dor_b1y4 -> Divide(1,2);
   c_dor_b1y4 -> cd(1);
   c_dor_b1y4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y4_dor->Draw("ap");
   step_b1y4_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y4_dor -> Write();

   TF1 *fit_func_dor_b1y4 = step_b1y4_dor->GetFunction("gaus");
   double gauss_mean_dor_b1y4 =  fit_func_dor_b1y4->GetParameter(1);
   double gauss_err_dor_b1y4 =  fit_func_dor_b1y4->GetParError(1);   
   float fit_value_dor_b1y4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b1y4[i] = fit_func_dor_b1y4 -> Eval(nomPos_dor_b1y4[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b1y4_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b1y4_dor_residual -> SetPoint(i, nomPos_dor_b1y4[i], num_vtx_b1y4_plots[i] - fit_value_dor_b1y4[i] );
    step_b1y4_dor_residual -> SetPointError(i, 0.0,  num_vtx_b1y4_err[i]);
    }
  c_dor_b1y4 -> cd(2);
  c_dor_b1y4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y4_dor_residual -> Draw("PA");
  step_b1y4_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y4_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y4_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y4_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y4_dor_residual -> SetMarkerStyle(21);
  step_b1y4_dor_residual -> SetMarkerSize(1.5);
  step_b1y4_dor_residual -> SetTitle("");
  step_b1y4_dor_residual -> Write();
  

  TLine *line_dor_b1y4 = new TLine(c_dor_b1y4 -> cd(2) -> GetUxmin(), 0.0, c_dor_b1y4 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b1y4 -> SetLineColor(14);
  line_dor_b1y4 -> SetLineStyle(3);
  line_dor_b1y4 -> Draw();
  c_dor_b1y4 -> Update(); 
  //c_dor_b1y4 -> SaveAs("dor_step_b1y4.root");
  c_dor_b1y4 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b1y5 = new TCanvas("c_dor_b1y5","dor_step_b1y5",700,500); 
   step_b1y5_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b1y5_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y5_dor-> SetTitle("dor_step_B1Y5");
   step_b1y5_dor->SetMarkerStyle(21);
   step_b1y5_dor->SetMarkerSize(1.5);
   c_dor_b1y5 -> Divide(1,2);
   c_dor_b1y5 -> cd(1);
   c_dor_b1y5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y5_dor->Draw("ap");
   step_b1y5_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y5_dor -> Write();

   TF1 *fit_func_dor_b1y5 = step_b1y5_dor->GetFunction("gaus");
   double gauss_mean_dor_b1y5 =  fit_func_dor_b1y5->GetParameter(1);
   double gauss_err_dor_b1y5 =  fit_func_dor_b1y5->GetParError(1);   
   float fit_value_dor_b1y5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b1y5[i] = fit_func_dor_b1y5 -> Eval(nomPos_dor_b1y5[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b1y5_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b1y5_dor_residual -> SetPoint(i, nomPos_dor_b1y5[i], num_vtx_b1y5_plots[i] - fit_value_dor_b1y5[i] );
    step_b1y5_dor_residual -> SetPointError(i, 0.0,  num_vtx_b1y5_err[i]);
    }
  c_dor_b1y5 -> cd(2);
  c_dor_b1y5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y5_dor_residual -> Draw("PA");
  step_b1y5_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y5_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y5_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y5_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y5_dor_residual -> SetMarkerStyle(21);
  step_b1y5_dor_residual -> SetMarkerSize(1.5);
  step_b1y5_dor_residual -> SetTitle("");
  step_b1y5_dor_residual -> Write();
  

  TLine *line_dor_b1y5 = new TLine(c_dor_b1y5 -> cd(2) -> GetUxmin(), 0.0, c_dor_b1y5 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b1y5 -> SetLineColor(14);
  line_dor_b1y5 -> SetLineStyle(3);
  line_dor_b1y5 -> Draw();
  c_dor_b1y5 -> Update(); 
  //c_dor_b1y5 -> SaveAs("dor_step_b1y5.root");
  c_dor_b1y5 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b1x1 = new TCanvas("c_dor_b1x1","dor_step_b1x1",700,500); 
   step_b1x1_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b1x1_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x1_dor-> SetTitle("dor_step_B1X1");
   step_b1x1_dor->SetMarkerStyle(21);
   step_b1x1_dor->SetMarkerSize(1.5);
   c_dor_b1x1 -> Divide(1,2);
   c_dor_b1x1 -> cd(1);
   c_dor_b1x1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x1_dor->Draw("ap");
   step_b1x1_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x1_dor -> Write();

   TF1 *fit_func_dor_b1x1 = step_b1x1_dor->GetFunction("gaus");
   double gauss_mean_dor_b1x1 =  fit_func_dor_b1x1->GetParameter(1);
   double gauss_err_dor_b1x1 =  fit_func_dor_b1x1->GetParError(1);   
   float fit_value_dor_b1x1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b1x1[i] = fit_func_dor_b1x1 -> Eval(nomPos_dor_b1x1[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b1x1_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b1x1_dor_residual -> SetPoint(i, nomPos_dor_b1x1[i], num_vtx_b1x1_plots[i] - fit_value_dor_b1x1[i] );
    step_b1x1_dor_residual -> SetPointError(i, 0.0,  num_vtx_b1x1_err[i]);
    }
  c_dor_b1x1 -> cd(2);
  c_dor_b1x1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x1_dor_residual -> Draw("PA");
  step_b1x1_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x1_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x1_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x1_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x1_dor_residual -> SetMarkerStyle(21);
  step_b1x1_dor_residual -> SetMarkerSize(1.5);
  step_b1x1_dor_residual -> SetTitle("");
  step_b1x1_dor_residual -> Write();
  

  TLine *line_dor_b1x1 = new TLine(c_dor_b1x1 -> cd(2) -> GetUxmin(), 0.0, c_dor_b1x1 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b1x1 -> SetLineColor(14);
  line_dor_b1x1 -> SetLineStyle(3);
  line_dor_b1x1 -> Draw();
  c_dor_b1x1 -> Update(); 
  //c_dor_b1x1 -> SaveAs("dor_step_b1x1.root");
  c_dor_b1x1 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b1x2 = new TCanvas("c_dor_b1x2","dor_step_b1x2",700,500); 
   step_b1x2_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b1x2_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x2_dor-> SetTitle("dor_step_B1X2");
   step_b1x2_dor->SetMarkerStyle(21);
   step_b1x2_dor->SetMarkerSize(1.5);
   c_dor_b1x2 -> Divide(1,2);
   c_dor_b1x2 -> cd(1);
   c_dor_b1x2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x2_dor->Draw("ap");
   step_b1x2_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x2_dor -> Write();

   TF1 *fit_func_dor_b1x2 = step_b1x2_dor->GetFunction("gaus");
   double gauss_mean_dor_b1x2 =  fit_func_dor_b1x2->GetParameter(1);
   double gauss_err_dor_b1x2 =  fit_func_dor_b1x2->GetParError(1);   
   float fit_value_dor_b1x2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b1x2[i] = fit_func_dor_b1x2 -> Eval(nomPos_dor_b1x2[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b1x2_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b1x2_dor_residual -> SetPoint(i, nomPos_dor_b1x2[i], num_vtx_b1x2_plots[i] - fit_value_dor_b1x2[i] );
    step_b1x2_dor_residual -> SetPointError(i, 0.0,  num_vtx_b1x2_err[i]);
    }
  c_dor_b1x2 -> cd(2);
  c_dor_b1x2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x2_dor_residual -> Draw("PA");
  step_b1x2_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x2_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x2_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x2_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x2_dor_residual -> SetMarkerStyle(21);
  step_b1x2_dor_residual -> SetMarkerSize(1.5);
  step_b1x2_dor_residual -> SetTitle("");
  step_b1x2_dor_residual -> Write();
  

  TLine *line_dor_b1x2 = new TLine(c_dor_b1x2 -> cd(2) -> GetUxmin(), 0.0, c_dor_b1x2 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b1x2 -> SetLineColor(14);
  line_dor_b1x2 -> SetLineStyle(3);
  line_dor_b1x2 -> Draw();
  c_dor_b1x2 -> Update(); 
  //c_dor_b1x2 -> SaveAs("dor_step_b1x2.root");
  c_dor_b1x2 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b1x3 = new TCanvas("c_dor_b1x3","dor_step_b1x3",700,500); 
   step_b1x3_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b1x3_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x3_dor-> SetTitle("dor_step_B1X3");
   step_b1x3_dor->SetMarkerStyle(21);
   step_b1x3_dor->SetMarkerSize(1.5);
   c_dor_b1x3 -> Divide(1,2);
   c_dor_b1x3 -> cd(1);
   c_dor_b1x3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x3_dor->Draw("ap");
   step_b1x3_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x3_dor -> Write();

   TF1 *fit_func_dor_b1x3 = step_b1x3_dor->GetFunction("gaus");
   double gauss_mean_dor_b1x3 =  fit_func_dor_b1x3->GetParameter(1);
   double gauss_err_dor_b1x3 =  fit_func_dor_b1x3->GetParError(1);   
   float fit_value_dor_b1x3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b1x3[i] = fit_func_dor_b1x3 -> Eval(nomPos_dor_b1x3[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b1x3_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b1x3_dor_residual -> SetPoint(i, nomPos_dor_b1x3[i], num_vtx_b1x3_plots[i] - fit_value_dor_b1x3[i] );
    step_b1x3_dor_residual -> SetPointError(i, 0.0,  num_vtx_b1x3_err[i]);
    }
  c_dor_b1x3 -> cd(2);
  c_dor_b1x3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x3_dor_residual -> Draw("PA");
  step_b1x3_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x3_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x3_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x3_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x3_dor_residual -> SetMarkerStyle(21);
  step_b1x3_dor_residual -> SetMarkerSize(1.5);
  step_b1x3_dor_residual -> SetTitle("");
  step_b1x3_dor_residual -> Write();
  

  TLine *line_dor_b1x3 = new TLine(c_dor_b1x3 -> cd(2) -> GetUxmin(), 0.0, c_dor_b1x3 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b1x3 -> SetLineColor(14);
  line_dor_b1x3 -> SetLineStyle(3);
  line_dor_b1x3 -> Draw();
  c_dor_b1x3 -> Update(); 
  //c_dor_b1x3 -> SaveAs("dor_step_b1x3.root");
  c_dor_b1x3 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b1x4 = new TCanvas("c_dor_b1x4","dor_step_b1x4",700,500); 
   step_b1x4_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b1x4_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x4_dor-> SetTitle("dor_step_B1X4");
   step_b1x4_dor->SetMarkerStyle(21);
   step_b1x4_dor->SetMarkerSize(1.5);
   c_dor_b1x4 -> Divide(1,2);
   c_dor_b1x4 -> cd(1);
   c_dor_b1x4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x4_dor->Draw("ap");
   step_b1x4_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x4_dor -> Write();

   TF1 *fit_func_dor_b1x4 = step_b1x4_dor->GetFunction("gaus");
   double gauss_mean_dor_b1x4 =  fit_func_dor_b1x4->GetParameter(1);
   double gauss_err_dor_b1x4 =  fit_func_dor_b1x4->GetParError(1);   
   float fit_value_dor_b1x4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b1x4[i] = fit_func_dor_b1x4 -> Eval(nomPos_dor_b1x4[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b1x4_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b1x4_dor_residual -> SetPoint(i, nomPos_dor_b1x4[i], num_vtx_b1x4_plots[i] - fit_value_dor_b1x4[i] );
    step_b1x4_dor_residual -> SetPointError(i, 0.0,  num_vtx_b1x4_err[i]);
    }
  c_dor_b1x4 -> cd(2);
  c_dor_b1x4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x4_dor_residual -> Draw("PA");
  step_b1x4_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x4_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x4_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x4_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x4_dor_residual -> SetMarkerStyle(21);
  step_b1x4_dor_residual -> SetMarkerSize(1.5);
  step_b1x4_dor_residual -> SetTitle("");
  step_b1x4_dor_residual -> Write();
  

  TLine *line_dor_b1x4 = new TLine(c_dor_b1x4 -> cd(2) -> GetUxmin(), 0.0, c_dor_b1x4 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b1x4 -> SetLineColor(14);
  line_dor_b1x4 -> SetLineStyle(3);
  line_dor_b1x4 -> Draw();
  c_dor_b1x4 -> Update(); 
  //c_dor_b1x4 -> SaveAs("dor_step_b1x4.root");
  c_dor_b1x4 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b1x5 = new TCanvas("c_dor_b1x5","dor_step_b1x5",700,500); 
   step_b1x5_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b1x5_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x5_dor-> SetTitle("dor_step_B1X5");
   step_b1x5_dor->SetMarkerStyle(21);
   step_b1x5_dor->SetMarkerSize(1.5);
   c_dor_b1x5 -> Divide(1,2);
   c_dor_b1x5 -> cd(1);
   c_dor_b1x5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x5_dor->Draw("ap");
   step_b1x5_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x5_dor -> Write();

   TF1 *fit_func_dor_b1x5 = step_b1x5_dor->GetFunction("gaus");
   double gauss_mean_dor_b1x5 =  fit_func_dor_b1x5->GetParameter(1);
   double gauss_err_dor_b1x5 =  fit_func_dor_b1x5->GetParError(1);   
   float fit_value_dor_b1x5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b1x5[i] = fit_func_dor_b1x5 -> Eval(nomPos_dor_b1x5[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b1x5_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b1x5_dor_residual -> SetPoint(i, nomPos_dor_b1x5[i], num_vtx_b1x5_plots[i] - fit_value_dor_b1x5[i] );
    step_b1x5_dor_residual -> SetPointError(i, 0.0,  num_vtx_b1x5_err[i]);
    }
  c_dor_b1x5 -> cd(2);
  c_dor_b1x5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x5_dor_residual -> Draw("PA");
  step_b1x5_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x5_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x5_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x5_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x5_dor_residual -> SetMarkerStyle(21);
  step_b1x5_dor_residual -> SetMarkerSize(1.5);
  step_b1x5_dor_residual -> SetTitle("");
  step_b1x5_dor_residual -> Write();
  

  TLine *line_dor_b1x5 = new TLine(c_dor_b1x5 -> cd(2) -> GetUxmin(), 0.0, c_dor_b1x5 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b1x5 -> SetLineColor(14);
  line_dor_b1x5 -> SetLineStyle(3);
  line_dor_b1x5 -> Draw();
  c_dor_b1x5 -> Update(); 
  //c_dor_b1x5 -> SaveAs("dor_step_b1x5.root");
  c_dor_b1x5 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  

  TCanvas* c_dor_b2x1 = new TCanvas("c_dor_b2x1","dor_step_b2x1",700,500); 
   step_b2x1_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b2x1_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x1_dor-> SetTitle("dor_step_B2X1");
   step_b2x1_dor->SetMarkerStyle(21);
   step_b2x1_dor->SetMarkerSize(1.5);
   c_dor_b2x1 -> Divide(1,2);
   c_dor_b2x1 -> cd(1);
   c_dor_b2x1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x1_dor->Draw("ap");
   step_b2x1_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x1_dor -> Write();

   TF1 *fit_func_dor_b2x1 = step_b2x1_dor->GetFunction("gaus");
   double gauss_mean_dor_b2x1 =  fit_func_dor_b2x1->GetParameter(1);
   double gauss_err_dor_b2x1 =  fit_func_dor_b2x1->GetParError(1);   
   float fit_value_dor_b2x1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b2x1[i] = fit_func_dor_b2x1 -> Eval(nomPos_dor_b2x1[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b2x1_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b2x1_dor_residual -> SetPoint(i, nomPos_dor_b2x1[i], num_vtx_b2x1_plots[i] - fit_value_dor_b2x1[i] );
    step_b2x1_dor_residual -> SetPointError(i, 0.0,  num_vtx_b2x1_err[i]);
    }
  c_dor_b2x1 -> cd(2);
  c_dor_b2x1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x1_dor_residual -> Draw("PA");
  step_b2x1_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x1_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x1_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x1_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x1_dor_residual -> SetMarkerStyle(21);
  step_b2x1_dor_residual -> SetMarkerSize(1.5);
  step_b2x1_dor_residual -> SetTitle("");
  step_b2x1_dor_residual -> Write();
  

  TLine *line_dor_b2x1 = new TLine(c_dor_b2x1 -> cd(2) -> GetUxmin(), 0.0, c_dor_b2x1 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b2x1 -> SetLineColor(14);
  line_dor_b2x1 -> SetLineStyle(3);
  line_dor_b2x1 -> Draw();
  c_dor_b2x1 -> Update(); 
  //c_dor_b2x1 -> SaveAs("dor_step_b2x1.root");
  c_dor_b2x1 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b2x2 = new TCanvas("c_dor_b2x2","dor_step_b2x2",700,500); 
   step_b2x2_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b2x2_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x2_dor-> SetTitle("dor_step_B2X2");
   step_b2x2_dor->SetMarkerStyle(21);
   step_b2x2_dor->SetMarkerSize(1.5);
   c_dor_b2x2 -> Divide(1,2);
   c_dor_b2x2 -> cd(1);
   c_dor_b2x2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x2_dor->Draw("ap");
   step_b2x2_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x2_dor -> Write();

   TF1 *fit_func_dor_b2x2 = step_b2x2_dor->GetFunction("gaus");
   double gauss_mean_dor_b2x2 =  fit_func_dor_b2x2->GetParameter(1);
   double gauss_err_dor_b2x2 =  fit_func_dor_b2x2->GetParError(1);   
   float fit_value_dor_b2x2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b2x2[i] = fit_func_dor_b2x2 -> Eval(nomPos_dor_b2x2[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b2x2_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b2x2_dor_residual -> SetPoint(i, nomPos_dor_b2x2[i], num_vtx_b2x2_plots[i] - fit_value_dor_b2x2[i] );
    step_b2x2_dor_residual -> SetPointError(i, 0.0,  num_vtx_b2x2_err[i]);
    }
  c_dor_b2x2 -> cd(2);
  c_dor_b2x2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x2_dor_residual -> Draw("PA");
  step_b2x2_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x2_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x2_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x2_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x2_dor_residual -> SetMarkerStyle(21);
  step_b2x2_dor_residual -> SetMarkerSize(1.5);
  step_b2x2_dor_residual -> SetTitle("");
  step_b2x2_dor_residual -> Write();
  

  TLine *line_dor_b2x2 = new TLine(c_dor_b2x2 -> cd(2) -> GetUxmin(), 0.0, c_dor_b2x2 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b2x2 -> SetLineColor(14);
  line_dor_b2x2 -> SetLineStyle(3);
  line_dor_b2x2 -> Draw();
  c_dor_b2x2 -> Update(); 
  //c_dor_b2x2 -> SaveAs("dor_step_b2x2.root");
  c_dor_b2x2 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b2x3 = new TCanvas("c_dor_b2x3","dor_step_b2x3",700,500); 
   step_b2x3_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b2x3_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x3_dor-> SetTitle("dor_step_B2X3");
   step_b2x3_dor->SetMarkerStyle(21);
   step_b2x3_dor->SetMarkerSize(1.5);
   c_dor_b2x3 -> Divide(1,2);
   c_dor_b2x3 -> cd(1);
   c_dor_b2x3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x3_dor->Draw("ap");
   step_b2x3_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x3_dor -> Write();

   TF1 *fit_func_dor_b2x3 = step_b2x3_dor->GetFunction("gaus");
   double gauss_mean_dor_b2x3 =  fit_func_dor_b2x3->GetParameter(1);
   double gauss_err_dor_b2x3 =  fit_func_dor_b2x3->GetParError(1);   
   float fit_value_dor_b2x3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b2x3[i] = fit_func_dor_b2x3 -> Eval(nomPos_dor_b2x3[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b2x3_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b2x3_dor_residual -> SetPoint(i, nomPos_dor_b2x3[i], num_vtx_b2x3_plots[i] - fit_value_dor_b2x3[i] );
    step_b2x3_dor_residual -> SetPointError(i, 0.0,  num_vtx_b2x3_err[i]);
    }
  c_dor_b2x3 -> cd(2);
  c_dor_b2x3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x3_dor_residual -> Draw("PA");
  step_b2x3_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x3_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x3_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x3_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x3_dor_residual -> SetMarkerStyle(21);
  step_b2x3_dor_residual -> SetMarkerSize(1.5);
  step_b2x3_dor_residual -> SetTitle("");
  step_b2x3_dor_residual -> Write();
  

  TLine *line_dor_b2x3 = new TLine(c_dor_b2x3 -> cd(2) -> GetUxmin(), 0.0, c_dor_b2x3 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b2x3 -> SetLineColor(14);
  line_dor_b2x3 -> SetLineStyle(3);
  line_dor_b2x3 -> Draw();
  c_dor_b2x3 -> Update(); 
  //c_dor_b2x3 -> SaveAs("dor_step_b2x3.root");
  c_dor_b2x3 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b2x4 = new TCanvas("c_dor_b2x4","dor_step_b2x4",700,500); 
   step_b2x4_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b2x4_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x4_dor-> SetTitle("dor_step_B2X4");
   step_b2x4_dor->SetMarkerStyle(21);
   step_b2x4_dor->SetMarkerSize(1.5);
   c_dor_b2x4 -> Divide(1,2);
   c_dor_b2x4 -> cd(1);
   c_dor_b2x4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x4_dor->Draw("ap");
   step_b2x4_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x4_dor -> Write();

   TF1 *fit_func_dor_b2x4 = step_b2x4_dor->GetFunction("gaus");
   double gauss_mean_dor_b2x4 =  fit_func_dor_b2x4->GetParameter(1);
   double gauss_err_dor_b2x4 =  fit_func_dor_b2x4->GetParError(1);   
   float fit_value_dor_b2x4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b2x4[i] = fit_func_dor_b2x4 -> Eval(nomPos_dor_b2x4[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b2x4_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b2x4_dor_residual -> SetPoint(i, nomPos_dor_b2x4[i], num_vtx_b2x4_plots[i] - fit_value_dor_b2x4[i] );
    step_b2x4_dor_residual -> SetPointError(i, 0.0,  num_vtx_b2x4_err[i]);
    }
  c_dor_b2x4 -> cd(2);
  c_dor_b2x4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x4_dor_residual -> Draw("PA");
  step_b2x4_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x4_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x4_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x4_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x4_dor_residual -> SetMarkerStyle(21);
  step_b2x4_dor_residual -> SetMarkerSize(1.5);
  step_b2x4_dor_residual -> SetTitle("");
  step_b2x4_dor_residual -> Write();
  

  TLine *line_dor_b2x4 = new TLine(c_dor_b2x4 -> cd(2) -> GetUxmin(), 0.0, c_dor_b2x4 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b2x4 -> SetLineColor(14);
  line_dor_b2x4 -> SetLineStyle(3);
  line_dor_b2x4 -> Draw();
  c_dor_b2x4 -> Update(); 
  //c_dor_b2x4 -> SaveAs("dor_step_b2x4.root");
  c_dor_b2x4 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b2x5 = new TCanvas("c_dor_b2x5","dor_step_b2x5",700,500); 
   step_b2x5_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b2x5_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x5_dor-> SetTitle("dor_step_B2X5");
   step_b2x5_dor->SetMarkerStyle(21);
   step_b2x5_dor->SetMarkerSize(1.5);
   c_dor_b2x5 -> Divide(1,2);
   c_dor_b2x5 -> cd(1);
   c_dor_b2x5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x5_dor->Draw("ap");
   step_b2x5_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x5_dor -> Write();

   TF1 *fit_func_dor_b2x5 = step_b2x5_dor->GetFunction("gaus");
   double gauss_mean_dor_b2x5 =  fit_func_dor_b2x5->GetParameter(1);
   double gauss_err_dor_b2x5 =  fit_func_dor_b2x5->GetParError(1);   
   float fit_value_dor_b2x5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b2x5[i] = fit_func_dor_b2x5 -> Eval(nomPos_dor_b2x5[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b2x5_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b2x5_dor_residual -> SetPoint(i, nomPos_dor_b2x5[i], num_vtx_b2x5_plots[i] - fit_value_dor_b2x5[i] );
    step_b2x5_dor_residual -> SetPointError(i, 0.0,  num_vtx_b2x5_err[i]);
    }
  c_dor_b2x5 -> cd(2);
  c_dor_b2x5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x5_dor_residual -> Draw("PA");
  step_b2x5_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x5_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x5_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x5_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x5_dor_residual -> SetMarkerStyle(21);
  step_b2x5_dor_residual -> SetMarkerSize(1.5);
  step_b2x5_dor_residual -> SetTitle("");
  step_b2x5_dor_residual -> Write();
  

  TLine *line_dor_b2x5 = new TLine(c_dor_b2x5 -> cd(2) -> GetUxmin(), 0.0, c_dor_b2x5 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b2x5 -> SetLineColor(14);
  line_dor_b2x5 -> SetLineStyle(3);
  line_dor_b2x5 -> Draw();
  c_dor_b2x5 -> Update(); 
  //c_dor_b2x5 -> SaveAs("dor_step_b2x5.root");
  c_dor_b2x5 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");
  
   //ROOT::Math::MinimizerOptions::SetDefaultMaxFunctionCalls(10000);
   //ROOT::Math::MinimizerOptions::SetDefaultTolerance(1);

   TCanvas* c_dor_b2y1 = new TCanvas("c_dor_b2y1","dor_step_b2y1",700,500); 
   step_b2y1_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b2y1_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y1_dor-> SetTitle("dor_step_B2Y1");
   step_b2y1_dor->SetMarkerStyle(21);
   step_b2y1_dor->SetMarkerSize(1.5);
   c_dor_b2y1 -> Divide(1,2);
   c_dor_b2y1 -> cd(1);
   c_dor_b2y1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y1_dor->Draw("ap");
   step_b2y1_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y1_dor -> Write();

   TF1 *fit_func_dor_b2y1 = step_b2y1_dor->GetFunction("gaus");
   double gauss_mean_dor_b2y1 =  fit_func_dor_b2y1->GetParameter(1);
   double gauss_err_dor_b2y1 =  fit_func_dor_b2y1->GetParError(1);   
   float fit_value_dor_b2y1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b2y1[i] = fit_func_dor_b2y1 -> Eval(nomPos_dor_b2y1[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b2y1_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b2y1_dor_residual -> SetPoint(i, nomPos_dor_b2y1[i], num_vtx_b2y1_plots[i] - fit_value_dor_b2y1[i] );
    step_b2y1_dor_residual -> SetPointError(i, 0.0,  num_vtx_b2y1_err[i]);
    }
  c_dor_b2y1 -> cd(2);
  c_dor_b2y1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y1_dor_residual -> Draw("PA");
  step_b2y1_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y1_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y1_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y1_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y1_dor_residual -> SetMarkerStyle(21);
  step_b2y1_dor_residual -> SetMarkerSize(1.5);
  step_b2y1_dor_residual -> SetTitle("");
  step_b2y1_dor_residual -> Write();
  

  TLine *line_dor_b2y1 = new TLine(c_dor_b2y1 -> cd(2) -> GetUxmin(), 0.0, c_dor_b2y1 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b2y1 -> SetLineColor(14);
  line_dor_b2y1 -> SetLineStyle(3);
  line_dor_b2y1 -> Draw();
  c_dor_b2y1 -> Update(); 
  //c_dor_b2y1 -> SaveAs("dor_step_b2y1.root");
  c_dor_b2y1 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b2y2 = new TCanvas("c_dor_b2y2","dor_step_b2y2",700,500); 
   step_b2y2_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b2y2_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y2_dor-> SetTitle("dor_step_B2Y2");
   step_b2y2_dor->SetMarkerStyle(21);
   step_b2y2_dor->SetMarkerSize(1.5);
   c_dor_b2y2 -> Divide(1,2);
   c_dor_b2y2 -> cd(1);
   c_dor_b2y2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y2_dor->Draw("ap");
   step_b2y2_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y2_dor -> Write();

   TF1 *fit_func_dor_b2y2 = step_b2y2_dor->GetFunction("gaus");
   double gauss_mean_dor_b2y2 =  fit_func_dor_b2y2->GetParameter(1);
   double gauss_err_dor_b2y2 =  fit_func_dor_b2y2->GetParError(1);   
   float fit_value_dor_b2y2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b2y2[i] = fit_func_dor_b2y2 -> Eval(nomPos_dor_b2y2[i]);
    cout << "fit values b2y2 av" << i << fit_value_dor_b2y2[i] << endl;
    //step_b2y2_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b2y2_dor_residual -> SetPoint(i, nomPos_dor_b2y2[i], num_vtx_b2y2_plots[i] - fit_value_dor_b2y2[i] );
    step_b2y2_dor_residual -> SetPointError(i, 0.0,  num_vtx_b2y2_err[i]);
    }
  c_dor_b2y2 -> cd(2);
  c_dor_b2y2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y2_dor_residual -> Draw("PA");
  step_b2y2_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y2_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y2_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y2_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y2_dor_residual -> SetMarkerStyle(21);
  step_b2y2_dor_residual -> SetMarkerSize(1.5);
  step_b2y2_dor_residual -> SetTitle("");
  step_b2y2_dor_residual -> Write();

  TLine *line_dor_b2y2 = new TLine(c_dor_b2y2 -> cd(2) -> GetUxmin(), 0.0, c_dor_b2y2 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b2y2 -> SetLineColor(14);
  line_dor_b2y2 -> SetLineStyle(3);
  line_dor_b2y2 -> Draw();
  c_dor_b2y2 -> Update(); 
  //c_dor_b2y2 -> SaveAs("dor_step_b2y2.root");
  c_dor_b2y2 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  TCanvas* c_dor_b2y3 = new TCanvas("c_dor_b2y3","dor_step_b2y3",700,500); 
   step_b2y3_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b2y3_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y3_dor-> SetTitle("dor_step_B2Y3");
   step_b2y3_dor->SetMarkerStyle(21);
   step_b2y3_dor->SetMarkerSize(1.5);
   c_dor_b2y3 -> Divide(1,2);
   c_dor_b2y3 -> cd(1);
   c_dor_b2y3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y3_dor->Draw("ap");
   step_b2y3_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y3_dor -> Write();

   TF1 *fit_func_dor_b2y3 = step_b2y3_dor->GetFunction("gaus");
   double gauss_mean_dor_b2y3 =  fit_func_dor_b2y3->GetParameter(1);
   double gauss_err_dor_b2y3 =  fit_func_dor_b2y3->GetParError(1);   
   float fit_value_dor_b2y3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b2y3[i] = fit_func_dor_b2y3 -> Eval(nomPos_dor_b2y3[i]);
    cout << "fit values b2y3 av" << i << fit_value_dor_b2y3[i] << endl;
    //step_b2y3_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b2y3_dor_residual -> SetPoint(i, nomPos_dor_b2y3[i], num_vtx_b2y3_plots[i] - fit_value_dor_b2y3[i] );
    step_b2y3_dor_residual -> SetPointError(i, 0.0,  num_vtx_b2y3_err[i]);
    }
  
  c_dor_b2y3 -> cd(2);
  c_dor_b2y3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y3_dor_residual -> Draw("PA");
  step_b2y3_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y3_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y3_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y3_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y3_dor_residual -> SetMarkerStyle(21);
  step_b2y3_dor_residual -> SetMarkerSize(1.5);
  step_b2y3_dor_residual -> SetTitle("");
  step_b2y3_dor_residual -> Write();
  

  TLine *line_dor_b2y3 = new TLine(c_dor_b2y3 -> cd(2) -> GetUxmin(), 0.0, c_dor_b2y3 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b2y3 -> SetLineColor(14);
  line_dor_b2y3 -> SetLineStyle(3);
  line_dor_b2y3 -> Draw();
  c_dor_b2y3 -> Update(); 
  //c_dor_b2y3 -> SaveAs("dor_step_b2y3.root");
  
  c_dor_b2y3 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");
  
   

  TCanvas* c_dor_b2y4 = new TCanvas("c_dor_b2y4","dor_step_b2y4",700,500); 
   step_b2y4_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b2y4_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y4_dor-> SetTitle("dor_step_B2Y4");
   step_b2y4_dor->SetMarkerStyle(21);
   step_b2y4_dor->SetMarkerSize(1.5);
   c_dor_b2y4 -> Divide(1,2);
   c_dor_b2y4 -> cd(1);
   c_dor_b2y4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y4_dor->Draw("ap");
   step_b2y4_dor->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y4_dor -> Write();

   TF1 *fit_func_dor_b2y4 = step_b2y4_dor->GetFunction("gaus");
   double gauss_mean_dor_b2y4 =  fit_func_dor_b2y4->GetParameter(1);
   double gauss_err_dor_b2y4 =  fit_func_dor_b2y4->GetParError(1);   
   float fit_value_dor_b2y4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b2y4[i] = fit_func_dor_b2y4 -> Eval(nomPos_dor_b2y4[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b2y4_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b2y4_dor_residual -> SetPoint(i, nomPos_dor_b2y4[i], num_vtx_b2y4_plots[i] - fit_value_dor_b2y4[i] );
    step_b2y4_dor_residual -> SetPointError(i, 0.0,  num_vtx_b2y4_err[i]);
    }
  c_dor_b2y4 -> cd(2);
  c_dor_b2y4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y4_dor_residual -> Draw("PA");
  step_b2y4_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y4_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y4_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y4_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y4_dor_residual -> SetMarkerStyle(21);
  step_b2y4_dor_residual -> SetMarkerSize(1.5);
  step_b2y4_dor_residual -> SetTitle("");
  step_b2y4_dor_residual -> Write();
  

  TLine *line_dor_b2y4 = new TLine(c_dor_b2y4 -> cd(2) -> GetUxmin(), 0.0, c_dor_b2y4 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b2y4 -> SetLineColor(14);
  line_dor_b2y4 -> SetLineStyle(3);
  line_dor_b2y4 -> Draw();
  c_dor_b2y4 -> Update(); 
  //c_dor_b2y4 -> SaveAs("dor_step_b2y4.root");
  c_dor_b2y4 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf(");

  
  TCanvas* c_dor_b2y5 = new TCanvas("c_dor_b2y5","dor_step_b2y5",700,500); 
   step_b2y5_dor->GetXaxis()->SetTitle("dor b1 - b2 (micro)");
   step_b2y5_dor->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y5_dor-> SetTitle("dor_step_B2Y5");
   step_b2y5_dor->SetMarkerStyle(21);
   step_b2y5_dor->SetMarkerSize(1.5);
   c_dor_b2y5 -> Divide(1,2);
   c_dor_b2y5 -> cd(1);
   c_dor_b2y5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y5_dor->Draw("ap");
   step_b2y5_dor->Fit("gaus"); 
   gStyle -> SetOptFit(1111);
   step_b2y5_dor -> Write();

   TF1 *fit_func_dor_b2y5 = step_b2y5_dor->GetFunction("gaus");
   double gauss_mean_dor_b2y5 =  fit_func_dor_b2y5->GetParameter(1);
   double gauss_err_dor_b2y5 =  fit_func_dor_b2y5->GetParError(1);
   cout << "gauss_mean_dor_b2y5=  " << gauss_mean_dor_b2y5 << "    gauss_err_dor_b2y5=  " << gauss_err_dor_b2y5 << endl; 
   float fit_value_dor_b2y5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_dor_b2y5[i] = fit_func_dor_b2y5 -> Eval(nomPos_dor_b2y5[i]);
    //cout << "fit values av" << i << fit_value_dor[i] << endl;
    //step_b2y5_dor_residual -> Fill(nomPos_dor[j], num_vtx_perstep[j] - fit_value_dor[j] );
    step_b2y5_dor_residual -> SetPoint(i, nomPos_dor_b2y5[i], num_vtx_b2y5_plots[i] - fit_value_dor_b2y5[i] );
    step_b2y5_dor_residual -> SetPointError(i, 0.0,  num_vtx_b2y5_err[i]);
    }
  c_dor_b2y5 -> cd(2);
  c_dor_b2y5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y5_dor_residual -> Draw("PA");
  step_b2y5_dor_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y5_dor_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y5_dor_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y5_dor_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y5_dor_residual -> SetMarkerStyle(21);
  step_b2y5_dor_residual -> SetMarkerSize(1.5);
  step_b2y5_dor_residual -> SetTitle("");
  step_b2y5_dor_residual -> Write();
  

  TLine *line_dor_b2y5 = new TLine(c_dor_b2y5 -> cd(2) -> GetUxmin(), 0.0, c_dor_b2y5 -> cd(2)-> GetUxmax(), 0.0);
  line_dor_b2y5 -> SetLineColor(14);
  line_dor_b2y5 -> SetLineStyle(3);
  line_dor_b2y5 -> Draw();
  c_dor_b2y5 -> Update(); 
  //c_dor_b2y5 -> SaveAs("dor_step_b2y5.root");
  c_dor_b2y5 -> SaveAs("num_vtx_all_dividedby_events_dor.pdf)");
  
  ofstream myfile;
  myfile.open ("gauss_mean_err_dor.txt");
  myfile << "begin with:  b1y , b1x , b2y , b2x .\n";
  
  myfile <<  gauss_mean_dor_b1y1 << " , " << gauss_err_dor_b1y1 << endl;
  myfile <<  gauss_mean_dor_b1y2 << " , " << gauss_err_dor_b1y2 << endl;
  myfile <<  gauss_mean_dor_b1y3 << " , " << gauss_err_dor_b1y3 << endl;
  myfile <<  gauss_mean_dor_b1y4 << " , " << gauss_err_dor_b1y4 << endl;
  myfile <<  gauss_mean_dor_b1y5 << " , " << gauss_err_dor_b1y5 << endl;
  
  myfile <<  gauss_mean_dor_b1x1 << " , " << gauss_err_dor_b1x1 << endl;
  myfile <<  gauss_mean_dor_b1x2 << " , " << gauss_err_dor_b1x2 << endl;
  myfile <<  gauss_mean_dor_b1x3 << " , " << gauss_err_dor_b1x3 << endl;
  myfile <<  gauss_mean_dor_b1x4 << " , " << gauss_err_dor_b1x4 << endl;
  myfile <<  gauss_mean_dor_b1x5 << " , " << gauss_err_dor_b1x5 << endl;
  
  myfile <<  gauss_mean_dor_b2y1 << " , " << gauss_err_dor_b2y1 << endl;
  myfile <<  gauss_mean_dor_b2y2 << " , " << gauss_err_dor_b2y2 << endl;
  myfile <<  gauss_mean_dor_b2y3 << " , " << gauss_err_dor_b2y3 << endl;
  myfile <<  gauss_mean_dor_b2y4 << " , " << gauss_err_dor_b2y4 << endl;
  myfile <<  gauss_mean_dor_b2y5 << " , " << gauss_err_dor_b2y5 << endl;
  
  myfile <<  gauss_mean_dor_b2x1 << " , " << gauss_err_dor_b2x1 << endl;
  myfile <<  gauss_mean_dor_b2x2 << " , " << gauss_err_dor_b2x2 << endl;
  myfile <<  gauss_mean_dor_b2x3 << " , " << gauss_err_dor_b2x3 << endl;
  myfile <<  gauss_mean_dor_b2x4 << " , " << gauss_err_dor_b2x4 << endl;
  myfile <<  gauss_mean_dor_b2x5 << " , " << gauss_err_dor_b2x5 << endl;
  

  myfile.close();

  gSystem->Exec("date");
  f->Close();
}


