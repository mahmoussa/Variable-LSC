{
   //ROOT::Math::MinimizerOptions::SetDefaultMaxFunctionCalls(10000);
   TFile *f = new TFile ("num_vtx_all_av.root", "recreate");
  

  // using average values for per beam mini scan step sizes 
	float nomPos_av_b1y1[] ={ -123.818344718078 , -0.2021523007246 , 122.416914854841 };
	float nomPos_av_b1y2[] ={ -121.029288670251 , 1.51531301622739 , 123.87983650355 };
	float nomPos_av_b1y3[] ={ -119.844238698224 , 2.70130700363646 , 126.324964966679 };
	float nomPos_av_b1y4[] ={ -119.10830204873 , 3.84377717852403 , 127.735525709381 };
	float nomPos_av_b1y5[] ={ -118.177725307207 , 4.60311691702907 , 127.903951827063 };
	float nomPos_av_b1x1[] ={ -122.242169185528 , -0.31555477293884 , 122.556732658759 };
	float nomPos_av_b1x2[] ={ -123.877767863788 , -1.62193642848486 , 122.531495944708 };
	float nomPos_av_b1x3[] ={ -123.236411015402 , -0.162808695436508 , 125.638879714568 };
	float nomPos_av_b1x4[] ={ -123.058027456095 , -0.790301891223407 , 122.272027262256 };
	float nomPos_av_b1x5[] ={ -123.663661504051 , -1.59071463888891 , 121.161920698846 };
	float nomPos_av_b2y1[] ={ -124.224796470546 , -1.70533081555555 , 123.005259959712 };
	float nomPos_av_b2y2[] ={ -124.675476220379 , -1.5929244619058 , 120.431940694241 };
	float nomPos_av_b2y3[] ={ -124.150254748268 , -1.30858213555556 , 121.40088420038 };
	float nomPos_av_b2y4[] ={ -124.075192575936 , -0.05832555176631 , 122.303484875934 };
	float nomPos_av_b2y5[] ={ -122.704289993272 , 0.196167169637655 , 123.267513565328 };
	float nomPos_av_b2x1[] ={ -124.354133497109 , -0.961530514490481 , 124.76153222029 };
	float nomPos_av_b2x2[] ={ -124.156617599568 , -2.63700929905796 , 120.382498710227 };
	float nomPos_av_b2x3[] ={ -124.365241119471 , -1.25615276811595 , 120.634356047835 };
	float nomPos_av_b2x4[] ={ -124.069456065072 , -1.23737158636363 , 120.381345211572 };
	float nomPos_av_b2x5[] ={ -127.176176946956 , -2.07263714202899 , 119.957735885896 };


  double num_vtx_b1y1_plots[] ={1.85138e-27 , 3.7959e-27  , 1.92935e-27};
  double num_vtx_b1y2_plots[] ={1.89681e-27 , 3.79286e-27 , 1.87701e-27};
  double num_vtx_b1y3_plots[] ={1.92252e-27 , 3.78349e-27 , 1.8165e-27};
  double num_vtx_b1y4_plots[] ={1.96924e-27 , 3.79228e-27 , 1.77508e-27};
  double num_vtx_b1y5_plots[] ={1.9995e-27  , 3.78311e-27 , 1.75717e-27};

  double num_vtx_b1x1_plots[] ={2.51938e-27 , 3.79699e-27 , 2.46144e-27};
  double num_vtx_b1x2_plots[] ={2.49202e-27 , 3.80008e-27 , 2.45014e-27};
  double num_vtx_b1x3_plots[] ={2.50373e-27 , 3.80043e-27 , 2.40406e-27};
  double num_vtx_b1x4_plots[] ={2.51591e-27 , 3.79763e-27 , 2.44894e-27};
  double num_vtx_b1x5_plots[] ={2.49548e-27 , 3.79231e-27 , 2.46327e-27};

  double num_vtx_b2y1_plots[] ={1.83495e-27, 3.79284e-27 , 1.95514e-27 };
  double num_vtx_b2y2_plots[] ={1.84421e-27, 3.80266e-27 , 1.96816e-27   };
  double num_vtx_b2y3_plots[] ={1.86292e-27, 3.79812e-27 , 1.95287e-27   };
  double num_vtx_b2y4_plots[] ={1.89222e-27 , 3.7921e-27  , 1.90828e-27  };
  double num_vtx_b2y5_plots[] ={1.94625e-27, 3.79478e-27 , 1.85557e-27  };

  double num_vtx_b2x1_plots[] ={2.451e-27, 3.81712e-27 , 2.44122e-27  };
  double num_vtx_b2x2_plots[] ={2.44759e-27, 3.8019e-27  ,2.4934e-27  };
  double num_vtx_b2x3_plots[] ={2.44431e-27 , 3.79923e-27 , 2.50018e-27  };
  double num_vtx_b2x4_plots[] ={2.44237e-27, 3.80912e-27 , 2.50587e-27   };
  double num_vtx_b2x5_plots[] ={2.40131e-27, 3.79322e-27 , 2.51857e-27  };

   double num_vtx_b1y1_err[] = { 3.98086e-30 , 5.66764e-30 , 4.12294e-30};
   double num_vtx_b1y2_err[] = { 4.03249e-30 , 5.79457e-30 , 3.96945e-30};
   double num_vtx_b1y3_err[] = { 4.06096e-30 , 5.78812e-30 , 3.95043e-30};
   double num_vtx_b1y4_err[] = { 4.11204e-30 , 5.60901e-30 , 3.9048e-30};
   double num_vtx_b1y5_err[] = { 4.14229e-30 , 5.66192e-30 , 3.93115e-30};
   double num_vtx_b1x1_err[] = { 4.63517e-30 , 5.6149e-30  , 4.64055e-30};
   double num_vtx_b1x2_err[] = { 4.69162e-30 , 5.80656e-30 , 4.5797e-30};
   double num_vtx_b1x3_err[] = { 4.6794e-30  , 5.81229e-30 , 4.53849e-30};
   double num_vtx_b1x4_err[] = { 4.63776e-30 , 5.61683e-30 , 4.57656e-30};
   double num_vtx_b1x5_err[] = { 4.62276e-30 , 5.73594e-30 , 4.71062e-30};
   
   double num_vtx_b2y1_err[] = { 4.14401e-30, 5.73867e-30 , 4.09773e-30 };
   double num_vtx_b2y2_err[] = { 4.02266e-30, 5.68233e-30 , 4.11373e-30 };
   double num_vtx_b2y3_err[] = { 4.05144e-30, 5.74686e-30 , 4.14562e-30 };
   double num_vtx_b2y4_err[] = { 3.99676e-30, 5.67557e-30 , 4.06215e-30 };
   double num_vtx_b2y5_err[] = { 4.09147e-30 , 5.67983e-30 , 3.99265e-30};
   double num_vtx_b2x1_err[] = { 4.74386e-30, 5.70631e-30 , 4.68969e-30 };
   double num_vtx_b2x2_err[] = { 4.63911e-30, 5.68769e-30 , 4.63273e-30 };
   double num_vtx_b2x3_err[] = { 4.75141e-30 , 5.69211e-30 , 4.68346e-30 };
   double num_vtx_b2x4_err[] = { 4.59879e-30, 5.92383e-30 , 5.06501e-30   };
   double num_vtx_b2x5_err[] = { 4.7509e-30, 5.86956e-30 , 4.82922e-30  };
   

   TGraphErrors *step_b1y1_av = new TGraphErrors ();
   TGraphErrors *step_b1y1_av_residual = new TGraphErrors ();
   TGraphErrors *step_b1y2_av = new TGraphErrors ();
   TGraphErrors *step_b1y2_av_residual = new TGraphErrors ();
   TGraphErrors *step_b1y3_av = new TGraphErrors ();
   TGraphErrors *step_b1y3_av_residual = new TGraphErrors ();
   TGraphErrors *step_b1y4_av = new TGraphErrors ();
   TGraphErrors *step_b1y4_av_residual = new TGraphErrors ();
   TGraphErrors *step_b1y5_av = new TGraphErrors ();
   TGraphErrors *step_b1y5_av_residual = new TGraphErrors ();

   TGraphErrors *step_b1x1_av = new TGraphErrors ();
   TGraphErrors *step_b1x1_av_residual = new TGraphErrors ();
   TGraphErrors *step_b1x2_av = new TGraphErrors ();
   TGraphErrors *step_b1x2_av_residual = new TGraphErrors ();
   TGraphErrors *step_b1x3_av = new TGraphErrors ();
   TGraphErrors *step_b1x3_av_residual = new TGraphErrors ();
   TGraphErrors *step_b1x4_av = new TGraphErrors ();
   TGraphErrors *step_b1x4_av_residual = new TGraphErrors ();
   TGraphErrors *step_b1x5_av = new TGraphErrors ();
   TGraphErrors *step_b1x5_av_residual = new TGraphErrors ();

   TGraphErrors *step_b2y1_av = new TGraphErrors ();
   TGraphErrors *step_b2y1_av_residual = new TGraphErrors ();
   TGraphErrors *step_b2y2_av = new TGraphErrors ();
   TGraphErrors *step_b2y2_av_residual = new TGraphErrors ();
   TGraphErrors *step_b2y3_av = new TGraphErrors ();
   TGraphErrors *step_b2y3_av_residual = new TGraphErrors ();
   TGraphErrors *step_b2y4_av = new TGraphErrors ();
   TGraphErrors *step_b2y4_av_residual = new TGraphErrors ();
   TGraphErrors *step_b2y5_av = new TGraphErrors ();
   TGraphErrors *step_b2y5_av_residual = new TGraphErrors ();

   TGraphErrors *step_b2x1_av = new TGraphErrors ();
   TGraphErrors *step_b2x1_av_residual = new TGraphErrors ();
   TGraphErrors *step_b2x2_av = new TGraphErrors ();
   TGraphErrors *step_b2x2_av_residual = new TGraphErrors ();
   TGraphErrors *step_b2x3_av = new TGraphErrors ();
   TGraphErrors *step_b2x3_av_residual = new TGraphErrors ();
   TGraphErrors *step_b2x4_av = new TGraphErrors ();
   TGraphErrors *step_b2x4_av_residual = new TGraphErrors ();
   TGraphErrors *step_b2x5_av = new TGraphErrors ();
   TGraphErrors *step_b2x5_av_residual = new TGraphErrors ();

for (int j=0 ; j<3 ; j++){
     step_b1y1_av -> SetPoint(j, nomPos_av_b1y1[j], num_vtx_b1y1_plots[j]);
     step_b1y1_av -> SetPointError( j , 0.0 , num_vtx_b1y1_err[j] );
     step_b1y2_av -> SetPoint(j, nomPos_av_b1y2[j], num_vtx_b1y2_plots[j]);
     step_b1y2_av -> SetPointError( j , 0.0 , num_vtx_b1y2_err[j] );
     step_b1y3_av -> SetPoint(j, nomPos_av_b1y3[j], num_vtx_b1y3_plots[j]);
     step_b1y3_av -> SetPointError( j , 0.0 , num_vtx_b1y3_err[j] );
     step_b1y4_av -> SetPoint(j, nomPos_av_b1y4[j], num_vtx_b1y4_plots[j]);
     step_b1y4_av -> SetPointError( j , 0.0 , num_vtx_b1y4_err[j] );
     step_b1y5_av -> SetPoint(j, nomPos_av_b1y5[j], num_vtx_b1y5_plots[j]);
     step_b1y5_av -> SetPointError( j , 0.0 , num_vtx_b1y5_err[j] );
     step_b2y1_av -> SetPoint(j, nomPos_av_b2y1[j], num_vtx_b2y1_plots[j]);
     step_b2y1_av -> SetPointError( j , 0.0 , num_vtx_b2y1_err[j] );
     step_b2y2_av -> SetPoint(j, nomPos_av_b2y2[j], num_vtx_b2y2_plots[j]);
     step_b2y2_av -> SetPointError( j , 0.0 , num_vtx_b2y2_err[j] );
     step_b2y3_av -> SetPoint(j, nomPos_av_b2y3[j], num_vtx_b2y3_plots[j]);
     step_b2y3_av -> SetPointError( j , 0.0 , num_vtx_b2y3_err[j] );
     step_b2y4_av -> SetPoint(j, nomPos_av_b2y4[j], num_vtx_b2y4_plots[j]);
     step_b2y4_av -> SetPointError( j , 0.0 , num_vtx_b2y4_err[j] );
     step_b2y5_av -> SetPoint(j, nomPos_av_b2y5[j], num_vtx_b2y5_plots[j]);
     step_b2y5_av -> SetPointError( j , 0.0 , num_vtx_b2y5_err[j] );
     step_b1x1_av -> SetPoint(j, nomPos_av_b1x1[j], num_vtx_b1x1_plots[j]);
     step_b1x1_av -> SetPointError( j , 0.0 , num_vtx_b1x1_err[j] );
     step_b1x2_av -> SetPoint(j, nomPos_av_b1x2[j], num_vtx_b1x2_plots[j]);
     step_b1x2_av -> SetPointError( j , 0.0 , num_vtx_b1x2_err[j] );
     step_b1x3_av -> SetPoint(j, nomPos_av_b1x3[j], num_vtx_b1x3_plots[j]);
     step_b1x3_av -> SetPointError( j , 0.0 , num_vtx_b1x3_err[j] );
     step_b1x4_av -> SetPoint(j, nomPos_av_b1x4[j], num_vtx_b1x4_plots[j]);
     step_b1x4_av -> SetPointError( j , 0.0 , num_vtx_b1x4_err[j] );
     step_b1x5_av -> SetPoint(j, nomPos_av_b1x5[j], num_vtx_b1x5_plots[j]);
     step_b1x5_av -> SetPointError( j , 0.0 , num_vtx_b1x5_err[j] );
     step_b2x1_av -> SetPoint(j, nomPos_av_b2x1[j], num_vtx_b2x1_plots[j]);
     step_b2x1_av -> SetPointError( j , 0.0 , num_vtx_b2x1_err[j] );
     step_b2x2_av -> SetPoint(j, nomPos_av_b2x2[j], num_vtx_b2x2_plots[j]);
     step_b2x2_av -> SetPointError( j , 0.0 , num_vtx_b2x2_err[j] );
     step_b2x3_av -> SetPoint(j, nomPos_av_b2x3[j], num_vtx_b2x3_plots[j]);
     step_b2x3_av -> SetPointError( j , 0.0 , num_vtx_b2x3_err[j] );
     step_b2x4_av -> SetPoint(j, nomPos_av_b2x4[j], num_vtx_b2x4_plots[j]);
     step_b2x4_av -> SetPointError( j , 0.0 , num_vtx_b2x4_err[j] );
     step_b2x5_av -> SetPoint(j, nomPos_av_b2x5[j], num_vtx_b2x5_plots[j]);
     step_b2x5_av -> SetPointError( j , 0.0 , num_vtx_b2x5_err[j] );
     
     }
     
  TCanvas* c_av_b1y1 = new TCanvas("c_av_b1y1","av_step_B1Y1",700,500); 
   step_b1y1_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b1y1_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y1_av-> SetTitle("av_step_B1Y1");
   step_b1y1_av->SetMarkerStyle(21);
   step_b1y1_av->SetMarkerSize(1.5);
   c_av_b1y1 -> Divide(1,2);
   c_av_b1y1 -> cd(1);
   c_av_b1y1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y1_av->Draw("ap");
   step_b1y1_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y1_av -> Write();

   TF1 *fit_func_av_b1y1 = step_b1y1_av->GetFunction("gaus");
   double gauss_mean_av_b1y1 =  fit_func_av_b1y1->GetParameter(1);
   double gauss_err_av_b1y1 =  fit_func_av_b1y1->GetParError(1);   
   float fit_value_av_b1y1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b1y1[i] = fit_func_av_b1y1 -> Eval(nomPos_av_b1y1[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_B1Y1_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b1y1_av_residual -> SetPoint(i, nomPos_av_b1y1[i], num_vtx_b1y1_plots[i] - fit_value_av_b1y1[i] );
    step_b1y1_av_residual -> SetPointError(i, 0.0,  num_vtx_b1y1_err[i]);
    }
  c_av_b1y1 -> cd(2);
  c_av_b1y1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y1_av_residual -> Draw("PA");
  step_b1y1_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y1_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y1_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y1_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y1_av_residual -> SetMarkerStyle(21);
  step_b1y1_av_residual -> SetMarkerSize(1.5);
  step_b1y1_av_residual -> SetTitle("");
  step_b1y1_av_residual -> Write();
  

  TLine *line_av_b1y1 = new TLine(c_av_b1y1 -> cd(2) -> GetUxmin(), 0.0, c_av_b1y1 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b1y1 -> SetLineColor(14);
  line_av_b1y1 -> SetLineStyle(3);
  line_av_b1y1 -> Draw();
  c_av_b1y1 -> Update(); 
  //c_av_b1y1 -> SaveAs("av_step_B1Y1.root");
  c_av_b1y1 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");
  

  TCanvas* c_av_b1y2 = new TCanvas("c_av_b1y2","av_step_b1y2",700,500); 
   step_b1y2_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b1y2_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y2_av-> SetTitle("av_step_B1Y2");
   step_b1y2_av->SetMarkerStyle(21);
   step_b1y2_av->SetMarkerSize(1.5);
   c_av_b1y2 -> Divide(1,2);
   c_av_b1y2 -> cd(1);
   c_av_b1y2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y2_av->Draw("ap");
   step_b1y2_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y2_av -> Write();

   TF1 *fit_func_av_b1y2 = step_b1y2_av->GetFunction("gaus");
   double gauss_mean_av_b1y2 =  fit_func_av_b1y2->GetParameter(1);
   double gauss_err_av_b1y2 =  fit_func_av_b1y2->GetParError(1);   
   float fit_value_av_b1y2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b1y2[i] = fit_func_av_b1y2 -> Eval(nomPos_av_b1y2[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b1y2_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b1y2_av_residual -> SetPoint(i, nomPos_av_b1y2[i], num_vtx_b1y2_plots[i] - fit_value_av_b1y2[i] );
    step_b1y2_av_residual -> SetPointError(i, 0.0,  num_vtx_b1y2_err[i]);
    }
  c_av_b1y2 -> cd(2);
  c_av_b1y2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y2_av_residual -> Draw("PA");
  step_b1y2_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y2_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y2_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y2_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y2_av_residual -> SetMarkerStyle(21);
  step_b1y2_av_residual -> SetMarkerSize(1.5);
  step_b1y2_av_residual -> SetTitle("");
  step_b1y2_av_residual -> Write();
  

  TLine *line_av_b1y2 = new TLine(c_av_b1y2 -> cd(2) -> GetUxmin(), 0.0, c_av_b1y2 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b1y2 -> SetLineColor(14);
  line_av_b1y2 -> SetLineStyle(3);
  line_av_b1y2 -> Draw();
  c_av_b1y2 -> Update(); 
  //c_av_b1y2 -> SaveAs("av_step_b1y2.root");
  c_av_b1y2 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  
   TCanvas* c_av_b1y3 = new TCanvas("c_av_b1y3","av_step_b1y3",700,500); 
   step_b1y3_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b1y3_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y3_av-> SetTitle("av_step_B1Y3");
   step_b1y3_av->SetMarkerStyle(21);
   step_b1y3_av->SetMarkerSize(1.5);
   c_av_b1y3 -> Divide(1,2);
   c_av_b1y3 -> cd(1);
   c_av_b1y3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y3_av->Draw("ap");
   step_b1y3_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y3_av -> Write();

   TF1 *fit_func_av_b1y3 = step_b1y3_av->GetFunction("gaus");
   double gauss_mean_av_b1y3 =  fit_func_av_b1y3->GetParameter(1);
   double gauss_err_av_b1y3 =  fit_func_av_b1y3->GetParError(1);   
   float fit_value_av_b1y3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b1y3[i] = fit_func_av_b1y3 -> Eval(nomPos_av_b1y3[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b1y3_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b1y3_av_residual -> SetPoint(i, nomPos_av_b1y3[i], num_vtx_b1y3_plots[i] - fit_value_av_b1y3[i] );
    step_b1y3_av_residual -> SetPointError(i, 0.0,  num_vtx_b1y3_err[i]);
    }
  c_av_b1y3 -> cd(2);
  c_av_b1y3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y3_av_residual -> Draw("PA");
  step_b1y3_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y3_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y3_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y3_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y3_av_residual -> SetMarkerStyle(21);
  step_b1y3_av_residual -> SetMarkerSize(1.5);
  step_b1y3_av_residual -> SetTitle("");
  step_b1y3_av_residual -> Write();
  

  TLine *line_av_b1y3 = new TLine(c_av_b1y3 -> cd(2) -> GetUxmin(), 0.0, c_av_b1y3 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b1y3 -> SetLineColor(14);
  line_av_b1y3 -> SetLineStyle(3);
  line_av_b1y3 -> Draw();
  c_av_b1y3 -> Update(); 
  //c_av_b1y3 -> SaveAs("av_step_b1y3.root");
  c_av_b1y3 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b1y4 = new TCanvas("c_av_b1y4","av_step_b1y4",700,500); 
   step_b1y4_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b1y4_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y4_av-> SetTitle("av_step_B1Y4");
   step_b1y4_av->SetMarkerStyle(21);
   step_b1y4_av->SetMarkerSize(1.5);
   c_av_b1y4 -> Divide(1,2);
   c_av_b1y4 -> cd(1);
   c_av_b1y4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y4_av->Draw("ap");
   step_b1y4_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y4_av -> Write();

   TF1 *fit_func_av_b1y4 = step_b1y4_av->GetFunction("gaus");
   double gauss_mean_av_b1y4 =  fit_func_av_b1y4->GetParameter(1);
   double gauss_err_av_b1y4 =  fit_func_av_b1y4->GetParError(1);   
   float fit_value_av_b1y4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b1y4[i] = fit_func_av_b1y4 -> Eval(nomPos_av_b1y4[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b1y4_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b1y4_av_residual -> SetPoint(i, nomPos_av_b1y4[i], num_vtx_b1y4_plots[i] - fit_value_av_b1y4[i] );
    step_b1y4_av_residual -> SetPointError(i, 0.0,  num_vtx_b1y4_err[i]);
    }
  c_av_b1y4 -> cd(2);
  c_av_b1y4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y4_av_residual -> Draw("PA");
  step_b1y4_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y4_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y4_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y4_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y4_av_residual -> SetMarkerStyle(21);
  step_b1y4_av_residual -> SetMarkerSize(1.5);
  step_b1y4_av_residual -> SetTitle("");
  step_b1y4_av_residual -> Write();
  

  TLine *line_av_b1y4 = new TLine(c_av_b1y4 -> cd(2) -> GetUxmin(), 0.0, c_av_b1y4 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b1y4 -> SetLineColor(14);
  line_av_b1y4 -> SetLineStyle(3);
  line_av_b1y4 -> Draw();
  c_av_b1y4 -> Update(); 
  //c_av_b1y4 -> SaveAs("av_step_b1y4.root");
  c_av_b1y4 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b1y5 = new TCanvas("c_av_b1y5","av_step_b1y5",700,500); 
   step_b1y5_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b1y5_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y5_av-> SetTitle("av_step_B1Y5");
   step_b1y5_av->SetMarkerStyle(21);
   step_b1y5_av->SetMarkerSize(1.5);
   c_av_b1y5 -> Divide(1,2);
   c_av_b1y5 -> cd(1);
   c_av_b1y5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y5_av->Draw("ap");
   step_b1y5_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y5_av -> Write();

   TF1 *fit_func_av_b1y5 = step_b1y5_av->GetFunction("gaus");
   double gauss_mean_av_b1y5 =  fit_func_av_b1y5->GetParameter(1);
   double gauss_err_av_b1y5 =  fit_func_av_b1y5->GetParError(1);   
   float fit_value_av_b1y5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b1y5[i] = fit_func_av_b1y5 -> Eval(nomPos_av_b1y5[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b1y5_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b1y5_av_residual -> SetPoint(i, nomPos_av_b1y5[i], num_vtx_b1y5_plots[i] - fit_value_av_b1y5[i] );
    step_b1y5_av_residual -> SetPointError(i, 0.0,  num_vtx_b1y5_err[i]);
    }
  c_av_b1y5 -> cd(2);
  c_av_b1y5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y5_av_residual -> Draw("PA");
  step_b1y5_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y5_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y5_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y5_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y5_av_residual -> SetMarkerStyle(21);
  step_b1y5_av_residual -> SetMarkerSize(1.5);
  step_b1y5_av_residual -> SetTitle("");
  step_b1y5_av_residual -> Write();
  

  TLine *line_av_b1y5 = new TLine(c_av_b1y5 -> cd(2) -> GetUxmin(), 0.0, c_av_b1y5 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b1y5 -> SetLineColor(14);
  line_av_b1y5 -> SetLineStyle(3);
  line_av_b1y5 -> Draw();
  c_av_b1y5 -> Update(); 
  //c_av_b1y5 -> SaveAs("av_step_b1y5.root");
  c_av_b1y5 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b1x1 = new TCanvas("c_av_b1x1","av_step_b1x1",700,500); 
   step_b1x1_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b1x1_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x1_av-> SetTitle("av_step_B1X1");
   step_b1x1_av->SetMarkerStyle(21);
   step_b1x1_av->SetMarkerSize(1.5);
   c_av_b1x1 -> Divide(1,2);
   c_av_b1x1 -> cd(1);
   c_av_b1x1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x1_av->Draw("ap");
   step_b1x1_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x1_av -> Write();

   TF1 *fit_func_av_b1x1 = step_b1x1_av->GetFunction("gaus");
   double gauss_mean_av_b1x1 =  fit_func_av_b1x1->GetParameter(1);
   double gauss_err_av_b1x1 =  fit_func_av_b1x1->GetParError(1);   
   float fit_value_av_b1x1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b1x1[i] = fit_func_av_b1x1 -> Eval(nomPos_av_b1x1[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b1x1_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b1x1_av_residual -> SetPoint(i, nomPos_av_b1x1[i], num_vtx_b1x1_plots[i] - fit_value_av_b1x1[i] );
    step_b1x1_av_residual -> SetPointError(i, 0.0,  num_vtx_b1x1_err[i]);
    }
  c_av_b1x1 -> cd(2);
  c_av_b1x1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x1_av_residual -> Draw("PA");
  step_b1x1_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x1_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x1_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x1_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x1_av_residual -> SetMarkerStyle(21);
  step_b1x1_av_residual -> SetMarkerSize(1.5);
  step_b1x1_av_residual -> SetTitle("");
  step_b1x1_av_residual -> Write();
  

  TLine *line_av_b1x1 = new TLine(c_av_b1x1 -> cd(2) -> GetUxmin(), 0.0, c_av_b1x1 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b1x1 -> SetLineColor(14);
  line_av_b1x1 -> SetLineStyle(3);
  line_av_b1x1 -> Draw();
  c_av_b1x1 -> Update(); 
  //c_av_b1x1 -> SaveAs("av_step_b1x1.root");
  c_av_b1x1 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b1x2 = new TCanvas("c_av_b1x2","av_step_b1x2",700,500); 
   step_b1x2_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b1x2_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x2_av-> SetTitle("av_step_B1X2");
   step_b1x2_av->SetMarkerStyle(21);
   step_b1x2_av->SetMarkerSize(1.5);
   c_av_b1x2 -> Divide(1,2);
   c_av_b1x2 -> cd(1);
   c_av_b1x2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x2_av->Draw("ap");
   step_b1x2_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x2_av -> Write();

   TF1 *fit_func_av_b1x2 = step_b1x2_av->GetFunction("gaus");
   double gauss_mean_av_b1x2 =  fit_func_av_b1x2->GetParameter(1);
   double gauss_err_av_b1x2 =  fit_func_av_b1x2->GetParError(1);   
   float fit_value_av_b1x2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b1x2[i] = fit_func_av_b1x2 -> Eval(nomPos_av_b1x2[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b1x2_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b1x2_av_residual -> SetPoint(i, nomPos_av_b1x2[i], num_vtx_b1x2_plots[i] - fit_value_av_b1x2[i] );
    step_b1x2_av_residual -> SetPointError(i, 0.0,  num_vtx_b1x2_err[i]);
    }
  c_av_b1x2 -> cd(2);
  c_av_b1x2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x2_av_residual -> Draw("PA");
  step_b1x2_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x2_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x2_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x2_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x2_av_residual -> SetMarkerStyle(21);
  step_b1x2_av_residual -> SetMarkerSize(1.5);
  step_b1x2_av_residual -> SetTitle("");
  step_b1x2_av_residual -> Write();
  

  TLine *line_av_b1x2 = new TLine(c_av_b1x2 -> cd(2) -> GetUxmin(), 0.0, c_av_b1x2 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b1x2 -> SetLineColor(14);
  line_av_b1x2 -> SetLineStyle(3);
  line_av_b1x2 -> Draw();
  c_av_b1x2 -> Update(); 
  //c_av_b1x2 -> SaveAs("av_step_b1x2.root");
  c_av_b1x2 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b1x3 = new TCanvas("c_av_b1x3","av_step_b1x3",700,500); 
   step_b1x3_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b1x3_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x3_av-> SetTitle("av_step_B1X3");
   step_b1x3_av->SetMarkerStyle(21);
   step_b1x3_av->SetMarkerSize(1.5);
   c_av_b1x3 -> Divide(1,2);
   c_av_b1x3 -> cd(1);
   c_av_b1x3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x3_av->Draw("ap");
   step_b1x3_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x3_av -> Write();

   TF1 *fit_func_av_b1x3 = step_b1x3_av->GetFunction("gaus");
   double gauss_mean_av_b1x3 =  fit_func_av_b1x3->GetParameter(1);
   double gauss_err_av_b1x3 =  fit_func_av_b1x3->GetParError(1);   
   float fit_value_av_b1x3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b1x3[i] = fit_func_av_b1x3 -> Eval(nomPos_av_b1x3[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b1x3_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b1x3_av_residual -> SetPoint(i, nomPos_av_b1x3[i], num_vtx_b1x3_plots[i] - fit_value_av_b1x3[i] );
    step_b1x3_av_residual -> SetPointError(i, 0.0,  num_vtx_b1x3_err[i]);
    }
  c_av_b1x3 -> cd(2);
  c_av_b1x3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x3_av_residual -> Draw("PA");
  step_b1x3_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x3_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x3_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x3_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x3_av_residual -> SetMarkerStyle(21);
  step_b1x3_av_residual -> SetMarkerSize(1.5);
  step_b1x3_av_residual -> SetTitle("");
  step_b1x3_av_residual -> Write();
  

  TLine *line_av_b1x3 = new TLine(c_av_b1x3 -> cd(2) -> GetUxmin(), 0.0, c_av_b1x3 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b1x3 -> SetLineColor(14);
  line_av_b1x3 -> SetLineStyle(3);
  line_av_b1x3 -> Draw();
  c_av_b1x3 -> Update(); 
  //c_av_b1x3 -> SaveAs("av_step_b1x3.root");
  c_av_b1x3 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b1x4 = new TCanvas("c_av_b1x4","av_step_b1x4",700,500); 
   step_b1x4_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b1x4_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x4_av-> SetTitle("av_step_B1X4");
   step_b1x4_av->SetMarkerStyle(21);
   step_b1x4_av->SetMarkerSize(1.5);
   c_av_b1x4 -> Divide(1,2);
   c_av_b1x4 -> cd(1);
   c_av_b1x4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x4_av->Draw("ap");
   step_b1x4_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x4_av -> Write();

   TF1 *fit_func_av_b1x4 = step_b1x4_av->GetFunction("gaus");
   double gauss_mean_av_b1x4 =  fit_func_av_b1x4->GetParameter(1);
   double gauss_err_av_b1x4 =  fit_func_av_b1x4->GetParError(1);   
   float fit_value_av_b1x4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b1x4[i] = fit_func_av_b1x4 -> Eval(nomPos_av_b1x4[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b1x4_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b1x4_av_residual -> SetPoint(i, nomPos_av_b1x4[i], num_vtx_b1x4_plots[i] - fit_value_av_b1x4[i] );
    step_b1x4_av_residual -> SetPointError(i, 0.0,  num_vtx_b1x4_err[i]);
    }
  c_av_b1x4 -> cd(2);
  c_av_b1x4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x4_av_residual -> Draw("PA");
  step_b1x4_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x4_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x4_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x4_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x4_av_residual -> SetMarkerStyle(21);
  step_b1x4_av_residual -> SetMarkerSize(1.5);
  step_b1x4_av_residual -> SetTitle("");
  step_b1x4_av_residual -> Write();
  

  TLine *line_av_b1x4 = new TLine(c_av_b1x4 -> cd(2) -> GetUxmin(), 0.0, c_av_b1x4 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b1x4 -> SetLineColor(14);
  line_av_b1x4 -> SetLineStyle(3);
  line_av_b1x4 -> Draw();
  c_av_b1x4 -> Update(); 
  //c_av_b1x4 -> SaveAs("av_step_b1x4.root");
  c_av_b1x4 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b1x5 = new TCanvas("c_av_b1x5","av_step_b1x5",700,500); 
   step_b1x5_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b1x5_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x5_av-> SetTitle("av_step_B1X5");
   step_b1x5_av->SetMarkerStyle(21);
   step_b1x5_av->SetMarkerSize(1.5);
   c_av_b1x5 -> Divide(1,2);
   c_av_b1x5 -> cd(1);
   c_av_b1x5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x5_av->Draw("ap");
   step_b1x5_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x5_av -> Write();

   TF1 *fit_func_av_b1x5 = step_b1x5_av->GetFunction("gaus");
   double gauss_mean_av_b1x5 =  fit_func_av_b1x5->GetParameter(1);
   double gauss_err_av_b1x5 =  fit_func_av_b1x5->GetParError(1);   
   float fit_value_av_b1x5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b1x5[i] = fit_func_av_b1x5 -> Eval(nomPos_av_b1x5[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b1x5_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b1x5_av_residual -> SetPoint(i, nomPos_av_b1x5[i], num_vtx_b1x5_plots[i] - fit_value_av_b1x5[i] );
    step_b1x5_av_residual -> SetPointError(i, 0.0,  num_vtx_b1x5_err[i]);
    }
  c_av_b1x5 -> cd(2);
  c_av_b1x5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x5_av_residual -> Draw("PA");
  step_b1x5_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x5_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x5_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x5_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x5_av_residual -> SetMarkerStyle(21);
  step_b1x5_av_residual -> SetMarkerSize(1.5);
  step_b1x5_av_residual -> SetTitle("");
  step_b1x5_av_residual -> Write();
  

  TLine *line_av_b1x5 = new TLine(c_av_b1x5 -> cd(2) -> GetUxmin(), 0.0, c_av_b1x5 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b1x5 -> SetLineColor(14);
  line_av_b1x5 -> SetLineStyle(3);
  line_av_b1x5 -> Draw();
  c_av_b1x5 -> Update(); 
  //c_av_b1x5 -> SaveAs("av_step_b1x5.root");
  c_av_b1x5 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  

  TCanvas* c_av_b2x1 = new TCanvas("c_av_b2x1","av_step_b2x1",700,500); 
   step_b2x1_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b2x1_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x1_av-> SetTitle("av_step_B2X1");
   step_b2x1_av->SetMarkerStyle(21);
   step_b2x1_av->SetMarkerSize(1.5);
   c_av_b2x1 -> Divide(1,2);
   c_av_b2x1 -> cd(1);
   c_av_b2x1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x1_av->Draw("ap");
   step_b2x1_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x1_av -> Write();

   TF1 *fit_func_av_b2x1 = step_b2x1_av->GetFunction("gaus");
   double gauss_mean_av_b2x1 =  fit_func_av_b2x1->GetParameter(1);
   double gauss_err_av_b2x1 =  fit_func_av_b2x1->GetParError(1);   
   float fit_value_av_b2x1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b2x1[i] = fit_func_av_b2x1 -> Eval(nomPos_av_b2x1[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b2x1_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b2x1_av_residual -> SetPoint(i, nomPos_av_b2x1[i], num_vtx_b2x1_plots[i] - fit_value_av_b2x1[i] );
    step_b2x1_av_residual -> SetPointError(i, 0.0,  num_vtx_b2x1_err[i]);
    }
  c_av_b2x1 -> cd(2);
  c_av_b2x1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x1_av_residual -> Draw("PA");
  step_b2x1_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x1_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x1_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x1_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x1_av_residual -> SetMarkerStyle(21);
  step_b2x1_av_residual -> SetMarkerSize(1.5);
  step_b2x1_av_residual -> SetTitle("");
  step_b2x1_av_residual -> Write();
  

  TLine *line_av_b2x1 = new TLine(c_av_b2x1 -> cd(2) -> GetUxmin(), 0.0, c_av_b2x1 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b2x1 -> SetLineColor(14);
  line_av_b2x1 -> SetLineStyle(3);
  line_av_b2x1 -> Draw();
  c_av_b2x1 -> Update(); 
  //c_av_b2x1 -> SaveAs("av_step_b2x1.root");
  c_av_b2x1 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b2x2 = new TCanvas("c_av_b2x2","av_step_b2x2",700,500); 
   step_b2x2_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b2x2_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x2_av-> SetTitle("av_step_B2X2");
   step_b2x2_av->SetMarkerStyle(21);
   step_b2x2_av->SetMarkerSize(1.5);
   c_av_b2x2 -> Divide(1,2);
   c_av_b2x2 -> cd(1);
   c_av_b2x2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x2_av->Draw("ap");
   step_b2x2_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x2_av -> Write();

   TF1 *fit_func_av_b2x2 = step_b2x2_av->GetFunction("gaus");
   double gauss_mean_av_b2x2 =  fit_func_av_b2x2->GetParameter(1);
   double gauss_err_av_b2x2 =  fit_func_av_b2x2->GetParError(1);   
   float fit_value_av_b2x2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b2x2[i] = fit_func_av_b2x2 -> Eval(nomPos_av_b2x2[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b2x2_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b2x2_av_residual -> SetPoint(i, nomPos_av_b2x2[i], num_vtx_b2x2_plots[i] - fit_value_av_b2x2[i] );
    step_b2x2_av_residual -> SetPointError(i, 0.0,  num_vtx_b2x2_err[i]);
    }
  c_av_b2x2 -> cd(2);
  c_av_b2x2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x2_av_residual -> Draw("PA");
  step_b2x2_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x2_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x2_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x2_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x2_av_residual -> SetMarkerStyle(21);
  step_b2x2_av_residual -> SetMarkerSize(1.5);
  step_b2x2_av_residual -> SetTitle("");
  step_b2x2_av_residual -> Write();
  

  TLine *line_av_b2x2 = new TLine(c_av_b2x2 -> cd(2) -> GetUxmin(), 0.0, c_av_b2x2 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b2x2 -> SetLineColor(14);
  line_av_b2x2 -> SetLineStyle(3);
  line_av_b2x2 -> Draw();
  c_av_b2x2 -> Update(); 
  //c_av_b2x2 -> SaveAs("av_step_b2x2.root");
  c_av_b2x2 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b2x3 = new TCanvas("c_av_b2x3","av_step_b2x3",700,500); 
   step_b2x3_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b2x3_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x3_av-> SetTitle("av_step_B2X3");
   step_b2x3_av->SetMarkerStyle(21);
   step_b2x3_av->SetMarkerSize(1.5);
   c_av_b2x3 -> Divide(1,2);
   c_av_b2x3 -> cd(1);
   c_av_b2x3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x3_av->Draw("ap");
   step_b2x3_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x3_av -> Write();

   TF1 *fit_func_av_b2x3 = step_b2x3_av->GetFunction("gaus");
   double gauss_mean_av_b2x3 =  fit_func_av_b2x3->GetParameter(1);
   double gauss_err_av_b2x3 =  fit_func_av_b2x3->GetParError(1);   
   float fit_value_av_b2x3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b2x3[i] = fit_func_av_b2x3 -> Eval(nomPos_av_b2x3[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b2x3_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b2x3_av_residual -> SetPoint(i, nomPos_av_b2x3[i], num_vtx_b2x3_plots[i] - fit_value_av_b2x3[i] );
    step_b2x3_av_residual -> SetPointError(i, 0.0,  num_vtx_b2x3_err[i]);
    }
  c_av_b2x3 -> cd(2);
  c_av_b2x3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x3_av_residual -> Draw("PA");
  step_b2x3_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x3_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x3_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x3_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x3_av_residual -> SetMarkerStyle(21);
  step_b2x3_av_residual -> SetMarkerSize(1.5);
  step_b2x3_av_residual -> SetTitle("");
  step_b2x3_av_residual -> Write();
  

  TLine *line_av_b2x3 = new TLine(c_av_b2x3 -> cd(2) -> GetUxmin(), 0.0, c_av_b2x3 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b2x3 -> SetLineColor(14);
  line_av_b2x3 -> SetLineStyle(3);
  line_av_b2x3 -> Draw();
  c_av_b2x3 -> Update(); 
  //c_av_b2x3 -> SaveAs("av_step_b2x3.root");
  c_av_b2x3 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b2x4 = new TCanvas("c_av_b2x4","av_step_b2x4",700,500); 
   step_b2x4_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b2x4_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x4_av-> SetTitle("av_step_B2X4");
   step_b2x4_av->SetMarkerStyle(21);
   step_b2x4_av->SetMarkerSize(1.5);
   c_av_b2x4 -> Divide(1,2);
   c_av_b2x4 -> cd(1);
   c_av_b2x4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x4_av->Draw("ap");
   step_b2x4_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x4_av -> Write();

   TF1 *fit_func_av_b2x4 = step_b2x4_av->GetFunction("gaus");
   double gauss_mean_av_b2x4 =  fit_func_av_b2x4->GetParameter(1);
   double gauss_err_av_b2x4 =  fit_func_av_b2x4->GetParError(1);   
   float fit_value_av_b2x4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b2x4[i] = fit_func_av_b2x4 -> Eval(nomPos_av_b2x4[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b2x4_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b2x4_av_residual -> SetPoint(i, nomPos_av_b2x4[i], num_vtx_b2x4_plots[i] - fit_value_av_b2x4[i] );
    step_b2x4_av_residual -> SetPointError(i, 0.0,  num_vtx_b2x4_err[i]);
    }
  c_av_b2x4 -> cd(2);
  c_av_b2x4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x4_av_residual -> Draw("PA");
  step_b2x4_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x4_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x4_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x4_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x4_av_residual -> SetMarkerStyle(21);
  step_b2x4_av_residual -> SetMarkerSize(1.5);
  step_b2x4_av_residual -> SetTitle("");
  step_b2x4_av_residual -> Write();
  

  TLine *line_av_b2x4 = new TLine(c_av_b2x4 -> cd(2) -> GetUxmin(), 0.0, c_av_b2x4 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b2x4 -> SetLineColor(14);
  line_av_b2x4 -> SetLineStyle(3);
  line_av_b2x4 -> Draw();
  c_av_b2x4 -> Update(); 
  //c_av_b2x4 -> SaveAs("av_step_b2x4.root");
  c_av_b2x4 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b2x5 = new TCanvas("c_av_b2x5","av_step_b2x5",700,500); 
   step_b2x5_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b2x5_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x5_av-> SetTitle("av_step_B2X5");
   step_b2x5_av->SetMarkerStyle(21);
   step_b2x5_av->SetMarkerSize(1.5);
   c_av_b2x5 -> Divide(1,2);
   c_av_b2x5 -> cd(1);
   c_av_b2x5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x5_av->Draw("ap");
   step_b2x5_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x5_av -> Write();

   TF1 *fit_func_av_b2x5 = step_b2x5_av->GetFunction("gaus");
   double gauss_mean_av_b2x5 =  fit_func_av_b2x5->GetParameter(1);
   double gauss_err_av_b2x5 =  fit_func_av_b2x5->GetParError(1);   
   float fit_value_av_b2x5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b2x5[i] = fit_func_av_b2x5 -> Eval(nomPos_av_b2x5[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b2x5_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b2x5_av_residual -> SetPoint(i, nomPos_av_b2x5[i], num_vtx_b2x5_plots[i] - fit_value_av_b2x5[i] );
    step_b2x5_av_residual -> SetPointError(i, 0.0,  num_vtx_b2x5_err[i]);
    }
  c_av_b2x5 -> cd(2);
  c_av_b2x5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x5_av_residual -> Draw("PA");
  step_b2x5_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x5_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x5_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x5_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x5_av_residual -> SetMarkerStyle(21);
  step_b2x5_av_residual -> SetMarkerSize(1.5);
  step_b2x5_av_residual -> SetTitle("");
  step_b2x5_av_residual -> Write();
  

  TLine *line_av_b2x5 = new TLine(c_av_b2x5 -> cd(2) -> GetUxmin(), 0.0, c_av_b2x5 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b2x5 -> SetLineColor(14);
  line_av_b2x5 -> SetLineStyle(3);
  line_av_b2x5 -> Draw();
  c_av_b2x5 -> Update(); 
  //c_av_b2x5 -> SaveAs("av_step_b2x5.root");
  c_av_b2x5 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");
  
   //ROOT::Math::MinimizerOptions::SetDefaultMaxFunctionCalls(10000);
   //ROOT::Math::MinimizerOptions::SetDefaultTolerance(1);

   TCanvas* c_av_b2y1 = new TCanvas("c_av_b2y1","av_step_b2y1",700,500); 
   step_b2y1_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b2y1_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y1_av-> SetTitle("av_step_B2Y1");
   step_b2y1_av->SetMarkerStyle(21);
   step_b2y1_av->SetMarkerSize(1.5);
   c_av_b2y1 -> Divide(1,2);
   c_av_b2y1 -> cd(1);
   c_av_b2y1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y1_av->Draw("ap");
   step_b2y1_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y1_av -> Write();

   TF1 *fit_func_av_b2y1 = step_b2y1_av->GetFunction("gaus");
   double gauss_mean_av_b2y1 =  fit_func_av_b2y1->GetParameter(1);
   double gauss_err_av_b2y1 =  fit_func_av_b2y1->GetParError(1);   
   float fit_value_av_b2y1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b2y1[i] = fit_func_av_b2y1 -> Eval(nomPos_av_b2y1[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b2y1_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b2y1_av_residual -> SetPoint(i, nomPos_av_b2y1[i], num_vtx_b2y1_plots[i] - fit_value_av_b2y1[i] );
    step_b2y1_av_residual -> SetPointError(i, 0.0,  num_vtx_b2y1_err[i]);
    }
  c_av_b2y1 -> cd(2);
  c_av_b2y1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y1_av_residual -> Draw("PA");
  step_b2y1_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y1_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y1_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y1_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y1_av_residual -> SetMarkerStyle(21);
  step_b2y1_av_residual -> SetMarkerSize(1.5);
  step_b2y1_av_residual -> SetTitle("");
  step_b2y1_av_residual -> Write();
  

  TLine *line_av_b2y1 = new TLine(c_av_b2y1 -> cd(2) -> GetUxmin(), 0.0, c_av_b2y1 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b2y1 -> SetLineColor(14);
  line_av_b2y1 -> SetLineStyle(3);
  line_av_b2y1 -> Draw();
  c_av_b2y1 -> Update(); 
  //c_av_b2y1 -> SaveAs("av_step_b2y1.root");
  c_av_b2y1 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b2y2 = new TCanvas("c_av_b2y2","av_step_b2y2",700,500); 
   step_b2y2_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b2y2_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y2_av-> SetTitle("av_step_B2Y2");
   step_b2y2_av->SetMarkerStyle(21);
   step_b2y2_av->SetMarkerSize(1.5);
   c_av_b2y2 -> Divide(1,2);
   c_av_b2y2 -> cd(1);
   c_av_b2y2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y2_av->Draw("ap");
   step_b2y2_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y2_av -> Write();

   TF1 *fit_func_av_b2y2 = step_b2y2_av->GetFunction("gaus");
   double gauss_mean_av_b2y2 =  fit_func_av_b2y2->GetParameter(1);
   double gauss_err_av_b2y2 =  fit_func_av_b2y2->GetParError(1);   
   float fit_value_av_b2y2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b2y2[i] = fit_func_av_b2y2 -> Eval(nomPos_av_b2y2[i]);
    cout << "fit values b2y2 av" << i << fit_value_av_b2y2[i] << endl;
    //step_b2y2_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b2y2_av_residual -> SetPoint(i, nomPos_av_b2y2[i], num_vtx_b2y2_plots[i] - fit_value_av_b2y2[i] );
    step_b2y2_av_residual -> SetPointError(i, 0.0,  num_vtx_b2y2_err[i]);
    }
  c_av_b2y2 -> cd(2);
  c_av_b2y2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y2_av_residual -> Draw("PA");
  step_b2y2_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y2_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y2_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y2_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y2_av_residual -> SetMarkerStyle(21);
  step_b2y2_av_residual -> SetMarkerSize(1.5);
  step_b2y2_av_residual -> SetTitle("");
  step_b2y2_av_residual -> Write();

  TLine *line_av_b2y2 = new TLine(c_av_b2y2 -> cd(2) -> GetUxmin(), 0.0, c_av_b2y2 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b2y2 -> SetLineColor(14);
  line_av_b2y2 -> SetLineStyle(3);
  line_av_b2y2 -> Draw();
  c_av_b2y2 -> Update(); 
  //c_av_b2y2 -> SaveAs("av_step_b2y2.root");
  c_av_b2y2 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  TCanvas* c_av_b2y3 = new TCanvas("c_av_b2y3","av_step_b2y3",700,500); 
   step_b2y3_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b2y3_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y3_av-> SetTitle("av_step_B2Y3");
   step_b2y3_av->SetMarkerStyle(21);
   step_b2y3_av->SetMarkerSize(1.5);
   c_av_b2y3 -> Divide(1,2);
   c_av_b2y3 -> cd(1);
   c_av_b2y3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y3_av->Draw("ap");
   step_b2y3_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y3_av -> Write();

   TF1 *fit_func_av_b2y3 = step_b2y3_av->GetFunction("gaus");
   double gauss_mean_av_b2y3 =  fit_func_av_b2y3->GetParameter(1);
   double gauss_err_av_b2y3 =  fit_func_av_b2y3->GetParError(1);   
   float fit_value_av_b2y3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b2y3[i] = fit_func_av_b2y3 -> Eval(nomPos_av_b2y3[i]);
    cout << "fit values b2y3 av" << i << fit_value_av_b2y3[i] << endl;
    //step_b2y3_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b2y3_av_residual -> SetPoint(i, nomPos_av_b2y3[i], num_vtx_b2y3_plots[i] - fit_value_av_b2y3[i] );
    step_b2y3_av_residual -> SetPointError(i, 0.0,  num_vtx_b2y3_err[i]);
    }
  
  c_av_b2y3 -> cd(2);
  c_av_b2y3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y3_av_residual -> Draw("PA");
  step_b2y3_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y3_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y3_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y3_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y3_av_residual -> SetMarkerStyle(21);
  step_b2y3_av_residual -> SetMarkerSize(1.5);
  step_b2y3_av_residual -> SetTitle("");
  step_b2y3_av_residual -> Write();
  

  TLine *line_av_b2y3 = new TLine(c_av_b2y3 -> cd(2) -> GetUxmin(), 0.0, c_av_b2y3 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b2y3 -> SetLineColor(14);
  line_av_b2y3 -> SetLineStyle(3);
  line_av_b2y3 -> Draw();
  c_av_b2y3 -> Update(); 
  //c_av_b2y3 -> SaveAs("av_step_b2y3.root");
  
  c_av_b2y3 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");
  
   

  TCanvas* c_av_b2y4 = new TCanvas("c_av_b2y4","av_step_b2y4",700,500); 
   step_b2y4_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b2y4_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y4_av-> SetTitle("av_step_B2Y4");
   step_b2y4_av->SetMarkerStyle(21);
   step_b2y4_av->SetMarkerSize(1.5);
   c_av_b2y4 -> Divide(1,2);
   c_av_b2y4 -> cd(1);
   c_av_b2y4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y4_av->Draw("ap");
   step_b2y4_av->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y4_av -> Write();

   TF1 *fit_func_av_b2y4 = step_b2y4_av->GetFunction("gaus");
   double gauss_mean_av_b2y4 =  fit_func_av_b2y4->GetParameter(1);
   double gauss_err_av_b2y4 =  fit_func_av_b2y4->GetParError(1);   
   float fit_value_av_b2y4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b2y4[i] = fit_func_av_b2y4 -> Eval(nomPos_av_b2y4[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b2y4_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b2y4_av_residual -> SetPoint(i, nomPos_av_b2y4[i], num_vtx_b2y4_plots[i] - fit_value_av_b2y4[i] );
    step_b2y4_av_residual -> SetPointError(i, 0.0,  num_vtx_b2y4_err[i]);
    }
  c_av_b2y4 -> cd(2);
  c_av_b2y4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y4_av_residual -> Draw("PA");
  step_b2y4_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y4_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y4_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y4_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y4_av_residual -> SetMarkerStyle(21);
  step_b2y4_av_residual -> SetMarkerSize(1.5);
  step_b2y4_av_residual -> SetTitle("");
  step_b2y4_av_residual -> Write();
  

  TLine *line_av_b2y4 = new TLine(c_av_b2y4 -> cd(2) -> GetUxmin(), 0.0, c_av_b2y4 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b2y4 -> SetLineColor(14);
  line_av_b2y4 -> SetLineStyle(3);
  line_av_b2y4 -> Draw();
  c_av_b2y4 -> Update(); 
  //c_av_b2y4 -> SaveAs("av_step_b2y4.root");
  c_av_b2y4 -> SaveAs("num_vtx_all_dividedby_events_av.pdf(");

  
  TCanvas* c_av_b2y5 = new TCanvas("c_av_b2y5","av_step_b2y5",700,500); 
   step_b2y5_av->GetXaxis()->SetTitle("av b1 - b2 (micro)");
   step_b2y5_av->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y5_av-> SetTitle("av_step_B2Y5");
   step_b2y5_av->SetMarkerStyle(21);
   step_b2y5_av->SetMarkerSize(1.5);
   c_av_b2y5 -> Divide(1,2);
   c_av_b2y5 -> cd(1);
   c_av_b2y5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y5_av->Draw("ap");
   step_b2y5_av->Fit("gaus"); 
   gStyle -> SetOptFit(1111);
   step_b2y5_av -> Write();

   TF1 *fit_func_av_b2y5 = step_b2y5_av->GetFunction("gaus");
   double gauss_mean_av_b2y5 =  fit_func_av_b2y5->GetParameter(1);
   double gauss_err_av_b2y5 =  fit_func_av_b2y5->GetParError(1);
   cout << "gauss_mean_av_b2y5=  " << gauss_mean_av_b2y5 << "    gauss_err_av_b2y5=  " << gauss_err_av_b2y5 << endl; 
   float fit_value_av_b2y5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_av_b2y5[i] = fit_func_av_b2y5 -> Eval(nomPos_av_b2y5[i]);
    //cout << "fit values av" << i << fit_value_av[i] << endl;
    //step_b2y5_av_residual -> Fill(nomPos_av[j], num_vtx_perstep[j] - fit_value_av[j] );
    step_b2y5_av_residual -> SetPoint(i, nomPos_av_b2y5[i], num_vtx_b2y5_plots[i] - fit_value_av_b2y5[i] );
    step_b2y5_av_residual -> SetPointError(i, 0.0,  num_vtx_b2y5_err[i]);
    }
  c_av_b2y5 -> cd(2);
  c_av_b2y5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y5_av_residual -> Draw("PA");
  step_b2y5_av_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y5_av_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y5_av_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y5_av_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y5_av_residual -> SetMarkerStyle(21);
  step_b2y5_av_residual -> SetMarkerSize(1.5);
  step_b2y5_av_residual -> SetTitle("");
  step_b2y5_av_residual -> Write();
  

  TLine *line_av_b2y5 = new TLine(c_av_b2y5 -> cd(2) -> GetUxmin(), 0.0, c_av_b2y5 -> cd(2)-> GetUxmax(), 0.0);
  line_av_b2y5 -> SetLineColor(14);
  line_av_b2y5 -> SetLineStyle(3);
  line_av_b2y5 -> Draw();
  c_av_b2y5 -> Update(); 
  //c_av_b2y5 -> SaveAs("av_step_b2y5.root");
  c_av_b2y5 -> SaveAs("num_vtx_all_dividedby_events_av.pdf)");
  
  ofstream myfile;
  myfile.open ("gauss_mean_err_av.txt");
  myfile << "begin with:  b1y , b1x , b2y , b2x .\n";
  
  myfile <<  gauss_mean_av_b1y1 << " , " << gauss_err_av_b1y1 << endl;
  myfile <<  gauss_mean_av_b1y2 << " , " << gauss_err_av_b1y2 << endl;
  myfile <<  gauss_mean_av_b1y3 << " , " << gauss_err_av_b1y3 << endl;
  myfile <<  gauss_mean_av_b1y4 << " , " << gauss_err_av_b1y4 << endl;
  myfile <<  gauss_mean_av_b1y5 << " , " << gauss_err_av_b1y5 << endl;
  
  myfile <<  gauss_mean_av_b1x1 << " , " << gauss_err_av_b1x1 << endl;
  myfile <<  gauss_mean_av_b1x2 << " , " << gauss_err_av_b1x2 << endl;
  myfile <<  gauss_mean_av_b1x3 << " , " << gauss_err_av_b1x3 << endl;
  myfile <<  gauss_mean_av_b1x4 << " , " << gauss_err_av_b1x4 << endl;
  myfile <<  gauss_mean_av_b1x5 << " , " << gauss_err_av_b1x5 << endl;
  
  myfile <<  gauss_mean_av_b2y1 << " , " << gauss_err_av_b2y1 << endl;
  myfile <<  gauss_mean_av_b2y2 << " , " << gauss_err_av_b2y2 << endl;
  myfile <<  gauss_mean_av_b2y3 << " , " << gauss_err_av_b2y3 << endl;
  myfile <<  gauss_mean_av_b2y4 << " , " << gauss_err_av_b2y4 << endl;
  myfile <<  gauss_mean_av_b2y5 << " , " << gauss_err_av_b2y5 << endl;
  
  myfile <<  gauss_mean_av_b2x1 << " , " << gauss_err_av_b2x1 << endl;
  myfile <<  gauss_mean_av_b2x2 << " , " << gauss_err_av_b2x2 << endl;
  myfile <<  gauss_mean_av_b2x3 << " , " << gauss_err_av_b2x3 << endl;
  myfile <<  gauss_mean_av_b2x4 << " , " << gauss_err_av_b2x4 << endl;
  myfile <<  gauss_mean_av_b2x5 << " , " << gauss_err_av_b2x5 << endl;
  

  myfile.close();

  gSystem->Exec("date");
  f->Close();
}


