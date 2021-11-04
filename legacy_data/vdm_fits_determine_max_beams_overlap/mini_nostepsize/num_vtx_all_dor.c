{
   TFile *f = new TFile ("num_vtx_all_dor.root", "recreate");

	float nomPos_dor_b1y1[] ={ -125.109782608696 , 0.560869565217474 , 126.605555555556 };
	float nomPos_dor_b1y2[] ={ -123.002173913043 , 2.47045454545478 , 129.206382978724 };
	float nomPos_dor_b1y3[] ={ -121.509782608696 , 4.36477272727289 , 131.903260869565 };
	float nomPos_dor_b1y4[] ={ -119.875 , 6.55851063829805 , 134.265217391304 };
	float nomPos_dor_b1y5[] ={ -118.322826086956 , 8.36956521739147 , 135.1625 };
	float nomPos_dor_b1x1[] ={ -123.534782608696 , 0.31063829787232 , 125.007777777778 };
	float nomPos_dor_b1x2[] ={ -125.210869565217 , -1.12613636363639 , 125.269565217391 };
	float nomPos_dor_b1x3[] ={ -125.041111111111 , 0.075555555555527 , 127.541111111111 };
	float nomPos_dor_b1x4[] ={ -125.020652173913 , -0.862765957446816 , 124.421111111111 };
	float nomPos_dor_b1x5[] ={ -125.966304347826 , -1.99111111111115 , 122.943333333333 };
	float nomPos_dor_b2y1[] ={ -127.51 , -2.51444444444444 , 123.175 };
	float nomPos_dor_b2y2[] ={ -127.49 , -1.94891304347826 , 122.319565217391 };
	float nomPos_dor_b2y3[] ={ -126.814444444444 , -1.15444444444442 , 123.343333333333 };
	float nomPos_dor_b2y4[] ={ -125.512765957447 , 0.835869565217377 , 125.314444444444 };
	float nomPos_dor_b2y5[] ={ -123.39347826087 , 2.15543478260864 , 126.978260869565 };
	float nomPos_dor_b2x1[] ={ -128.565217391304 , -2.12717391304346 , 126.27 };
	float nomPos_dor_b2x2[] ={ -129.345555555556 , -4.01413043478259 , 121.772826086957 };
	float nomPos_dor_b2x3[] ={ -129.859782608696 , -3.40326086956521 , 121.625555555556 };
	float nomPos_dor_b2x4[] ={ -130.203260869565 , -4.06022727272726 , 120.803260869565 };
	float nomPos_dor_b2x5[] ={ -133.563333333333 , -5.4195652173913 , 119.704545454545 };
  
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


