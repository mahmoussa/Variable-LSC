{
   TFile *f = new TFile ("num_vtx_all_arc.root", "recreate");

        float nomPos_arc_b1y1[] ={ -125.173228646667 , -0.965174166666674 , 120.874581073334 };
	float nomPos_arc_b1y2[] ={ -123.275469010542 , 0.560171487 , 122.772355610459 };
	float nomPos_arc_b1y3[] ={ -121.739925172979 , 1.03784128000003 , 124.307899449021 };
	float nomPos_arc_b1y4[] ={ -121.591797345 , 1.12904371875 , 124.456027276 };
	float nomPos_arc_b1y5[] ={ -121.717507846666 , 0.836668616666664 , 124.330301873334 };
	float nomPos_arc_b1x1[] ={ -123.44584642131 , -0.941747843749999 , 122.60196329869 };
	float nomPos_arc_b1x2[] ={ -124.399532056167 , -2.11773649333333 , 121.648292564834 };
	float nomPos_arc_b1x3[] ={ -121.871443611833 , -0.401172946428544 , 124.176381010166 };
	float nomPos_arc_b1x4[] ={ -123.510141972438 , -0.717837824999998 , 122.537682648562 };
	float nomPos_arc_b1x5[] ={ -124.014152707959 , -1.19031816666666 , 122.033657012042 };
	float nomPos_arc_b2y1[] ={ -122.075933920834 , -0.896217186666667 , 123.971875799167 };
	float nomPos_arc_b2y2[] ={ -124.682230444833 , -1.23693588033333 , 121.365594176167 };
	float nomPos_arc_b2y3[] ={ -124.037727303333 , -1.46271982666669 , 122.010097318667 };
	float nomPos_arc_b2y4[] ={ -124.6964592545 , -0.952520668749997 , 121.3513653665 };
	float nomPos_arc_b2y5[] ={ -124.253080042292 , -1.76310044333333 , 121.794729677709 };
	float nomPos_arc_b2x1[] ={ -121.468889991167 , 0.204112884062498 , 124.578919728833 };
	float nomPos_arc_b2x2[] ={ -123.011666465042 , -1.25988816333333 , 123.036158155959 };
	float nomPos_arc_b2x3[] ={ -122.637683856066 , 0.890955333333306 , 123.410140765934 };
	float nomPos_arc_b2x4[] ={ -122.0120231645 , 1.5854841 , 124.0358014565 };
	float nomPos_arc_b2x5[] ={ -123.312959431667 , 1.27429093333333 , 122.734850288334 };

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
   

   TGraphErrors *step_b1y1_arc = new TGraphErrors ();
   TGraphErrors *step_b1y1_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b1y2_arc = new TGraphErrors ();
   TGraphErrors *step_b1y2_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b1y3_arc = new TGraphErrors ();
   TGraphErrors *step_b1y3_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b1y4_arc = new TGraphErrors ();
   TGraphErrors *step_b1y4_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b1y5_arc = new TGraphErrors ();
   TGraphErrors *step_b1y5_arc_residual = new TGraphErrors ();

   TGraphErrors *step_b1x1_arc = new TGraphErrors ();
   TGraphErrors *step_b1x1_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b1x2_arc = new TGraphErrors ();
   TGraphErrors *step_b1x2_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b1x3_arc = new TGraphErrors ();
   TGraphErrors *step_b1x3_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b1x4_arc = new TGraphErrors ();
   TGraphErrors *step_b1x4_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b1x5_arc = new TGraphErrors ();
   TGraphErrors *step_b1x5_arc_residual = new TGraphErrors ();

   TGraphErrors *step_b2y1_arc = new TGraphErrors ();
   TGraphErrors *step_b2y1_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b2y2_arc = new TGraphErrors ();
   TGraphErrors *step_b2y2_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b2y3_arc = new TGraphErrors ();
   TGraphErrors *step_b2y3_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b2y4_arc = new TGraphErrors ();
   TGraphErrors *step_b2y4_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b2y5_arc = new TGraphErrors ();
   TGraphErrors *step_b2y5_arc_residual = new TGraphErrors ();

   TGraphErrors *step_b2x1_arc = new TGraphErrors ();
   TGraphErrors *step_b2x1_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b2x2_arc = new TGraphErrors ();
   TGraphErrors *step_b2x2_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b2x3_arc = new TGraphErrors ();
   TGraphErrors *step_b2x3_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b2x4_arc = new TGraphErrors ();
   TGraphErrors *step_b2x4_arc_residual = new TGraphErrors ();
   TGraphErrors *step_b2x5_arc = new TGraphErrors ();
   TGraphErrors *step_b2x5_arc_residual = new TGraphErrors ();


   for (int j=0 ; j<3 ; j++){
     step_b1y1_arc -> SetPoint(j, nomPos_arc_b1y1[j], num_vtx_b1y1_plots[j]);
     step_b1y1_arc -> SetPointError( j , 0.0 , num_vtx_b1y1_err[j] );
     step_b1y2_arc -> SetPoint(j, nomPos_arc_b1y2[j], num_vtx_b1y2_plots[j]);
     step_b1y2_arc -> SetPointError( j , 0.0 , num_vtx_b1y2_err[j] );
     step_b1y3_arc -> SetPoint(j, nomPos_arc_b1y3[j], num_vtx_b1y3_plots[j]);
     step_b1y3_arc -> SetPointError( j , 0.0 , num_vtx_b1y3_err[j] );
     step_b1y4_arc -> SetPoint(j, nomPos_arc_b1y4[j], num_vtx_b1y4_plots[j]);
     step_b1y4_arc -> SetPointError( j , 0.0 , num_vtx_b1y4_err[j] );
     step_b1y5_arc -> SetPoint(j, nomPos_arc_b1y5[j], num_vtx_b1y5_plots[j]);
     step_b1y5_arc -> SetPointError( j , 0.0 , num_vtx_b1y5_err[j] );
     step_b2y1_arc -> SetPoint(j, nomPos_arc_b2y1[j], num_vtx_b2y1_plots[j]);
     step_b2y1_arc -> SetPointError( j , 0.0 , num_vtx_b2y1_err[j] );
     step_b2y2_arc -> SetPoint(j, nomPos_arc_b2y2[j], num_vtx_b2y2_plots[j]);
     step_b2y2_arc -> SetPointError( j , 0.0 , num_vtx_b2y2_err[j] );
     step_b2y3_arc -> SetPoint(j, nomPos_arc_b2y3[j], num_vtx_b2y3_plots[j]);
     step_b2y3_arc -> SetPointError( j , 0.0 , num_vtx_b2y3_err[j] );
     step_b2y4_arc -> SetPoint(j, nomPos_arc_b2y4[j], num_vtx_b2y4_plots[j]);
     step_b2y4_arc -> SetPointError( j , 0.0 , num_vtx_b2y4_err[j] );
     step_b2y5_arc -> SetPoint(j, nomPos_arc_b2y5[j], num_vtx_b2y5_plots[j]);
     step_b2y5_arc -> SetPointError( j , 0.0 , num_vtx_b2y5_err[j] );
     step_b1x1_arc -> SetPoint(j, nomPos_arc_b1x1[j], num_vtx_b1x1_plots[j]);
     step_b1x1_arc -> SetPointError( j , 0.0 , num_vtx_b1x1_err[j] );
     step_b1x2_arc -> SetPoint(j, nomPos_arc_b1x2[j], num_vtx_b1x2_plots[j]);
     step_b1x2_arc -> SetPointError( j , 0.0 , num_vtx_b1x2_err[j] );
     step_b1x3_arc -> SetPoint(j, nomPos_arc_b1x3[j], num_vtx_b1x3_plots[j]);
     step_b1x3_arc -> SetPointError( j , 0.0 , num_vtx_b1x3_err[j] );
     step_b1x4_arc -> SetPoint(j, nomPos_arc_b1x4[j], num_vtx_b1x4_plots[j]);
     step_b1x4_arc -> SetPointError( j , 0.0 , num_vtx_b1x4_err[j] );
     step_b1x5_arc -> SetPoint(j, nomPos_arc_b1x5[j], num_vtx_b1x5_plots[j]);
     step_b1x5_arc -> SetPointError( j , 0.0 , num_vtx_b1x5_err[j] );
     step_b2x1_arc -> SetPoint(j, nomPos_arc_b2x1[j], num_vtx_b2x1_plots[j]);
     step_b2x1_arc -> SetPointError( j , 0.0 , num_vtx_b2x1_err[j] );
     step_b2x2_arc -> SetPoint(j, nomPos_arc_b2x2[j], num_vtx_b2x2_plots[j]);
     step_b2x2_arc -> SetPointError( j , 0.0 , num_vtx_b2x2_err[j] );
     step_b2x3_arc -> SetPoint(j, nomPos_arc_b2x3[j], num_vtx_b2x3_plots[j]);
     step_b2x3_arc -> SetPointError( j , 0.0 , num_vtx_b2x3_err[j] );
     step_b2x4_arc -> SetPoint(j, nomPos_arc_b2x4[j], num_vtx_b2x4_plots[j]);
     step_b2x4_arc -> SetPointError( j , 0.0 , num_vtx_b2x4_err[j] );
     step_b2x5_arc -> SetPoint(j, nomPos_arc_b2x5[j], num_vtx_b2x5_plots[j]);
     step_b2x5_arc -> SetPointError( j , 0.0 , num_vtx_b2x5_err[j] );
     
     }
TCanvas* c_arc_b1y1 = new TCanvas("c_arc_b1y1","arc_step_B1Y1",700,500); 
   step_b1y1_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b1y1_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y1_arc-> SetTitle("arc_step_B1Y1");
   step_b1y1_arc->SetMarkerStyle(21);
   step_b1y1_arc->SetMarkerSize(1.5);
   c_arc_b1y1 -> Divide(1,2);
   c_arc_b1y1 -> cd(1);
   c_arc_b1y1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y1_arc->Draw("ap");
   step_b1y1_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y1_arc -> Write();

   TF1 *fit_func_arc_b1y1 = step_b1y1_arc->GetFunction("gaus");
   double gauss_mean_arc_b1y1 =  fit_func_arc_b1y1->GetParameter(1);
   double gauss_err_arc_b1y1 =  fit_func_arc_b1y1->GetParError(1);   
   float fit_value_arc_b1y1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b1y1[i] = fit_func_arc_b1y1 -> Eval(nomPos_arc_b1y1[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_B1Y1_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b1y1_arc_residual -> SetPoint(i, nomPos_arc_b1y1[i], num_vtx_b1y1_plots[i] - fit_value_arc_b1y1[i] );
    step_b1y1_arc_residual -> SetPointError(i, 0.0,  num_vtx_b1y1_err[i]);
    }
  c_arc_b1y1 -> cd(2);
  c_arc_b1y1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y1_arc_residual -> Draw("PA");
  step_b1y1_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y1_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y1_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y1_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y1_arc_residual -> SetMarkerStyle(21);
  step_b1y1_arc_residual -> SetMarkerSize(1.5);
  step_b1y1_arc_residual -> SetTitle("");
  step_b1y1_arc_residual -> Write();
  

  TLine *line_arc_b1y1 = new TLine(c_arc_b1y1 -> cd(2) -> GetUxmin(), 0.0, c_arc_b1y1 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b1y1 -> SetLineColor(14);
  line_arc_b1y1 -> SetLineStyle(3);
  line_arc_b1y1 -> Draw();
  c_arc_b1y1 -> Update(); 
  //c_arc_b1y1 -> SaveAs("arc_step_B1Y1.root");
  c_arc_b1y1 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");
  

  TCanvas* c_arc_b1y2 = new TCanvas("c_arc_b1y2","arc_step_b1y2",700,500); 
   step_b1y2_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b1y2_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y2_arc-> SetTitle("arc_step_B1Y2");
   step_b1y2_arc->SetMarkerStyle(21);
   step_b1y2_arc->SetMarkerSize(1.5);
   c_arc_b1y2 -> Divide(1,2);
   c_arc_b1y2 -> cd(1);
   c_arc_b1y2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y2_arc->Draw("ap");
   step_b1y2_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y2_arc -> Write();

   TF1 *fit_func_arc_b1y2 = step_b1y2_arc->GetFunction("gaus");
   double gauss_mean_arc_b1y2 =  fit_func_arc_b1y2->GetParameter(1);
   double gauss_err_arc_b1y2 =  fit_func_arc_b1y2->GetParError(1);   
   float fit_value_arc_b1y2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b1y2[i] = fit_func_arc_b1y2 -> Eval(nomPos_arc_b1y2[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b1y2_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b1y2_arc_residual -> SetPoint(i, nomPos_arc_b1y2[i], num_vtx_b1y2_plots[i] - fit_value_arc_b1y2[i] );
    step_b1y2_arc_residual -> SetPointError(i, 0.0,  num_vtx_b1y2_err[i]);
    }
  c_arc_b1y2 -> cd(2);
  c_arc_b1y2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y2_arc_residual -> Draw("PA");
  step_b1y2_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y2_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y2_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y2_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y2_arc_residual -> SetMarkerStyle(21);
  step_b1y2_arc_residual -> SetMarkerSize(1.5);
  step_b1y2_arc_residual -> SetTitle("");
  step_b1y2_arc_residual -> Write();
  

  TLine *line_arc_b1y2 = new TLine(c_arc_b1y2 -> cd(2) -> GetUxmin(), 0.0, c_arc_b1y2 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b1y2 -> SetLineColor(14);
  line_arc_b1y2 -> SetLineStyle(3);
  line_arc_b1y2 -> Draw();
  c_arc_b1y2 -> Update(); 
  //c_arc_b1y2 -> SaveAs("arc_step_b1y2.root");
  c_arc_b1y2 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  
   TCanvas* c_arc_b1y3 = new TCanvas("c_arc_b1y3","arc_step_b1y3",700,500); 
   step_b1y3_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b1y3_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y3_arc-> SetTitle("arc_step_B1Y3");
   step_b1y3_arc->SetMarkerStyle(21);
   step_b1y3_arc->SetMarkerSize(1.5);
   c_arc_b1y3 -> Divide(1,2);
   c_arc_b1y3 -> cd(1);
   c_arc_b1y3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y3_arc->Draw("ap");
   step_b1y3_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y3_arc -> Write();

   TF1 *fit_func_arc_b1y3 = step_b1y3_arc->GetFunction("gaus");
   double gauss_mean_arc_b1y3 =  fit_func_arc_b1y3->GetParameter(1);
   double gauss_err_arc_b1y3 =  fit_func_arc_b1y3->GetParError(1);   
   float fit_value_arc_b1y3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b1y3[i] = fit_func_arc_b1y3 -> Eval(nomPos_arc_b1y3[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b1y3_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b1y3_arc_residual -> SetPoint(i, nomPos_arc_b1y3[i], num_vtx_b1y3_plots[i] - fit_value_arc_b1y3[i] );
    step_b1y3_arc_residual -> SetPointError(i, 0.0,  num_vtx_b1y3_err[i]);
    }
  c_arc_b1y3 -> cd(2);
  c_arc_b1y3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y3_arc_residual -> Draw("PA");
  step_b1y3_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y3_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y3_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y3_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y3_arc_residual -> SetMarkerStyle(21);
  step_b1y3_arc_residual -> SetMarkerSize(1.5);
  step_b1y3_arc_residual -> SetTitle("");
  step_b1y3_arc_residual -> Write();
  

  TLine *line_arc_b1y3 = new TLine(c_arc_b1y3 -> cd(2) -> GetUxmin(), 0.0, c_arc_b1y3 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b1y3 -> SetLineColor(14);
  line_arc_b1y3 -> SetLineStyle(3);
  line_arc_b1y3 -> Draw();
  c_arc_b1y3 -> Update(); 
  //c_arc_b1y3 -> SaveAs("arc_step_b1y3.root");
  c_arc_b1y3 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b1y4 = new TCanvas("c_arc_b1y4","arc_step_b1y4",700,500); 
   step_b1y4_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b1y4_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y4_arc-> SetTitle("arc_step_B1Y4");
   step_b1y4_arc->SetMarkerStyle(21);
   step_b1y4_arc->SetMarkerSize(1.5);
   c_arc_b1y4 -> Divide(1,2);
   c_arc_b1y4 -> cd(1);
   c_arc_b1y4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y4_arc->Draw("ap");
   step_b1y4_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y4_arc -> Write();

   TF1 *fit_func_arc_b1y4 = step_b1y4_arc->GetFunction("gaus");
   double gauss_mean_arc_b1y4 =  fit_func_arc_b1y4->GetParameter(1);
   double gauss_err_arc_b1y4 =  fit_func_arc_b1y4->GetParError(1);   
   float fit_value_arc_b1y4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b1y4[i] = fit_func_arc_b1y4 -> Eval(nomPos_arc_b1y4[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b1y4_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b1y4_arc_residual -> SetPoint(i, nomPos_arc_b1y4[i], num_vtx_b1y4_plots[i] - fit_value_arc_b1y4[i] );
    step_b1y4_arc_residual -> SetPointError(i, 0.0,  num_vtx_b1y4_err[i]);
    }
  c_arc_b1y4 -> cd(2);
  c_arc_b1y4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y4_arc_residual -> Draw("PA");
  step_b1y4_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y4_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y4_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y4_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y4_arc_residual -> SetMarkerStyle(21);
  step_b1y4_arc_residual -> SetMarkerSize(1.5);
  step_b1y4_arc_residual -> SetTitle("");
  step_b1y4_arc_residual -> Write();
  

  TLine *line_arc_b1y4 = new TLine(c_arc_b1y4 -> cd(2) -> GetUxmin(), 0.0, c_arc_b1y4 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b1y4 -> SetLineColor(14);
  line_arc_b1y4 -> SetLineStyle(3);
  line_arc_b1y4 -> Draw();
  c_arc_b1y4 -> Update(); 
  //c_arc_b1y4 -> SaveAs("arc_step_b1y4.root");
  c_arc_b1y4 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b1y5 = new TCanvas("c_arc_b1y5","arc_step_b1y5",700,500); 
   step_b1y5_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b1y5_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1y5_arc-> SetTitle("arc_step_B1Y5");
   step_b1y5_arc->SetMarkerStyle(21);
   step_b1y5_arc->SetMarkerSize(1.5);
   c_arc_b1y5 -> Divide(1,2);
   c_arc_b1y5 -> cd(1);
   c_arc_b1y5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1y5_arc->Draw("ap");
   step_b1y5_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1y5_arc -> Write();

   TF1 *fit_func_arc_b1y5 = step_b1y5_arc->GetFunction("gaus");
   double gauss_mean_arc_b1y5 =  fit_func_arc_b1y5->GetParameter(1);
   double gauss_err_arc_b1y5 =  fit_func_arc_b1y5->GetParError(1);   
   float fit_value_arc_b1y5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b1y5[i] = fit_func_arc_b1y5 -> Eval(nomPos_arc_b1y5[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b1y5_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b1y5_arc_residual -> SetPoint(i, nomPos_arc_b1y5[i], num_vtx_b1y5_plots[i] - fit_value_arc_b1y5[i] );
    step_b1y5_arc_residual -> SetPointError(i, 0.0,  num_vtx_b1y5_err[i]);
    }
  c_arc_b1y5 -> cd(2);
  c_arc_b1y5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1y5_arc_residual -> Draw("PA");
  step_b1y5_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1y5_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1y5_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1y5_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1y5_arc_residual -> SetMarkerStyle(21);
  step_b1y5_arc_residual -> SetMarkerSize(1.5);
  step_b1y5_arc_residual -> SetTitle("");
  step_b1y5_arc_residual -> Write();
  

  TLine *line_arc_b1y5 = new TLine(c_arc_b1y5 -> cd(2) -> GetUxmin(), 0.0, c_arc_b1y5 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b1y5 -> SetLineColor(14);
  line_arc_b1y5 -> SetLineStyle(3);
  line_arc_b1y5 -> Draw();
  c_arc_b1y5 -> Update(); 
  //c_arc_b1y5 -> SaveAs("arc_step_b1y5.root");
  c_arc_b1y5 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b1x1 = new TCanvas("c_arc_b1x1","arc_step_b1x1",700,500); 
   step_b1x1_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b1x1_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x1_arc-> SetTitle("arc_step_B1X1");
   step_b1x1_arc->SetMarkerStyle(21);
   step_b1x1_arc->SetMarkerSize(1.5);
   c_arc_b1x1 -> Divide(1,2);
   c_arc_b1x1 -> cd(1);
   c_arc_b1x1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x1_arc->Draw("ap");
   step_b1x1_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x1_arc -> Write();

   TF1 *fit_func_arc_b1x1 = step_b1x1_arc->GetFunction("gaus");
   double gauss_mean_arc_b1x1 =  fit_func_arc_b1x1->GetParameter(1);
   double gauss_err_arc_b1x1 =  fit_func_arc_b1x1->GetParError(1);   
   float fit_value_arc_b1x1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b1x1[i] = fit_func_arc_b1x1 -> Eval(nomPos_arc_b1x1[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b1x1_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b1x1_arc_residual -> SetPoint(i, nomPos_arc_b1x1[i], num_vtx_b1x1_plots[i] - fit_value_arc_b1x1[i] );
    step_b1x1_arc_residual -> SetPointError(i, 0.0,  num_vtx_b1x1_err[i]);
    }
  c_arc_b1x1 -> cd(2);
  c_arc_b1x1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x1_arc_residual -> Draw("PA");
  step_b1x1_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x1_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x1_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x1_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x1_arc_residual -> SetMarkerStyle(21);
  step_b1x1_arc_residual -> SetMarkerSize(1.5);
  step_b1x1_arc_residual -> SetTitle("");
  step_b1x1_arc_residual -> Write();
  

  TLine *line_arc_b1x1 = new TLine(c_arc_b1x1 -> cd(2) -> GetUxmin(), 0.0, c_arc_b1x1 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b1x1 -> SetLineColor(14);
  line_arc_b1x1 -> SetLineStyle(3);
  line_arc_b1x1 -> Draw();
  c_arc_b1x1 -> Update(); 
  //c_arc_b1x1 -> SaveAs("arc_step_b1x1.root");
  c_arc_b1x1 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b1x2 = new TCanvas("c_arc_b1x2","arc_step_b1x2",700,500); 
   step_b1x2_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b1x2_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x2_arc-> SetTitle("arc_step_B1X2");
   step_b1x2_arc->SetMarkerStyle(21);
   step_b1x2_arc->SetMarkerSize(1.5);
   c_arc_b1x2 -> Divide(1,2);
   c_arc_b1x2 -> cd(1);
   c_arc_b1x2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x2_arc->Draw("ap");
   step_b1x2_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x2_arc -> Write();

   TF1 *fit_func_arc_b1x2 = step_b1x2_arc->GetFunction("gaus");
   double gauss_mean_arc_b1x2 =  fit_func_arc_b1x2->GetParameter(1);
   double gauss_err_arc_b1x2 =  fit_func_arc_b1x2->GetParError(1);   
   float fit_value_arc_b1x2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b1x2[i] = fit_func_arc_b1x2 -> Eval(nomPos_arc_b1x2[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b1x2_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b1x2_arc_residual -> SetPoint(i, nomPos_arc_b1x2[i], num_vtx_b1x2_plots[i] - fit_value_arc_b1x2[i] );
    step_b1x2_arc_residual -> SetPointError(i, 0.0,  num_vtx_b1x2_err[i]);
    }
  c_arc_b1x2 -> cd(2);
  c_arc_b1x2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x2_arc_residual -> Draw("PA");
  step_b1x2_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x2_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x2_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x2_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x2_arc_residual -> SetMarkerStyle(21);
  step_b1x2_arc_residual -> SetMarkerSize(1.5);
  step_b1x2_arc_residual -> SetTitle("");
  step_b1x2_arc_residual -> Write();
  

  TLine *line_arc_b1x2 = new TLine(c_arc_b1x2 -> cd(2) -> GetUxmin(), 0.0, c_arc_b1x2 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b1x2 -> SetLineColor(14);
  line_arc_b1x2 -> SetLineStyle(3);
  line_arc_b1x2 -> Draw();
  c_arc_b1x2 -> Update(); 
  //c_arc_b1x2 -> SaveAs("arc_step_b1x2.root");
  c_arc_b1x2 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b1x3 = new TCanvas("c_arc_b1x3","arc_step_b1x3",700,500); 
   step_b1x3_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b1x3_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x3_arc-> SetTitle("arc_step_B1X3");
   step_b1x3_arc->SetMarkerStyle(21);
   step_b1x3_arc->SetMarkerSize(1.5);
   c_arc_b1x3 -> Divide(1,2);
   c_arc_b1x3 -> cd(1);
   c_arc_b1x3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x3_arc->Draw("ap");
   step_b1x3_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x3_arc -> Write();

   TF1 *fit_func_arc_b1x3 = step_b1x3_arc->GetFunction("gaus");
   double gauss_mean_arc_b1x3 =  fit_func_arc_b1x3->GetParameter(1);
   double gauss_err_arc_b1x3 =  fit_func_arc_b1x3->GetParError(1);   
   float fit_value_arc_b1x3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b1x3[i] = fit_func_arc_b1x3 -> Eval(nomPos_arc_b1x3[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b1x3_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b1x3_arc_residual -> SetPoint(i, nomPos_arc_b1x3[i], num_vtx_b1x3_plots[i] - fit_value_arc_b1x3[i] );
    step_b1x3_arc_residual -> SetPointError(i, 0.0,  num_vtx_b1x3_err[i]);
    }
  c_arc_b1x3 -> cd(2);
  c_arc_b1x3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x3_arc_residual -> Draw("PA");
  step_b1x3_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x3_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x3_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x3_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x3_arc_residual -> SetMarkerStyle(21);
  step_b1x3_arc_residual -> SetMarkerSize(1.5);
  step_b1x3_arc_residual -> SetTitle("");
  step_b1x3_arc_residual -> Write();
  

  TLine *line_arc_b1x3 = new TLine(c_arc_b1x3 -> cd(2) -> GetUxmin(), 0.0, c_arc_b1x3 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b1x3 -> SetLineColor(14);
  line_arc_b1x3 -> SetLineStyle(3);
  line_arc_b1x3 -> Draw();
  c_arc_b1x3 -> Update(); 
  //c_arc_b1x3 -> SaveAs("arc_step_b1x3.root");
  c_arc_b1x3 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b1x4 = new TCanvas("c_arc_b1x4","arc_step_b1x4",700,500); 
   step_b1x4_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b1x4_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x4_arc-> SetTitle("arc_step_B1X4");
   step_b1x4_arc->SetMarkerStyle(21);
   step_b1x4_arc->SetMarkerSize(1.5);
   c_arc_b1x4 -> Divide(1,2);
   c_arc_b1x4 -> cd(1);
   c_arc_b1x4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x4_arc->Draw("ap");
   step_b1x4_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x4_arc -> Write();

   TF1 *fit_func_arc_b1x4 = step_b1x4_arc->GetFunction("gaus");
   double gauss_mean_arc_b1x4 =  fit_func_arc_b1x4->GetParameter(1);
   double gauss_err_arc_b1x4 =  fit_func_arc_b1x4->GetParError(1);   
   float fit_value_arc_b1x4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b1x4[i] = fit_func_arc_b1x4 -> Eval(nomPos_arc_b1x4[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b1x4_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b1x4_arc_residual -> SetPoint(i, nomPos_arc_b1x4[i], num_vtx_b1x4_plots[i] - fit_value_arc_b1x4[i] );
    step_b1x4_arc_residual -> SetPointError(i, 0.0,  num_vtx_b1x4_err[i]);
    }
  c_arc_b1x4 -> cd(2);
  c_arc_b1x4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x4_arc_residual -> Draw("PA");
  step_b1x4_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x4_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x4_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x4_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x4_arc_residual -> SetMarkerStyle(21);
  step_b1x4_arc_residual -> SetMarkerSize(1.5);
  step_b1x4_arc_residual -> SetTitle("");
  step_b1x4_arc_residual -> Write();
  

  TLine *line_arc_b1x4 = new TLine(c_arc_b1x4 -> cd(2) -> GetUxmin(), 0.0, c_arc_b1x4 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b1x4 -> SetLineColor(14);
  line_arc_b1x4 -> SetLineStyle(3);
  line_arc_b1x4 -> Draw();
  c_arc_b1x4 -> Update(); 
  //c_arc_b1x4 -> SaveAs("arc_step_b1x4.root");
  c_arc_b1x4 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b1x5 = new TCanvas("c_arc_b1x5","arc_step_b1x5",700,500); 
   step_b1x5_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b1x5_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b1x5_arc-> SetTitle("arc_step_B1X5");
   step_b1x5_arc->SetMarkerStyle(21);
   step_b1x5_arc->SetMarkerSize(1.5);
   c_arc_b1x5 -> Divide(1,2);
   c_arc_b1x5 -> cd(1);
   c_arc_b1x5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b1x5_arc->Draw("ap");
   step_b1x5_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b1x5_arc -> Write();

   TF1 *fit_func_arc_b1x5 = step_b1x5_arc->GetFunction("gaus");
   double gauss_mean_arc_b1x5 =  fit_func_arc_b1x5->GetParameter(1);
   double gauss_err_arc_b1x5 =  fit_func_arc_b1x5->GetParError(1);   
   float fit_value_arc_b1x5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b1x5[i] = fit_func_arc_b1x5 -> Eval(nomPos_arc_b1x5[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b1x5_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b1x5_arc_residual -> SetPoint(i, nomPos_arc_b1x5[i], num_vtx_b1x5_plots[i] - fit_value_arc_b1x5[i] );
    step_b1x5_arc_residual -> SetPointError(i, 0.0,  num_vtx_b1x5_err[i]);
    }
  c_arc_b1x5 -> cd(2);
  c_arc_b1x5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b1x5_arc_residual -> Draw("PA");
  step_b1x5_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b1x5_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b1x5_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b1x5_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b1x5_arc_residual -> SetMarkerStyle(21);
  step_b1x5_arc_residual -> SetMarkerSize(1.5);
  step_b1x5_arc_residual -> SetTitle("");
  step_b1x5_arc_residual -> Write();
  

  TLine *line_arc_b1x5 = new TLine(c_arc_b1x5 -> cd(2) -> GetUxmin(), 0.0, c_arc_b1x5 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b1x5 -> SetLineColor(14);
  line_arc_b1x5 -> SetLineStyle(3);
  line_arc_b1x5 -> Draw();
  c_arc_b1x5 -> Update(); 
  //c_arc_b1x5 -> SaveAs("arc_step_b1x5.root");
  c_arc_b1x5 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  

  TCanvas* c_arc_b2x1 = new TCanvas("c_arc_b2x1","arc_step_b2x1",700,500); 
   step_b2x1_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b2x1_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x1_arc-> SetTitle("arc_step_B2X1");
   step_b2x1_arc->SetMarkerStyle(21);
   step_b2x1_arc->SetMarkerSize(1.5);
   c_arc_b2x1 -> Divide(1,2);
   c_arc_b2x1 -> cd(1);
   c_arc_b2x1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x1_arc->Draw("ap");
   step_b2x1_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x1_arc -> Write();

   TF1 *fit_func_arc_b2x1 = step_b2x1_arc->GetFunction("gaus");
   double gauss_mean_arc_b2x1 =  fit_func_arc_b2x1->GetParameter(1);
   double gauss_err_arc_b2x1 =  fit_func_arc_b2x1->GetParError(1);   
   float fit_value_arc_b2x1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b2x1[i] = fit_func_arc_b2x1 -> Eval(nomPos_arc_b2x1[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b2x1_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b2x1_arc_residual -> SetPoint(i, nomPos_arc_b2x1[i], num_vtx_b2x1_plots[i] - fit_value_arc_b2x1[i] );
    step_b2x1_arc_residual -> SetPointError(i, 0.0,  num_vtx_b2x1_err[i]);
    }
  c_arc_b2x1 -> cd(2);
  c_arc_b2x1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x1_arc_residual -> Draw("PA");
  step_b2x1_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x1_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x1_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x1_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x1_arc_residual -> SetMarkerStyle(21);
  step_b2x1_arc_residual -> SetMarkerSize(1.5);
  step_b2x1_arc_residual -> SetTitle("");
  step_b2x1_arc_residual -> Write();
  

  TLine *line_arc_b2x1 = new TLine(c_arc_b2x1 -> cd(2) -> GetUxmin(), 0.0, c_arc_b2x1 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b2x1 -> SetLineColor(14);
  line_arc_b2x1 -> SetLineStyle(3);
  line_arc_b2x1 -> Draw();
  c_arc_b2x1 -> Update(); 
  //c_arc_b2x1 -> SaveAs("arc_step_b2x1.root");
  c_arc_b2x1 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b2x2 = new TCanvas("c_arc_b2x2","arc_step_b2x2",700,500); 
   step_b2x2_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b2x2_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x2_arc-> SetTitle("arc_step_B2X2");
   step_b2x2_arc->SetMarkerStyle(21);
   step_b2x2_arc->SetMarkerSize(1.5);
   c_arc_b2x2 -> Divide(1,2);
   c_arc_b2x2 -> cd(1);
   c_arc_b2x2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x2_arc->Draw("ap");
   step_b2x2_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x2_arc -> Write();

   TF1 *fit_func_arc_b2x2 = step_b2x2_arc->GetFunction("gaus");
   double gauss_mean_arc_b2x2 =  fit_func_arc_b2x2->GetParameter(1);
   double gauss_err_arc_b2x2 =  fit_func_arc_b2x2->GetParError(1);   
   float fit_value_arc_b2x2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b2x2[i] = fit_func_arc_b2x2 -> Eval(nomPos_arc_b2x2[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b2x2_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b2x2_arc_residual -> SetPoint(i, nomPos_arc_b2x2[i], num_vtx_b2x2_plots[i] - fit_value_arc_b2x2[i] );
    step_b2x2_arc_residual -> SetPointError(i, 0.0,  num_vtx_b2x2_err[i]);
    }
  c_arc_b2x2 -> cd(2);
  c_arc_b2x2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x2_arc_residual -> Draw("PA");
  step_b2x2_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x2_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x2_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x2_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x2_arc_residual -> SetMarkerStyle(21);
  step_b2x2_arc_residual -> SetMarkerSize(1.5);
  step_b2x2_arc_residual -> SetTitle("");
  step_b2x2_arc_residual -> Write();
  

  TLine *line_arc_b2x2 = new TLine(c_arc_b2x2 -> cd(2) -> GetUxmin(), 0.0, c_arc_b2x2 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b2x2 -> SetLineColor(14);
  line_arc_b2x2 -> SetLineStyle(3);
  line_arc_b2x2 -> Draw();
  c_arc_b2x2 -> Update(); 
  //c_arc_b2x2 -> SaveAs("arc_step_b2x2.root");
  c_arc_b2x2 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b2x3 = new TCanvas("c_arc_b2x3","arc_step_b2x3",700,500); 
   step_b2x3_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b2x3_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x3_arc-> SetTitle("arc_step_B2X3");
   step_b2x3_arc->SetMarkerStyle(21);
   step_b2x3_arc->SetMarkerSize(1.5);
   c_arc_b2x3 -> Divide(1,2);
   c_arc_b2x3 -> cd(1);
   c_arc_b2x3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x3_arc->Draw("ap");
   step_b2x3_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x3_arc -> Write();

   TF1 *fit_func_arc_b2x3 = step_b2x3_arc->GetFunction("gaus");
   double gauss_mean_arc_b2x3 =  fit_func_arc_b2x3->GetParameter(1);
   double gauss_err_arc_b2x3 =  fit_func_arc_b2x3->GetParError(1);   
   float fit_value_arc_b2x3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b2x3[i] = fit_func_arc_b2x3 -> Eval(nomPos_arc_b2x3[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b2x3_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b2x3_arc_residual -> SetPoint(i, nomPos_arc_b2x3[i], num_vtx_b2x3_plots[i] - fit_value_arc_b2x3[i] );
    step_b2x3_arc_residual -> SetPointError(i, 0.0,  num_vtx_b2x3_err[i]);
    }
  c_arc_b2x3 -> cd(2);
  c_arc_b2x3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x3_arc_residual -> Draw("PA");
  step_b2x3_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x3_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x3_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x3_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x3_arc_residual -> SetMarkerStyle(21);
  step_b2x3_arc_residual -> SetMarkerSize(1.5);
  step_b2x3_arc_residual -> SetTitle("");
  step_b2x3_arc_residual -> Write();
  

  TLine *line_arc_b2x3 = new TLine(c_arc_b2x3 -> cd(2) -> GetUxmin(), 0.0, c_arc_b2x3 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b2x3 -> SetLineColor(14);
  line_arc_b2x3 -> SetLineStyle(3);
  line_arc_b2x3 -> Draw();
  c_arc_b2x3 -> Update(); 
  //c_arc_b2x3 -> SaveAs("arc_step_b2x3.root");
  c_arc_b2x3 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b2x4 = new TCanvas("c_arc_b2x4","arc_step_b2x4",700,500); 
   step_b2x4_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b2x4_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x4_arc-> SetTitle("arc_step_B2X4");
   step_b2x4_arc->SetMarkerStyle(21);
   step_b2x4_arc->SetMarkerSize(1.5);
   c_arc_b2x4 -> Divide(1,2);
   c_arc_b2x4 -> cd(1);
   c_arc_b2x4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x4_arc->Draw("ap");
   step_b2x4_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x4_arc -> Write();

   TF1 *fit_func_arc_b2x4 = step_b2x4_arc->GetFunction("gaus");
   double gauss_mean_arc_b2x4 =  fit_func_arc_b2x4->GetParameter(1);
   double gauss_err_arc_b2x4 =  fit_func_arc_b2x4->GetParError(1);   
   float fit_value_arc_b2x4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b2x4[i] = fit_func_arc_b2x4 -> Eval(nomPos_arc_b2x4[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b2x4_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b2x4_arc_residual -> SetPoint(i, nomPos_arc_b2x4[i], num_vtx_b2x4_plots[i] - fit_value_arc_b2x4[i] );
    step_b2x4_arc_residual -> SetPointError(i, 0.0,  num_vtx_b2x4_err[i]);
    }
  c_arc_b2x4 -> cd(2);
  c_arc_b2x4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x4_arc_residual -> Draw("PA");
  step_b2x4_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x4_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x4_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x4_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x4_arc_residual -> SetMarkerStyle(21);
  step_b2x4_arc_residual -> SetMarkerSize(1.5);
  step_b2x4_arc_residual -> SetTitle("");
  step_b2x4_arc_residual -> Write();
  

  TLine *line_arc_b2x4 = new TLine(c_arc_b2x4 -> cd(2) -> GetUxmin(), 0.0, c_arc_b2x4 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b2x4 -> SetLineColor(14);
  line_arc_b2x4 -> SetLineStyle(3);
  line_arc_b2x4 -> Draw();
  c_arc_b2x4 -> Update(); 
  //c_arc_b2x4 -> SaveAs("arc_step_b2x4.root");
  c_arc_b2x4 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b2x5 = new TCanvas("c_arc_b2x5","arc_step_b2x5",700,500); 
   step_b2x5_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b2x5_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2x5_arc-> SetTitle("arc_step_B2X5");
   step_b2x5_arc->SetMarkerStyle(21);
   step_b2x5_arc->SetMarkerSize(1.5);
   c_arc_b2x5 -> Divide(1,2);
   c_arc_b2x5 -> cd(1);
   c_arc_b2x5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2x5_arc->Draw("ap");
   step_b2x5_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2x5_arc -> Write();

   TF1 *fit_func_arc_b2x5 = step_b2x5_arc->GetFunction("gaus");
   double gauss_mean_arc_b2x5 =  fit_func_arc_b2x5->GetParameter(1);
   double gauss_err_arc_b2x5 =  fit_func_arc_b2x5->GetParError(1);   
   float fit_value_arc_b2x5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b2x5[i] = fit_func_arc_b2x5 -> Eval(nomPos_arc_b2x5[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b2x5_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b2x5_arc_residual -> SetPoint(i, nomPos_arc_b2x5[i], num_vtx_b2x5_plots[i] - fit_value_arc_b2x5[i] );
    step_b2x5_arc_residual -> SetPointError(i, 0.0,  num_vtx_b2x5_err[i]);
    }
  c_arc_b2x5 -> cd(2);
  c_arc_b2x5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2x5_arc_residual -> Draw("PA");
  step_b2x5_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2x5_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2x5_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2x5_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2x5_arc_residual -> SetMarkerStyle(21);
  step_b2x5_arc_residual -> SetMarkerSize(1.5);
  step_b2x5_arc_residual -> SetTitle("");
  step_b2x5_arc_residual -> Write();
  

  TLine *line_arc_b2x5 = new TLine(c_arc_b2x5 -> cd(2) -> GetUxmin(), 0.0, c_arc_b2x5 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b2x5 -> SetLineColor(14);
  line_arc_b2x5 -> SetLineStyle(3);
  line_arc_b2x5 -> Draw();
  c_arc_b2x5 -> Update(); 
  //c_arc_b2x5 -> SaveAs("arc_step_b2x5.root");
  c_arc_b2x5 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");
  
   //ROOT::Math::MinimizerOptions::SetDefaultMaxFunctionCalls(10000);
   //ROOT::Math::MinimizerOptions::SetDefaultTolerance(1);

   TCanvas* c_arc_b2y1 = new TCanvas("c_arc_b2y1","arc_step_b2y1",700,500); 
   step_b2y1_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b2y1_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y1_arc-> SetTitle("arc_step_B2Y1");
   step_b2y1_arc->SetMarkerStyle(21);
   step_b2y1_arc->SetMarkerSize(1.5);
   c_arc_b2y1 -> Divide(1,2);
   c_arc_b2y1 -> cd(1);
   c_arc_b2y1 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y1_arc->Draw("ap");
   step_b2y1_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y1_arc -> Write();

   TF1 *fit_func_arc_b2y1 = step_b2y1_arc->GetFunction("gaus");
   double gauss_mean_arc_b2y1 =  fit_func_arc_b2y1->GetParameter(1);
   double gauss_err_arc_b2y1 =  fit_func_arc_b2y1->GetParError(1);   
   float fit_value_arc_b2y1[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b2y1[i] = fit_func_arc_b2y1 -> Eval(nomPos_arc_b2y1[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b2y1_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b2y1_arc_residual -> SetPoint(i, nomPos_arc_b2y1[i], num_vtx_b2y1_plots[i] - fit_value_arc_b2y1[i] );
    step_b2y1_arc_residual -> SetPointError(i, 0.0,  num_vtx_b2y1_err[i]);
    }
  c_arc_b2y1 -> cd(2);
  c_arc_b2y1 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y1_arc_residual -> Draw("PA");
  step_b2y1_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y1_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y1_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y1_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y1_arc_residual -> SetMarkerStyle(21);
  step_b2y1_arc_residual -> SetMarkerSize(1.5);
  step_b2y1_arc_residual -> SetTitle("");
  step_b2y1_arc_residual -> Write();
  

  TLine *line_arc_b2y1 = new TLine(c_arc_b2y1 -> cd(2) -> GetUxmin(), 0.0, c_arc_b2y1 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b2y1 -> SetLineColor(14);
  line_arc_b2y1 -> SetLineStyle(3);
  line_arc_b2y1 -> Draw();
  c_arc_b2y1 -> Update(); 
  //c_arc_b2y1 -> SaveAs("arc_step_b2y1.root");
  c_arc_b2y1 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b2y2 = new TCanvas("c_arc_b2y2","arc_step_b2y2",700,500); 
   step_b2y2_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b2y2_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y2_arc-> SetTitle("arc_step_B2Y2");
   step_b2y2_arc->SetMarkerStyle(21);
   step_b2y2_arc->SetMarkerSize(1.5);
   c_arc_b2y2 -> Divide(1,2);
   c_arc_b2y2 -> cd(1);
   c_arc_b2y2 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y2_arc->Draw("ap");
   step_b2y2_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y2_arc -> Write();

   TF1 *fit_func_arc_b2y2 = step_b2y2_arc->GetFunction("gaus");
   double gauss_mean_arc_b2y2 =  fit_func_arc_b2y2->GetParameter(1);
   double gauss_err_arc_b2y2 =  fit_func_arc_b2y2->GetParError(1);   
   float fit_value_arc_b2y2[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b2y2[i] = fit_func_arc_b2y2 -> Eval(nomPos_arc_b2y2[i]);
    cout << "fit values b2y2 av" << i << fit_value_arc_b2y2[i] << endl;
    //step_b2y2_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b2y2_arc_residual -> SetPoint(i, nomPos_arc_b2y2[i], num_vtx_b2y2_plots[i] - fit_value_arc_b2y2[i] );
    step_b2y2_arc_residual -> SetPointError(i, 0.0,  num_vtx_b2y2_err[i]);
    }
  c_arc_b2y2 -> cd(2);
  c_arc_b2y2 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y2_arc_residual -> Draw("PA");
  step_b2y2_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y2_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y2_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y2_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y2_arc_residual -> SetMarkerStyle(21);
  step_b2y2_arc_residual -> SetMarkerSize(1.5);
  step_b2y2_arc_residual -> SetTitle("");
  step_b2y2_arc_residual -> Write();

  TLine *line_arc_b2y2 = new TLine(c_arc_b2y2 -> cd(2) -> GetUxmin(), 0.0, c_arc_b2y2 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b2y2 -> SetLineColor(14);
  line_arc_b2y2 -> SetLineStyle(3);
  line_arc_b2y2 -> Draw();
  c_arc_b2y2 -> Update(); 
  //c_arc_b2y2 -> SaveAs("arc_step_b2y2.root");
  c_arc_b2y2 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  TCanvas* c_arc_b2y3 = new TCanvas("c_arc_b2y3","arc_step_b2y3",700,500); 
   step_b2y3_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b2y3_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y3_arc-> SetTitle("arc_step_B2Y3");
   step_b2y3_arc->SetMarkerStyle(21);
   step_b2y3_arc->SetMarkerSize(1.5);
   c_arc_b2y3 -> Divide(1,2);
   c_arc_b2y3 -> cd(1);
   c_arc_b2y3 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y3_arc->Draw("ap");
   step_b2y3_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y3_arc -> Write();

   TF1 *fit_func_arc_b2y3 = step_b2y3_arc->GetFunction("gaus");
   double gauss_mean_arc_b2y3 =  fit_func_arc_b2y3->GetParameter(1);
   double gauss_err_arc_b2y3 =  fit_func_arc_b2y3->GetParError(1);   
   float fit_value_arc_b2y3[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b2y3[i] = fit_func_arc_b2y3 -> Eval(nomPos_arc_b2y3[i]);
    cout << "fit values b2y3 av" << i << fit_value_arc_b2y3[i] << endl;
    //step_b2y3_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b2y3_arc_residual -> SetPoint(i, nomPos_arc_b2y3[i], num_vtx_b2y3_plots[i] - fit_value_arc_b2y3[i] );
    step_b2y3_arc_residual -> SetPointError(i, 0.0,  num_vtx_b2y3_err[i]);
    }
  
  c_arc_b2y3 -> cd(2);
  c_arc_b2y3 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y3_arc_residual -> Draw("PA");
  step_b2y3_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y3_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y3_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y3_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y3_arc_residual -> SetMarkerStyle(21);
  step_b2y3_arc_residual -> SetMarkerSize(1.5);
  step_b2y3_arc_residual -> SetTitle("");
  step_b2y3_arc_residual -> Write();
  

  TLine *line_arc_b2y3 = new TLine(c_arc_b2y3 -> cd(2) -> GetUxmin(), 0.0, c_arc_b2y3 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b2y3 -> SetLineColor(14);
  line_arc_b2y3 -> SetLineStyle(3);
  line_arc_b2y3 -> Draw();
  c_arc_b2y3 -> Update(); 
  //c_arc_b2y3 -> SaveAs("arc_step_b2y3.root");
  
  c_arc_b2y3 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");
  
   

  TCanvas* c_arc_b2y4 = new TCanvas("c_arc_b2y4","arc_step_b2y4",700,500); 
   step_b2y4_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b2y4_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y4_arc-> SetTitle("arc_step_B2Y4");
   step_b2y4_arc->SetMarkerStyle(21);
   step_b2y4_arc->SetMarkerSize(1.5);
   c_arc_b2y4 -> Divide(1,2);
   c_arc_b2y4 -> cd(1);
   c_arc_b2y4 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y4_arc->Draw("ap");
   step_b2y4_arc->Fit("gaus");
   gStyle -> SetOptFit(1111);
   step_b2y4_arc -> Write();

   TF1 *fit_func_arc_b2y4 = step_b2y4_arc->GetFunction("gaus");
   double gauss_mean_arc_b2y4 =  fit_func_arc_b2y4->GetParameter(1);
   double gauss_err_arc_b2y4 =  fit_func_arc_b2y4->GetParError(1);   
   float fit_value_arc_b2y4[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b2y4[i] = fit_func_arc_b2y4 -> Eval(nomPos_arc_b2y4[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b2y4_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b2y4_arc_residual -> SetPoint(i, nomPos_arc_b2y4[i], num_vtx_b2y4_plots[i] - fit_value_arc_b2y4[i] );
    step_b2y4_arc_residual -> SetPointError(i, 0.0,  num_vtx_b2y4_err[i]);
    }
  c_arc_b2y4 -> cd(2);
  c_arc_b2y4 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y4_arc_residual -> Draw("PA");
  step_b2y4_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y4_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y4_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y4_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y4_arc_residual -> SetMarkerStyle(21);
  step_b2y4_arc_residual -> SetMarkerSize(1.5);
  step_b2y4_arc_residual -> SetTitle("");
  step_b2y4_arc_residual -> Write();
  

  TLine *line_arc_b2y4 = new TLine(c_arc_b2y4 -> cd(2) -> GetUxmin(), 0.0, c_arc_b2y4 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b2y4 -> SetLineColor(14);
  line_arc_b2y4 -> SetLineStyle(3);
  line_arc_b2y4 -> Draw();
  c_arc_b2y4 -> Update(); 
  //c_arc_b2y4 -> SaveAs("arc_step_b2y4.root");
  c_arc_b2y4 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf(");

  
  TCanvas* c_arc_b2y5 = new TCanvas("c_arc_b2y5","arc_step_b2y5",700,500); 
   step_b2y5_arc->GetXaxis()->SetTitle("arc b1 - b2 (micro)");
   step_b2y5_arc->GetYaxis()->SetTitle("num_vtx  / num_events * N1 * N2 ");
   step_b2y5_arc-> SetTitle("arc_step_B2Y5");
   step_b2y5_arc->SetMarkerStyle(21);
   step_b2y5_arc->SetMarkerSize(1.5);
   c_arc_b2y5 -> Divide(1,2);
   c_arc_b2y5 -> cd(1);
   c_arc_b2y5 -> cd(1) -> SetPad(0,0.3,1.0,1.0) ;
   step_b2y5_arc->Draw("ap");
   step_b2y5_arc->Fit("gaus"); 
   gStyle -> SetOptFit(1111);
   step_b2y5_arc -> Write();

   TF1 *fit_func_arc_b2y5 = step_b2y5_arc->GetFunction("gaus");
   double gauss_mean_arc_b2y5 =  fit_func_arc_b2y5->GetParameter(1);
   double gauss_err_arc_b2y5 =  fit_func_arc_b2y5->GetParError(1);
   cout << "gauss_mean_arc_b2y5=  " << gauss_mean_arc_b2y5 << "    gauss_err_arc_b2y5=  " << gauss_err_arc_b2y5 << endl; 
   float fit_value_arc_b2y5[3];
   for (int i=0 ; i<3 ; i++){
    fit_value_arc_b2y5[i] = fit_func_arc_b2y5 -> Eval(nomPos_arc_b2y5[i]);
    //cout << "fit values av" << i << fit_value_arc[i] << endl;
    //step_b2y5_arc_residual -> Fill(nomPos_arc[j], num_vtx_perstep[j] - fit_value_arc[j] );
    step_b2y5_arc_residual -> SetPoint(i, nomPos_arc_b2y5[i], num_vtx_b2y5_plots[i] - fit_value_arc_b2y5[i] );
    step_b2y5_arc_residual -> SetPointError(i, 0.0,  num_vtx_b2y5_err[i]);
    }
  c_arc_b2y5 -> cd(2);
  c_arc_b2y5 -> cd(2) -> SetPad(0,0,1.0,0.3);
  step_b2y5_arc_residual -> Draw("PA");
  step_b2y5_arc_residual -> GetYaxis()->SetTitle("data - fit");
  step_b2y5_arc_residual -> GetYaxis()->SetLabelSize(0.07);
  step_b2y5_arc_residual -> GetYaxis()->SetTitleSize(0.07);
  step_b2y5_arc_residual -> GetYaxis()->SetTitleOffset(0.5);
  step_b2y5_arc_residual -> SetMarkerStyle(21);
  step_b2y5_arc_residual -> SetMarkerSize(1.5);
  step_b2y5_arc_residual -> SetTitle("");
  step_b2y5_arc_residual -> Write();
  

  TLine *line_arc_b2y5 = new TLine(c_arc_b2y5 -> cd(2) -> GetUxmin(), 0.0, c_arc_b2y5 -> cd(2)-> GetUxmax(), 0.0);
  line_arc_b2y5 -> SetLineColor(14);
  line_arc_b2y5 -> SetLineStyle(3);
  line_arc_b2y5 -> Draw();
  c_arc_b2y5 -> Update(); 
  //c_arc_b2y5 -> SaveAs("arc_step_b2y5.root");
  c_arc_b2y5 -> SaveAs("num_vtx_all_dividedby_events_arc.pdf)");
  
  ofstream myfile;
  myfile.open ("gauss_mean_err_arc.txt");
  myfile << "begin with:  b1y , b1x , b2y , b2x .\n";
  
  myfile <<  gauss_mean_arc_b1y1 << " , " << gauss_err_arc_b1y1 << endl;
  myfile <<  gauss_mean_arc_b1y2 << " , " << gauss_err_arc_b1y2 << endl;
  myfile <<  gauss_mean_arc_b1y3 << " , " << gauss_err_arc_b1y3 << endl;
  myfile <<  gauss_mean_arc_b1y4 << " , " << gauss_err_arc_b1y4 << endl;
  myfile <<  gauss_mean_arc_b1y5 << " , " << gauss_err_arc_b1y5 << endl;
  
  myfile <<  gauss_mean_arc_b1x1 << " , " << gauss_err_arc_b1x1 << endl;
  myfile <<  gauss_mean_arc_b1x2 << " , " << gauss_err_arc_b1x2 << endl;
  myfile <<  gauss_mean_arc_b1x3 << " , " << gauss_err_arc_b1x3 << endl;
  myfile <<  gauss_mean_arc_b1x4 << " , " << gauss_err_arc_b1x4 << endl;
  myfile <<  gauss_mean_arc_b1x5 << " , " << gauss_err_arc_b1x5 << endl;
  
  myfile <<  gauss_mean_arc_b2y1 << " , " << gauss_err_arc_b2y1 << endl;
  myfile <<  gauss_mean_arc_b2y2 << " , " << gauss_err_arc_b2y2 << endl;
  myfile <<  gauss_mean_arc_b2y3 << " , " << gauss_err_arc_b2y3 << endl;
  myfile <<  gauss_mean_arc_b2y4 << " , " << gauss_err_arc_b2y4 << endl;
  myfile <<  gauss_mean_arc_b2y5 << " , " << gauss_err_arc_b2y5 << endl;
  
  myfile <<  gauss_mean_arc_b2x1 << " , " << gauss_err_arc_b2x1 << endl;
  myfile <<  gauss_mean_arc_b2x2 << " , " << gauss_err_arc_b2x2 << endl;
  myfile <<  gauss_mean_arc_b2x3 << " , " << gauss_err_arc_b2x3 << endl;
  myfile <<  gauss_mean_arc_b2x4 << " , " << gauss_err_arc_b2x4 << endl;
  myfile <<  gauss_mean_arc_b2x5 << " , " << gauss_err_arc_b2x5 << endl;
  

  myfile.close();


  gSystem->Exec("date");
  f->Close();
}


