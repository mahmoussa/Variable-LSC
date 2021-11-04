{
   TFile *f = new TFile ("plots_old_data.root", "recreate");
   TChain *chain = new TChain ("pccminitree");
   for (int i = 1 ; i < 9 ; i++){
   //form to add trees from different directories//./
    chain->Add(Form ("bias_%d/pcc_Data_PixVtx_Event_90X_*.root",i));
   }
   
  chain->SetBranchStatus("*",0);
  chain->SetBranchStatus("timeStamp_begin",1);
  chain->SetBranchStatus("run",1);
  chain->SetBranchStatus("nVtx",1);
  chain->SetBranchStatus("vtx_isGood",1);
  gSystem->Exec("date");


  Int_t nentries = chain->GetEntries();
  cout << nentries << endl;
  
  UInt_t TimestambBegin;
  Int_t Run;
  
  Int_t vtxisgood[104507304]={0};
  Double_t numvtx;

  //for (int j=0 ; j <=nentries ; j++){numvtx[j]=0;}

  chain->SetBranchAddress("run",&Run);
  chain->SetBranchAddress("timeStamp_begin",&TimestambBegin);
  chain->SetBranchAddress("nVtx",&numvtx);
  chain->SetBranchAddress("vtx_isGood",vtxisgood);


  int time_b1y1[3][2] = {{1530417492 , 1530417537}, {1530417562 , 1530417607}, {1530417633 , 1530417677}}; 
  int time_b1y2[3][2] = {{1530417706 , 1530417751}, {1530417778 , 1530417821}, {1530417847 , 1530417893}};
  int time_b1y3[3][2] = {{1530417920 , 1530417965}, {1530417992 , 1530418035}, {1530418062 , 1530418107}};
  int time_b1y4[3][2] = {{1530418135 , 1530418180}, {1530418204 , 1530418250}, {1530418276 , 1530418321}};
  int time_b1y5[3][2] = {{1530418349 , 1530418394}, {1530418419 , 1530418464}, {1530418490 , 1530418534}};

  int time_b1x1[3][2] = {{1530418959 , 1530419004}, {1530419030 , 1530419076}, { 1530419103, 1530419147}};
  int time_b1x2[3][2] = {{1530419175 , 1530419220}, {1530419248 , 1530419291}, { 1530419319, 1530419364}};
  int time_b1x3[3][2] = {{1530419392 , 1530419436}, {1530419463 , 1530419507}, {1530419535 , 1530419580}};
  int time_b1x4[3][2] = {{1530419606 , 1530419651}, { 1530419677, 1530419723}, {1530419750 , 1530419795}};
  int time_b1x5[3][2] = {{1530419822 , 1530419867}, {1530419894 , 1530419938}, {1530419967 , 1530420011}};

  int time_b2y1[3][2] = {{1530420649 , 1530420694}, {1530420723 , 1530420767}, {1530420796 , 1530420840}};
  int time_b2y2[3][2] = {{1530420869 , 1530420914}, {1530420942 , 1530420987}, {1530421016 , 1530421060}};
  int time_b2y3[3][2] = {{1530421089 , 1530421133}, {1530421162 , 1530421206}, {1530421235 , 1530421279}};
  int time_b2y4[3][2] = {{1530421308 , 1530421353}, {1530421381 , 1530421426}, {1530421453 , 1530421499}};
  int time_b2y5[3][2] = {{1530421526 , 1530421571}, {1530421599 , 1530421644}, {1530421672 , 1530421717}};
 
  int time_b2x1[3][2] = {{1530422217 , 1530422261}, {1530422287 , 1530422332}, {1530422357 , 1530422402}};
  int time_b2x2[3][2] = {{1530422428 , 1530422473}, {1530422498 , 1530422543}, {1530422568 , 1530422612}};
  int time_b2x3[3][2] = {{1530422639 , 1530422683}, {1530422708 , 1530422753}, {1530422778 , 1530422823}};
  int time_b2x4[3][2] = {{1530422849 , 1530422894}, {1530422919 , 1530422963}, {1530422988 , 1530423033}};
  int time_b2x5[3][2] = {{1530423060 , 1530423104}, { 1530423129, 1530423174}, {1530423199 , 1530423243}};
  //double  lumi = 8.0e+30; //lumi in cm2 . sec-1

  float intensity_b1y1[3][2]={{10204368043478.3,10505275652173.9},{10203182826087.0,10504869565217.4},{10202569333333.3,10504888444444.4}};
  float intensity_b1y2[3][2]={{10201950434782.6,10504238695652.2},{10201452727272.7,10503756590909.1},{10200878510638.3,10503657021276.6}};
  float intensity_b1y3[3][2]={{10200282826087.0,10503053043478.3},{10200091136363.6,10502596590909.1},{10199543043478.3,10502180434782.6}};
  float intensity_b1y4[3][2]={{10198871304347.8,10501650652173.9},{10198373404255.3,10501509574468.1},{10197624565217.4,10501313260869.6}};
  float intensity_b1y5[3][2]={{10196576304347.8,10500770652173.9},{10196805217391.3,10500215000000.0},{10196193333333.3,10499649333333.3}};

  float intensity_b1x1[3][2]={{10191307678571.4,10497385535714.3},{10191381702127.7,10497025744680.9},{10190993111111.1,10496561111111.1}};
  float intensity_b1x2[3][2]={{10189737608695.7,10496275000000.0},{10189114772727.3,10495722727272.7},{10188540869565.2,10496106956521.7}};
  float intensity_b1x3[3][2]={{10187406888888.9,10495318888888.9},{10187642888888.9,10495177555555.6},{10186918695652.2,10494753695652.2}};
  float intensity_b1x4[3][2]={{10186149782608.7,10494556304347.8},{10185795744680.9,10494245531914.9},{10184837391304.3,10493588913043.5}};
  float intensity_b1x5[3][2]={{10184375652173.9,10493247826087.0},{10183902222222.2,10492942444444.4},{10183529333333.3,10492602000000.0}};

  float intensity_b2y1[3][2]={{10177931304347.8,10488626956521.7},{10177136444444.4,10488110222222.2},{10176010888888.9,10487797111111.1}};
  float intensity_b2y2[3][2]={{10175054565217.4,10487382173913.0},{10174300217391.3,10486925652173.9},{10173604666666.7,10486580888888.9}};
  float intensity_b2y3[3][2]={{10173329333333.3,10486068666666.7},{10172686222222.2,10485901777777.8},{10172182222222.2,10485044222222.2}};
  float intensity_b2y4[3][2]={{10171246086956.5,10484632173913.0},{10170593695652.2,10484117391304.3},{10170531914893.6,10483701914893.6}};
  float intensity_b2y5[3][2]={{10169662173913.0,10483275869565.2},{10168921956521.7,10482800000000.0},{10168129565217.4,10482401739130.4}};
 
  float intensity_b2x1[3][2]={{10161689777777.8,10479144000000.0},{10161088260869.6,10478594565217.4},{10159856521739.1,10478128043478.3}};
  float intensity_b2x2[3][2]={{10159701521739.1,10477424782608.7},{10159184782608.7,10477243913043.5},{10158080666666.7,10477204666666.7}};
  float intensity_b2x3[3][2]={{10157704444444.4,10476909777777.8},{10156937173913.0,10476383043478.3},{10156385652173.9,10475961086956.5}};
  float intensity_b2x4[3][2]={{10156230500000.0,10475825500000.0},{10155207777777.8,10475791555555.6},{10154019782608.7,10475439782608.7}};
  float intensity_b2x5[3][2]={{10153742888888.9,10474973777777.8},{10152643913043.5,10474834782608.7},{10152064666666.7,10474178666666.7}};


   float num_vtx_b1y1[] = {0.0, 0.0, 0.0};
   float num_vtx_b1y2[] = {0.0, 0.0, 0.0};
   float num_vtx_b1y3[] = {0.0, 0.0, 0.0};
   float num_vtx_b1y4[] = {0.0, 0.0, 0.0};
   float num_vtx_b1y5[] = {0.0, 0.0, 0.0};

   float num_vtx_b1x1[] = {0.0, 0.0, 0.0};
   float num_vtx_b1x2[] = {0.0, 0.0, 0.0};
   float num_vtx_b1x3[] = {0.0, 0.0, 0.0};
   float num_vtx_b1x4[] = {0.0, 0.0, 0.0};
   float num_vtx_b1x5[] = {0.0, 0.0, 0.0};

   float num_vtx_b2y1[] = {0.0, 0.0, 0.0};
   float num_vtx_b2y2[] = {0.0, 0.0, 0.0};
   float num_vtx_b2y3[] = {0.0, 0.0, 0.0};
   float num_vtx_b2y4[] = {0.0, 0.0, 0.0};
   float num_vtx_b2y5[] = {0.0, 0.0, 0.0};

   float num_vtx_b2x1[] = {0.0, 0.0, 0.0};
   float num_vtx_b2x2[] = {0.0, 0.0, 0.0};
   float num_vtx_b2x3[] = {0.0, 0.0, 0.0};
   float num_vtx_b2x4[] = {0.0, 0.0, 0.0};
   float num_vtx_b2x5[] = {0.0, 0.0, 0.0};

   float num_event_b1y1[] = {0.0, 0.0, 0.0};
   float num_event_b1y2[] = {0.0, 0.0, 0.0};
   float num_event_b1y3[] = {0.0, 0.0, 0.0};
   float num_event_b1y4[] = {0.0, 0.0, 0.0};
   float num_event_b1y5[] = {0.0, 0.0, 0.0};

   float num_event_b1x1[] = {0.0, 0.0, 0.0};
   float num_event_b1x2[] = {0.0, 0.0, 0.0};
   float num_event_b1x3[] = {0.0, 0.0, 0.0};
   float num_event_b1x4[] = {0.0, 0.0, 0.0};
   float num_event_b1x5[] = {0.0, 0.0, 0.0};

   float num_event_b2y1[] = {0.0, 0.0, 0.0};
   float num_event_b2y2[] = {0.0, 0.0, 0.0};
   float num_event_b2y3[] = {0.0, 0.0, 0.0};
   float num_event_b2y4[] = {0.0, 0.0, 0.0};
   float num_event_b2y5[] = {0.0, 0.0, 0.0};

   float num_event_b2x1[] = {0.0, 0.0, 0.0};
   float num_event_b2x2[] = {0.0, 0.0, 0.0};
   float num_event_b2x3[] = {0.0, 0.0, 0.0};
   float num_event_b2x4[] = {0.0, 0.0, 0.0};
   float num_event_b2x5[] = {0.0, 0.0, 0.0};


  
   for (Int_t i=0 ; i < nentries ; i++){ 
    chain->GetEntry(i); 
    if (*vtxisgood != 1 ) { continue;}
    if ( Run != 319019) { continue;}
    
    if (TimestambBegin>= time_b1y1[0][0] && TimestambBegin<= time_b1y1[0][1]) { num_vtx_b1y1[0] = num_vtx_b1y1[0] + numvtx; num_event_b1y1[0] = num_event_b1y1[0] + 1;}
    if (TimestambBegin>= time_b1y1[1][0] && TimestambBegin<= time_b1y1[1][1]) { num_vtx_b1y1[1] = num_vtx_b1y1[1] + numvtx; num_event_b1y1[1] = num_event_b1y1[1] + 1;}
    if (TimestambBegin>= time_b1y1[2][0] && TimestambBegin<= time_b1y1[2][1]) { num_vtx_b1y1[2] = num_vtx_b1y1[2] + numvtx; num_event_b1y1[2] = num_event_b1y1[2] + 1;}

    if (TimestambBegin>= time_b1y2[0][0] && TimestambBegin<= time_b1y2[0][1]) { num_vtx_b1y2[0] = num_vtx_b1y2[0] + numvtx; num_event_b1y2[0] = num_event_b1y2[0] + 1;}
    if (TimestambBegin>= time_b1y2[1][0] && TimestambBegin<= time_b1y2[1][1]) { num_vtx_b1y2[1] = num_vtx_b1y2[1] + numvtx; num_event_b1y2[1] = num_event_b1y2[1] + 1;}
    if (TimestambBegin>= time_b1y2[2][0] && TimestambBegin<= time_b1y2[2][1]) { num_vtx_b1y2[2] = num_vtx_b1y2[2] + numvtx; num_event_b1y2[2] = num_event_b1y2[2] + 1;}
  
    if (TimestambBegin>= time_b1y3[0][0] && TimestambBegin<= time_b1y3[0][1]) { num_vtx_b1y3[0] = num_vtx_b1y3[0] + numvtx; num_event_b1y3[0] = num_event_b1y3[0] + 1;}
    if (TimestambBegin>= time_b1y3[1][0] && TimestambBegin<= time_b1y3[1][1]) { num_vtx_b1y3[1] = num_vtx_b1y3[1] + numvtx; num_event_b1y3[1] = num_event_b1y3[1] + 1;}
    if (TimestambBegin>= time_b1y3[2][0] && TimestambBegin<= time_b1y3[2][1]) { num_vtx_b1y3[2] = num_vtx_b1y3[2] + numvtx; num_event_b1y3[2] = num_event_b1y3[2] + 1;}

    if (TimestambBegin>= time_b1y4[0][0] && TimestambBegin<= time_b1y4[0][1]) { num_vtx_b1y4[0] = num_vtx_b1y4[0] + numvtx; num_event_b1y4[0] = num_event_b1y4[0] + 1;}
    if (TimestambBegin>= time_b1y4[1][0] && TimestambBegin<= time_b1y4[1][1]) { num_vtx_b1y4[1] = num_vtx_b1y4[1] + numvtx; num_event_b1y4[1] = num_event_b1y4[1] + 1;}
    if (TimestambBegin>= time_b1y4[2][0] && TimestambBegin<= time_b1y4[2][1]) { num_vtx_b1y4[2] = num_vtx_b1y4[2] + numvtx; num_event_b1y4[2] = num_event_b1y4[2] + 1;}

    if (TimestambBegin>= time_b1y5[0][0] && TimestambBegin<= time_b1y5[0][1]) { num_vtx_b1y5[0] = num_vtx_b1y5[0] + numvtx; num_event_b1y5[0] = num_event_b1y5[0] + 1;}
    if (TimestambBegin>= time_b1y5[1][0] && TimestambBegin<= time_b1y5[1][1]) { num_vtx_b1y5[1] = num_vtx_b1y5[1] + numvtx; num_event_b1y5[1] = num_event_b1y5[1] + 1;}
    if (TimestambBegin>= time_b1y5[2][0] && TimestambBegin<= time_b1y5[2][1]) { num_vtx_b1y5[2] = num_vtx_b1y5[2] + numvtx; num_event_b1y5[2] = num_event_b1y5[2] + 1;}

    if (TimestambBegin>= time_b1x1[0][0] && TimestambBegin<= time_b1x1[0][1]) { num_vtx_b1x1[0] = num_vtx_b1x1[0] + numvtx; num_event_b1x1[0] = num_event_b1x1[0] + 1;}
    if (TimestambBegin>= time_b1x1[1][0] && TimestambBegin<= time_b1x1[1][1]) { num_vtx_b1x1[1] = num_vtx_b1x1[1] + numvtx; num_event_b1x1[1] = num_event_b1x1[1] + 1;}
    if (TimestambBegin>= time_b1x1[2][0] && TimestambBegin<= time_b1x1[2][1]) { num_vtx_b1x1[2] = num_vtx_b1x1[2] + numvtx; num_event_b1x1[2] = num_event_b1x1[2] + 1;}

    if (TimestambBegin>= time_b1x2[0][0] && TimestambBegin<= time_b1x2[0][1]) { num_vtx_b1x2[0] = num_vtx_b1x2[0] + numvtx; num_event_b1x2[0] = num_event_b1x2[0] + 1;}
    if (TimestambBegin>= time_b1x2[1][0] && TimestambBegin<= time_b1x2[1][1]) { num_vtx_b1x2[1] = num_vtx_b1x2[1] + numvtx; num_event_b1x2[1] = num_event_b1x2[1] + 1;}
    if (TimestambBegin>= time_b1x2[2][0] && TimestambBegin<= time_b1x2[2][1]) { num_vtx_b1x2[2] = num_vtx_b1x2[2] + numvtx; num_event_b1x2[2] = num_event_b1x2[2] + 1;}

    if (TimestambBegin>= time_b1x3[0][0] && TimestambBegin<= time_b1x3[0][1]) { num_vtx_b1x3[0] = num_vtx_b1x3[0] + numvtx; num_event_b1x3[0] = num_event_b1x3[0] + 1;}
    if (TimestambBegin>= time_b1x3[1][0] && TimestambBegin<= time_b1x3[1][1]) { num_vtx_b1x3[1] = num_vtx_b1x3[1] + numvtx; num_event_b1x3[1] = num_event_b1x3[1] + 1;}
    if (TimestambBegin>= time_b1x3[2][0] && TimestambBegin<= time_b1x3[2][1]) { num_vtx_b1x3[2] = num_vtx_b1x3[2] + numvtx; num_event_b1x3[2] = num_event_b1x3[2] + 1;}

    if (TimestambBegin>= time_b1x4[0][0] && TimestambBegin<= time_b1x4[0][1]) { num_vtx_b1x4[0] = num_vtx_b1x4[0] + numvtx; num_event_b1x4[0] = num_event_b1x4[0] + 1;}
    if (TimestambBegin>= time_b1x4[1][0] && TimestambBegin<= time_b1x4[1][1]) { num_vtx_b1x4[1] = num_vtx_b1x4[1] + numvtx; num_event_b1x4[1] = num_event_b1x4[1] + 1;}
    if (TimestambBegin>= time_b1x4[2][0] && TimestambBegin<= time_b1x4[2][1]) { num_vtx_b1x4[2] = num_vtx_b1x4[2] + numvtx; num_event_b1x4[2] = num_event_b1x4[2] + 1;}

    if (TimestambBegin>= time_b1x5[0][0] && TimestambBegin<= time_b1x5[0][1]) { num_vtx_b1x5[0] = num_vtx_b1x5[0] + numvtx; num_event_b1x5[0] = num_event_b1x5[0] + 1;}
    if (TimestambBegin>= time_b1x5[1][0] && TimestambBegin<= time_b1x5[1][1]) { num_vtx_b1x5[1] = num_vtx_b1x5[1] + numvtx; num_event_b1x5[1] = num_event_b1x5[1] + 1;}
    if (TimestambBegin>= time_b1x5[2][0] && TimestambBegin<= time_b1x5[2][1]) { num_vtx_b1x5[2] = num_vtx_b1x5[2] + numvtx; num_event_b1x5[2] = num_event_b1x5[2] + 1;}

    if (TimestambBegin>= time_b2y1[0][0] && TimestambBegin<= time_b2y1[0][1]) { num_vtx_b2y1[0] = num_vtx_b2y1[0] + numvtx; num_event_b2y1[0] = num_event_b2y1[0] + 1;}
    if (TimestambBegin>= time_b2y1[1][0] && TimestambBegin<= time_b2y1[1][1]) { num_vtx_b2y1[1] = num_vtx_b2y1[1] + numvtx; num_event_b2y1[1] = num_event_b2y1[1] + 1;}
    if (TimestambBegin>= time_b2y1[2][0] && TimestambBegin<= time_b2y1[2][1]) { num_vtx_b2y1[2] = num_vtx_b2y1[2] + numvtx; num_event_b2y1[2] = num_event_b2y1[2] + 1;}

    if (TimestambBegin>= time_b2y2[0][0] && TimestambBegin<= time_b2y2[0][1]) { num_vtx_b2y2[0] = num_vtx_b2y2[0] + numvtx; num_event_b2y2[0] = num_event_b2y2[0] + 1;}
    if (TimestambBegin>= time_b2y2[1][0] && TimestambBegin<= time_b2y2[1][1]) { num_vtx_b2y2[1] = num_vtx_b2y2[1] + numvtx; num_event_b2y2[1] = num_event_b2y2[1] + 1;}
    if (TimestambBegin>= time_b2y2[2][0] && TimestambBegin<= time_b2y2[2][1]) { num_vtx_b2y2[2] = num_vtx_b2y2[2] + numvtx; num_event_b2y2[2] = num_event_b2y2[2] + 1;}

    if (TimestambBegin>= time_b2y3[0][0] && TimestambBegin<= time_b2y3[0][1]) { num_vtx_b2y3[0] = num_vtx_b2y3[0] + numvtx; num_event_b2y3[0] = num_event_b2y3[0] + 1;}
    if (TimestambBegin>= time_b2y3[1][0] && TimestambBegin<= time_b2y3[1][1]) { num_vtx_b2y3[1] = num_vtx_b2y3[1] + numvtx; num_event_b2y3[1] = num_event_b2y3[1] + 1;}
    if (TimestambBegin>= time_b2y3[2][0] && TimestambBegin<= time_b2y3[2][1]) { num_vtx_b2y3[2] = num_vtx_b2y3[2] + numvtx; num_event_b2y3[2] = num_event_b2y3[2] + 1;}

    if (TimestambBegin>= time_b2y4[0][0] && TimestambBegin<= time_b2y4[0][1]) { num_vtx_b2y4[0] = num_vtx_b2y4[0] + numvtx; num_event_b2y4[0] = num_event_b2y4[0] + 1;}
    if (TimestambBegin>= time_b2y4[1][0] && TimestambBegin<= time_b2y4[1][1]) { num_vtx_b2y4[1] = num_vtx_b2y4[1] + numvtx; num_event_b2y4[1] = num_event_b2y4[1] + 1;}
    if (TimestambBegin>= time_b2y4[2][0] && TimestambBegin<= time_b2y4[2][1]) { num_vtx_b2y4[2] = num_vtx_b2y4[2] + numvtx; num_event_b2y4[2] = num_event_b2y4[2] + 1;}

    if (TimestambBegin>= time_b2y5[0][0] && TimestambBegin<= time_b2y5[0][1]) { num_vtx_b2y5[0] = num_vtx_b2y5[0] + numvtx; num_event_b2y5[0] = num_event_b2y5[0] + 1;}
    if (TimestambBegin>= time_b2y5[1][0] && TimestambBegin<= time_b2y5[1][1]) { num_vtx_b2y5[1] = num_vtx_b2y5[1] + numvtx; num_event_b2y5[1] = num_event_b2y5[1] + 1;}
    if (TimestambBegin>= time_b2y5[2][0] && TimestambBegin<= time_b2y5[2][1]) { num_vtx_b2y5[2] = num_vtx_b2y5[2] + numvtx; num_event_b2y5[2] = num_event_b2y5[2] + 1;}

    if (TimestambBegin>= time_b2x1[0][0] && TimestambBegin<= time_b2x1[0][1]) { num_vtx_b2x1[0] = num_vtx_b2x1[0] + numvtx; num_event_b2x1[0] = num_event_b2x1[0] + 1;}
    if (TimestambBegin>= time_b2x1[1][0] && TimestambBegin<= time_b2x1[1][1]) { num_vtx_b2x1[1] = num_vtx_b2x1[1] + numvtx; num_event_b2x1[1] = num_event_b2x1[1] + 1;}
    if (TimestambBegin>= time_b2x1[2][0] && TimestambBegin<= time_b2x1[2][1]) { num_vtx_b2x1[2] = num_vtx_b2x1[2] + numvtx; num_event_b2x1[2] = num_event_b2x1[2] + 1;}

    if (TimestambBegin>= time_b2x2[0][0] && TimestambBegin<= time_b2x2[0][1]) { num_vtx_b2x2[0] = num_vtx_b2x2[0] + numvtx; num_event_b2x2[0] = num_event_b2x2[0] + 1;}
    if (TimestambBegin>= time_b2x2[1][0] && TimestambBegin<= time_b2x2[1][1]) { num_vtx_b2x2[1] = num_vtx_b2x2[1] + numvtx; num_event_b2x2[1] = num_event_b2x2[1] + 1;}
    if (TimestambBegin>= time_b2x2[2][0] && TimestambBegin<= time_b2x2[2][1]) { num_vtx_b2x2[2] = num_vtx_b2x2[2] + numvtx; num_event_b2x2[2] = num_event_b2x2[2] + 1;}
    
    if (TimestambBegin>= time_b2x3[0][0] && TimestambBegin<= time_b2x3[0][1]) { num_vtx_b2x3[0] = num_vtx_b2x3[0] + numvtx; num_event_b2x3[0] = num_event_b2x3[0] + 1;}
    if (TimestambBegin>= time_b2x3[1][0] && TimestambBegin<= time_b2x3[1][1]) { num_vtx_b2x3[1] = num_vtx_b2x3[1] + numvtx; num_event_b2x3[1] = num_event_b2x3[1] + 1;}
    if (TimestambBegin>= time_b2x3[2][0] && TimestambBegin<= time_b2x3[2][1]) { num_vtx_b2x3[2] = num_vtx_b2x3[2] + numvtx; num_event_b2x3[2] = num_event_b2x3[2] + 1;}

    if (TimestambBegin>= time_b2x4[0][0] && TimestambBegin<= time_b2x4[0][1]) { num_vtx_b2x4[0] = num_vtx_b2x4[0] + numvtx; num_event_b2x4[0] = num_event_b2x4[0] + 1;}
    if (TimestambBegin>= time_b2x4[1][0] && TimestambBegin<= time_b2x4[1][1]) { num_vtx_b2x4[1] = num_vtx_b2x4[1] + numvtx; num_event_b2x4[1] = num_event_b2x4[1] + 1;}
    if (TimestambBegin>= time_b2x4[2][0] && TimestambBegin<= time_b2x4[2][1]) { num_vtx_b2x4[2] = num_vtx_b2x4[2] + numvtx; num_event_b2x4[2] = num_event_b2x4[2] + 1;}
    
    if (TimestambBegin>= time_b2x5[0][0] && TimestambBegin<= time_b2x5[0][1]) { num_vtx_b2x5[0] = num_vtx_b2x5[0] + numvtx; num_event_b2x5[0] = num_event_b2x5[0] + 1;}
    if (TimestambBegin>= time_b2x5[1][0] && TimestambBegin<= time_b2x5[1][1]) { num_vtx_b2x5[1] = num_vtx_b2x5[1] + numvtx; num_event_b2x5[1] = num_event_b2x5[1] + 1;}
    if (TimestambBegin>= time_b2x5[2][0] && TimestambBegin<= time_b2x5[2][1]) { num_vtx_b2x5[2] = num_vtx_b2x5[2] + numvtx; num_event_b2x5[2] = num_event_b2x5[2] + 1;}
   
  }

  double num_vtx_b1y1_plots[] ={num_vtx_b1y1[0] /(num_event_b1y1[0]*intensity_b1y1[0][0]*intensity_b1y1[0][1]), num_vtx_b1y1[1]/(num_event_b1y1[1]*intensity_b1y1[1][0]*intensity_b1y1[1][1]), num_vtx_b1y1[2]/(num_event_b1y1[2]*intensity_b1y1[2][0]*intensity_b1y1[2][1])};
  cout << "num_vtx_b1y1_0 = " << num_vtx_b1y1_plots [0] << "  "  << "num_vtx_1 = " << num_vtx_b1y1_plots [1] << "  " << "num_vtx_2 = " << num_vtx_b1y1_plots [2] << endl;
  double num_vtx_b1y2_plots[] ={num_vtx_b1y2[0] /(num_event_b1y2[0]*intensity_b1y2[0][0]*intensity_b1y2[0][1]), num_vtx_b1y2[1]/(num_event_b1y2[1]*intensity_b1y2[1][0]*intensity_b1y2[1][1]), num_vtx_b1y2[2]/(num_event_b1y2[2]*intensity_b1y2[2][0]*intensity_b1y2[2][1])};
  double num_vtx_b1y3_plots[] ={num_vtx_b1y3[0] /(num_event_b1y3[0]*intensity_b1y3[0][0]*intensity_b1y3[0][1]), num_vtx_b1y3[1]/(num_event_b1y3[1]*intensity_b1y3[1][0]*intensity_b1y3[1][1]), num_vtx_b1y3[2]/(num_event_b1y3[2]*intensity_b1y3[2][0]*intensity_b1y3[2][1])};
  double num_vtx_b1y4_plots[] ={num_vtx_b1y4[0] /(num_event_b1y4[0]*intensity_b1y4[0][0]*intensity_b1y4[0][1]), num_vtx_b1y4[1]/(num_event_b1y4[1]*intensity_b1y4[1][0]*intensity_b1y4[1][1]), num_vtx_b1y4[2]/(num_event_b1y4[2]*intensity_b1y4[2][0]*intensity_b1y4[2][1])};
  double num_vtx_b1y5_plots[] ={num_vtx_b1y5[0] /(num_event_b1y5[0]*intensity_b1y5[0][0]*intensity_b1y5[0][1]), num_vtx_b1y5[1]/(num_event_b1y5[1]*intensity_b1y5[1][0]*intensity_b1y5[1][1]), num_vtx_b1y5[2]/(num_event_b1y5[2]*intensity_b1y5[2][0]*intensity_b1y5[2][1])};

  double num_vtx_b1x1_plots[] ={num_vtx_b1x1[0] /(num_event_b1x1[0]*intensity_b1x1[0][0]*intensity_b1x1[0][1]), num_vtx_b1x1[1]/(num_event_b1x1[1]*intensity_b1x1[1][0]*intensity_b1x1[1][1]), num_vtx_b1x1[2]/(num_event_b1x1[2]*intensity_b1x1[2][0]*intensity_b1x1[2][1])};
  cout << "num_vtx_b1x1_0 = " << num_vtx_b1x1_plots [0] << "  "  << "num_vtx_1 = " << num_vtx_b1x1_plots [1] << "  " << "num_vtx_2 = " << num_vtx_b1x1_plots [2] << endl;
  double num_vtx_b1x2_plots[] ={num_vtx_b1x2[0] /(num_event_b1x2[0]*intensity_b1x2[0][0]*intensity_b1x2[0][1]), num_vtx_b1x2[1]/(num_event_b1x2[1]*intensity_b1x2[1][0]*intensity_b1x2[1][1]), num_vtx_b1x2[2]/(num_event_b1x2[2]*intensity_b1x2[2][0]*intensity_b1x2[2][1])};
  double num_vtx_b1x3_plots[] ={num_vtx_b1x3[0] /(num_event_b1x3[0]*intensity_b1x3[0][0]*intensity_b1x3[0][1]), num_vtx_b1x3[1]/(num_event_b1x3[1]*intensity_b1x3[1][0]*intensity_b1x3[1][1]), num_vtx_b1x3[2]/(num_event_b1x3[2]*intensity_b1x3[2][0]*intensity_b1x3[2][1])};
  double num_vtx_b1x4_plots[] ={num_vtx_b1x4[0] /(num_event_b1x4[0]*intensity_b1x4[0][0]*intensity_b1x4[0][1]), num_vtx_b1x4[1]/(num_event_b1x4[1]*intensity_b1x4[1][0]*intensity_b1x4[1][1]), num_vtx_b1x4[2]/(num_event_b1x4[2]*intensity_b1x4[2][0]*intensity_b1x4[2][1])};
  double num_vtx_b1x5_plots[] ={num_vtx_b1x5[0] /(num_event_b1x5[0]*intensity_b1x5[0][0]*intensity_b1x5[0][1]), num_vtx_b1x5[1]/(num_event_b1x5[1]*intensity_b1x5[1][0]*intensity_b1x5[1][1]), num_vtx_b1x5[2]/(num_event_b1x5[2]*intensity_b1x5[2][0]*intensity_b1x5[2][1])};

  double num_vtx_b2y1_plots[] ={num_vtx_b2y1[0] /(num_event_b2y1[0]*intensity_b2y1[0][0]*intensity_b2y1[0][1]), num_vtx_b2y1[1]/(num_event_b2y1[1]*intensity_b2y1[1][0]*intensity_b2y1[1][1]), num_vtx_b2y1[2]/(num_event_b2y1[2]*intensity_b2y1[2][0]*intensity_b2y1[2][1])};
  cout << "num_vtx_b2y1_0 = " << num_vtx_b2y1_plots [0] << "  "  << "num_vtx_1 = " << num_vtx_b2y1_plots [1] << "  " << "num_vtx_2 = " << num_vtx_b2y1_plots [2] << endl;
  double num_vtx_b2y2_plots[] ={num_vtx_b2y2[0] /(num_event_b2y2[0]*intensity_b2y2[0][0]*intensity_b2y2[0][1]), num_vtx_b2y2[1]/(num_event_b2y2[1]*intensity_b2y2[1][0]*intensity_b2y2[1][1]), num_vtx_b2y2[2]/(num_event_b2y2[2]*intensity_b2y2[2][0]*intensity_b2y2[2][1])};
  double num_vtx_b2y3_plots[] ={num_vtx_b2y3[0] /(num_event_b2y3[0]*intensity_b2y3[0][0]*intensity_b2y3[0][1]), num_vtx_b2y3[1]/(num_event_b2y3[1]*intensity_b2y3[1][0]*intensity_b2y3[1][1]), num_vtx_b2y3[2]/(num_event_b2y3[2]*intensity_b2y3[2][0]*intensity_b2y3[2][1])};
  double num_vtx_b2y4_plots[] ={num_vtx_b2y4[0] /(num_event_b2y4[0]*intensity_b2y4[0][0]*intensity_b2y4[0][1]), num_vtx_b2y4[1]/(num_event_b2y4[1]*intensity_b2y4[1][0]*intensity_b2y4[1][1]), num_vtx_b2y4[2]/(num_event_b2y4[2]*intensity_b2y4[2][0]*intensity_b2y4[2][1])};
  double num_vtx_b2y5_plots[] ={num_vtx_b2y5[0] /(num_event_b2y5[0]*intensity_b2y5[0][0]*intensity_b2y5[0][1]), num_vtx_b2y5[1]/(num_event_b2y5[1]*intensity_b2y5[1][0]*intensity_b2y5[1][1]), num_vtx_b2y5[2]/(num_event_b2y5[2]*intensity_b2y5[2][0]*intensity_b2y5[2][1])};

  double num_vtx_b2x1_plots[] ={num_vtx_b2x1[0] /(num_event_b2x1[0]*intensity_b2x1[0][0]*intensity_b2x1[0][1]), num_vtx_b2x1[1]/(num_event_b2x1[1]*intensity_b2x1[1][0]*intensity_b2x1[1][1]), num_vtx_b2x1[2]/(num_event_b2x1[2]*intensity_b2x1[2][0]*intensity_b2x1[2][1])};
  cout << "num_vtx_b2x1_0 = " << num_vtx_b2x1_plots [0] << "  "  << "num_vtx_1 = " << num_vtx_b2x1_plots [1] << "  " << "num_vtx_2 = " << num_vtx_b2x1_plots [2] << endl;
  double num_vtx_b2x2_plots[] ={num_vtx_b2x2[0] /(num_event_b2x2[0]*intensity_b2x2[0][0]*intensity_b2x2[0][1]), num_vtx_b2x2[1]/(num_event_b2x2[1]*intensity_b2x2[1][0]*intensity_b2x2[1][1]), num_vtx_b2x2[2]/(num_event_b2x2[2]*intensity_b2x2[2][0]*intensity_b2x2[2][1])};
  double num_vtx_b2x3_plots[] ={num_vtx_b2x3[0] /(num_event_b2x3[0]*intensity_b2x3[0][0]*intensity_b2x3[0][1]), num_vtx_b2x3[1]/(num_event_b2x3[1]*intensity_b2x3[1][0]*intensity_b2x3[1][1]), num_vtx_b2x3[2]/(num_event_b2x3[2]*intensity_b2x3[2][0]*intensity_b2x3[2][1])};
  double num_vtx_b2x4_plots[] ={num_vtx_b2x4[0] /(num_event_b2x4[0]*intensity_b2x4[0][0]*intensity_b2x4[0][1]), num_vtx_b2x4[1]/(num_event_b2x4[1]*intensity_b2x4[1][0]*intensity_b2x4[1][1]), num_vtx_b2x4[2]/(num_event_b2x4[2]*intensity_b2x4[2][0]*intensity_b2x4[2][1])};
  double num_vtx_b2x5_plots[] ={num_vtx_b2x5[0] /(num_event_b2x5[0]*intensity_b2x5[0][0]*intensity_b2x5[0][1]), num_vtx_b2x5[1]/(num_event_b2x5[1]*intensity_b2x5[1][0]*intensity_b2x5[1][1]), num_vtx_b2x5[2]/(num_event_b2x5[2]*intensity_b2x5[2][0]*intensity_b2x5[2][1])};
 

 /*
  double nvtx_err_b1y1[] = { pow (sqrt(num_vtx_b1y1[0]) / num_vtx_b1y1[0], 2.0) + pow (sqrt(num_event_b1y1[0]) / num_event_b1y1[0], 2.0) , pow (sqrt(num_vtx_b1y1[1]) / num_vtx_b1y1[1], 2.0) + pow (sqrt(num_event_b1y1[1]) / num_event_b1y1[1], 2.0) , pow (sqrt(num_vtx_b1y1[2]) / num_vtx_b1y1[2], 2.0) + pow (sqrt(num_event_b1y1[2]) / num_event_b1y1[2], 2.0)};
  double nvtx_err_b1y2[] = { pow (sqrt(num_vtx_b1y2[0]) / num_vtx_b1y2[0], 2.0) + pow (sqrt(num_event_b1y2[0]) / num_event_b1y2[0], 2.0) , pow (sqrt(num_vtx_b1y2[1]) / num_vtx_b1y2[1], 2.0) + pow (sqrt(num_event_b1y2[1]) / num_event_b1y2[1], 2.0) , pow (sqrt(num_vtx_b1y2[2]) / num_vtx_b1y2[2], 2.0) + pow (sqrt(num_event_b1y2[2]) / num_event_b1y2[2], 2.0)};
  double nvtx_err_b1y3[] = { pow (sqrt(num_vtx_b1y3[0]) / num_vtx_b1y3[0], 2.0) + pow (sqrt(num_event_b1y3[0]) / num_event_b1y3[0], 2.0) , pow (sqrt(num_vtx_b1y3[1]) / num_vtx_b1y3[1], 2.0) + pow (sqrt(num_event_b1y3[1]) / num_event_b1y3[1], 2.0) , pow (sqrt(num_vtx_b1y3[2]) / num_vtx_b1y3[2], 2.0) + pow (sqrt(num_event_b1y3[2]) / num_event_b1y3[2], 2.0)};
  double nvtx_err_b1y4[] = { pow (sqrt(num_vtx_b1y4[0]) / num_vtx_b1y4[0], 2.0) + pow (sqrt(num_event_b1y4[0]) / num_event_b1y4[0], 2.0) , pow (sqrt(num_vtx_b1y4[1]) / num_vtx_b1y4[1], 2.0) + pow (sqrt(num_event_b1y4[1]) / num_event_b1y4[1], 2.0) , pow (sqrt(num_vtx_b1y4[2]) / num_vtx_b1y4[2], 2.0) + pow (sqrt(num_event_b1y4[2]) / num_event_b1y4[2], 2.0)};
  double nvtx_err_b1y5[] = { pow (sqrt(num_vtx_b1y5[0]) / num_vtx_b1y5[0], 2.0) + pow (sqrt(num_event_b1y5[0]) / num_event_b1y5[0], 2.0) , pow (sqrt(num_vtx_b1y5[1]) / num_vtx_b1y5[1], 2.0) + pow (sqrt(num_event_b1y5[1]) / num_event_b1y5[1], 2.0) , pow (sqrt(num_vtx_b1y5[2]) / num_vtx_b1y5[2], 2.0) + pow (sqrt(num_event_b1y5[2]) / num_event_b1y5[2], 2.0)};

  double nvtx_err_b1x1[] = { pow (sqrt(num_vtx_b1x1[0]) / num_vtx_b1x1[0], 2.0) + pow (sqrt(num_event_b1x1[0]) / num_event_b1x1[0], 2.0) , pow (sqrt(num_vtx_b1x1[1]) / num_vtx_b1x1[1], 2.0) + pow (sqrt(num_event_b1x1[1]) / num_event_b1x1[1], 2.0) , pow (sqrt(num_vtx_b1x1[2]) / num_vtx_b1x1[2], 2.0) + pow (sqrt(num_event_b1x1[2]) / num_event_b1x1[2], 2.0)};
  double nvtx_err_b1x2[] = { pow (sqrt(num_vtx_b1x2[0]) / num_vtx_b1x2[0], 2.0) + pow (sqrt(num_event_b1x2[0]) / num_event_b1x2[0], 2.0) , pow (sqrt(num_vtx_b1x2[1]) / num_vtx_b1x2[1], 2.0) + pow (sqrt(num_event_b1x2[1]) / num_event_b1x2[1], 2.0) , pow (sqrt(num_vtx_b1x2[2]) / num_vtx_b1x2[2], 2.0) + pow (sqrt(num_event_b1x2[2]) / num_event_b1x2[2], 2.0)};
  double nvtx_err_b1x3[] = { pow (sqrt(num_vtx_b1x3[0]) / num_vtx_b1x3[0], 2.0) + pow (sqrt(num_event_b1x3[0]) / num_event_b1x3[0], 2.0) , pow (sqrt(num_vtx_b1x3[1]) / num_vtx_b1x3[1], 2.0) + pow (sqrt(num_event_b1x3[1]) / num_event_b1x3[1], 2.0) , pow (sqrt(num_vtx_b1x3[2]) / num_vtx_b1x3[2], 2.0) + pow (sqrt(num_event_b1x3[2]) / num_event_b1x3[2], 2.0)};
  double nvtx_err_b1x4[] = { pow (sqrt(num_vtx_b1x4[0]) / num_vtx_b1x4[0], 2.0) + pow (sqrt(num_event_b1x4[0]) / num_event_b1x4[0], 2.0) , pow (sqrt(num_vtx_b1x4[1]) / num_vtx_b1x4[1], 2.0) + pow (sqrt(num_event_b1x4[1]) / num_event_b1x4[1], 2.0) , pow (sqrt(num_vtx_b1x4[2]) / num_vtx_b1x4[2], 2.0) + pow (sqrt(num_event_b1x4[2]) / num_event_b1x4[2], 2.0)};
  double nvtx_err_b1x5[] = { pow (sqrt(num_vtx_b1x5[0]) / num_vtx_b1x5[0], 2.0) + pow (sqrt(num_event_b1x5[0]) / num_event_b1x5[0], 2.0) , pow (sqrt(num_vtx_b1x5[1]) / num_vtx_b1x5[1], 2.0) + pow (sqrt(num_event_b1x5[1]) / num_event_b1x5[1], 2.0) , pow (sqrt(num_vtx_b1x5[2]) / num_vtx_b1x5[2], 2.0) + pow (sqrt(num_event_b1x5[2]) / num_event_b1x5[2], 2.0)};

  double nvtx_err_b2y1[] = { pow (sqrt(num_vtx_b2y1[0]) / num_vtx_b2y1[0], 2.0) + pow (sqrt(num_event_b2y1[0]) / num_event_b2y1[0], 2.0) , pow (sqrt(num_vtx_b2y1[1]) / num_vtx_b2y1[1], 2.0) + pow (sqrt(num_event_b2y1[1]) / num_event_b2y1[1], 2.0) , pow (sqrt(num_vtx_b2y1[2]) / num_vtx_b2y1[2], 2.0) + pow (sqrt(num_event_b2y1[2]) / num_event_b2y1[2], 2.0)};
  double nvtx_err_b2y2[] = { pow (sqrt(num_vtx_b2y2[0]) / num_vtx_b2y2[0], 2.0) + pow (sqrt(num_event_b2y2[0]) / num_event_b2y2[0], 2.0) , pow (sqrt(num_vtx_b2y2[1]) / num_vtx_b2y2[1], 2.0) + pow (sqrt(num_event_b2y2[1]) / num_event_b2y2[1], 2.0) , pow (sqrt(num_vtx_b2y2[2]) / num_vtx_b2y2[2], 2.0) + pow (sqrt(num_event_b2y2[2]) / num_event_b2y2[2], 2.0)};
  double nvtx_err_b2y3[] = { pow (sqrt(num_vtx_b2y3[0]) / num_vtx_b2y3[0], 2.0) + pow (sqrt(num_event_b2y3[0]) / num_event_b2y3[0], 2.0) , pow (sqrt(num_vtx_b2y3[1]) / num_vtx_b2y3[1], 2.0) + pow (sqrt(num_event_b2y3[1]) / num_event_b2y3[1], 2.0) , pow (sqrt(num_vtx_b2y3[2]) / num_vtx_b2y3[2], 2.0) + pow (sqrt(num_event_b2y3[2]) / num_event_b2y3[2], 2.0)};
  double nvtx_err_b2y4[] = { pow (sqrt(num_vtx_b2y4[0]) / num_vtx_b2y4[0], 2.0) + pow (sqrt(num_event_b2y4[0]) / num_event_b2y4[0], 2.0) , pow (sqrt(num_vtx_b2y4[1]) / num_vtx_b2y4[1], 2.0) + pow (sqrt(num_event_b2y4[1]) / num_event_b2y4[1], 2.0) , pow (sqrt(num_vtx_b2y4[2]) / num_vtx_b2y4[2], 2.0) + pow (sqrt(num_event_b2y4[2]) / num_event_b2y4[2], 2.0)};
  double nvtx_err_b2y5[] = { pow (sqrt(num_vtx_b2y5[0]) / num_vtx_b2y5[0], 2.0) + pow (sqrt(num_event_b2y5[0]) / num_event_b2y5[0], 2.0) , pow (sqrt(num_vtx_b2y5[1]) / num_vtx_b2y5[1], 2.0) + pow (sqrt(num_event_b2y5[1]) / num_event_b2y5[1], 2.0) , pow (sqrt(num_vtx_b2y5[2]) / num_vtx_b2y5[2], 2.0) + pow (sqrt(num_event_b2y5[2]) / num_event_b2y5[2], 2.0)};

  double nvtx_err_b2x1[] = { pow (sqrt(num_vtx_b2x1[0]) / num_vtx_b2x1[0], 2.0) + pow (sqrt(num_event_b2x1[0]) / num_event_b2x1[0], 2.0) , pow (sqrt(num_vtx_b2x1[1]) / num_vtx_b2x1[1], 2.0) + pow (sqrt(num_event_b2x1[1]) / num_event_b2x1[1], 2.0) , pow (sqrt(num_vtx_b2x1[2]) / num_vtx_b2x1[2], 2.0) + pow (sqrt(num_event_b2x1[2]) / num_event_b2x1[2], 2.0)};
  double nvtx_err_b2x2[] = { pow (sqrt(num_vtx_b2x2[0]) / num_vtx_b2x2[0], 2.0) + pow (sqrt(num_event_b2x2[0]) / num_event_b2x2[0], 2.0) , pow (sqrt(num_vtx_b2x2[1]) / num_vtx_b2x2[1], 2.0) + pow (sqrt(num_event_b2x2[1]) / num_event_b2x2[1], 2.0) , pow (sqrt(num_vtx_b2x2[2]) / num_vtx_b2x2[2], 2.0) + pow (sqrt(num_event_b2x2[2]) / num_event_b2x2[2], 2.0)};
  double nvtx_err_b2x3[] = { pow (sqrt(num_vtx_b2x3[0]) / num_vtx_b2x3[0], 2.0) + pow (sqrt(num_event_b2x3[0]) / num_event_b2x3[0], 2.0) , pow (sqrt(num_vtx_b2x3[1]) / num_vtx_b2x3[1], 2.0) + pow (sqrt(num_event_b2x3[1]) / num_event_b2x3[1], 2.0) , pow (sqrt(num_vtx_b2x3[2]) / num_vtx_b2x3[2], 2.0) + pow (sqrt(num_event_b2x3[2]) / num_event_b2x3[2], 2.0)};
  double nvtx_err_b2x4[] = { pow (sqrt(num_vtx_b2x4[0]) / num_vtx_b2x4[0], 2.0) + pow (sqrt(num_event_b2x4[0]) / num_event_b2x4[0], 2.0) , pow (sqrt(num_vtx_b2x4[1]) / num_vtx_b2x4[1], 2.0) + pow (sqrt(num_event_b2x4[1]) / num_event_b2x4[1], 2.0) , pow (sqrt(num_vtx_b2x4[2]) / num_vtx_b2x4[2], 2.0) + pow (sqrt(num_event_b2x4[2]) / num_event_b2x4[2], 2.0)};
  double nvtx_err_b2x5[] = { pow (sqrt(num_vtx_b2x5[0]) / num_vtx_b2x5[0], 2.0) + pow (sqrt(num_event_b2x5[0]) / num_event_b2x5[0], 2.0) , pow (sqrt(num_vtx_b2x5[1]) / num_vtx_b2x5[1], 2.0) + pow (sqrt(num_event_b2x5[1]) / num_event_b2x5[1], 2.0) , pow (sqrt(num_vtx_b2x5[2]) / num_vtx_b2x5[2], 2.0) + pow (sqrt(num_event_b2x5[2]) / num_event_b2x5[2], 2.0)};

*/


  double nvtx_err_b1y1[] = { pow (sqrt(num_vtx_b1y1[0]) / num_vtx_b1y1[0], 2.0)  , pow (sqrt(num_vtx_b1y1[1]) / num_vtx_b1y1[1], 2.0)  , pow (sqrt(num_vtx_b1y1[2]) / num_vtx_b1y1[2], 2.0) };
  double nvtx_err_b1y2[] = { pow (sqrt(num_vtx_b1y2[0]) / num_vtx_b1y2[0], 2.0)  , pow (sqrt(num_vtx_b1y2[1]) / num_vtx_b1y2[1], 2.0)  , pow (sqrt(num_vtx_b1y2[2]) / num_vtx_b1y2[2], 2.0) };
  double nvtx_err_b1y3[] = { pow (sqrt(num_vtx_b1y3[0]) / num_vtx_b1y3[0], 2.0)  , pow (sqrt(num_vtx_b1y3[1]) / num_vtx_b1y3[1], 2.0)  , pow (sqrt(num_vtx_b1y3[2]) / num_vtx_b1y3[2], 2.0) };
  double nvtx_err_b1y4[] = { pow (sqrt(num_vtx_b1y4[0]) / num_vtx_b1y4[0], 2.0)  , pow (sqrt(num_vtx_b1y4[1]) / num_vtx_b1y4[1], 2.0)  , pow (sqrt(num_vtx_b1y4[2]) / num_vtx_b1y4[2], 2.0) };
  double nvtx_err_b1y5[] = { pow (sqrt(num_vtx_b1y5[0]) / num_vtx_b1y5[0], 2.0)  , pow (sqrt(num_vtx_b1y5[1]) / num_vtx_b1y5[1], 2.0)  , pow (sqrt(num_vtx_b1y5[2]) / num_vtx_b1y5[2], 2.0) };

  double nvtx_err_b1x1[] = { pow (sqrt(num_vtx_b1x1[0]) / num_vtx_b1x1[0], 2.0)  , pow (sqrt(num_vtx_b1x1[1]) / num_vtx_b1x1[1], 2.0)  , pow (sqrt(num_vtx_b1x1[2]) / num_vtx_b1x1[2], 2.0) };
  double nvtx_err_b1x2[] = { pow (sqrt(num_vtx_b1x2[0]) / num_vtx_b1x2[0], 2.0)  , pow (sqrt(num_vtx_b1x2[1]) / num_vtx_b1x2[1], 2.0)  , pow (sqrt(num_vtx_b1x2[2]) / num_vtx_b1x2[2], 2.0) };
  double nvtx_err_b1x3[] = { pow (sqrt(num_vtx_b1x3[0]) / num_vtx_b1x3[0], 2.0)  , pow (sqrt(num_vtx_b1x3[1]) / num_vtx_b1x3[1], 2.0)  , pow (sqrt(num_vtx_b1x3[2]) / num_vtx_b1x3[2], 2.0) };
  double nvtx_err_b1x4[] = { pow (sqrt(num_vtx_b1x4[0]) / num_vtx_b1x4[0], 2.0)  , pow (sqrt(num_vtx_b1x4[1]) / num_vtx_b1x4[1], 2.0)  , pow (sqrt(num_vtx_b1x4[2]) / num_vtx_b1x4[2], 2.0) };
  double nvtx_err_b1x5[] = { pow (sqrt(num_vtx_b1x5[0]) / num_vtx_b1x5[0], 2.0)  , pow (sqrt(num_vtx_b1x5[1]) / num_vtx_b1x5[1], 2.0)  , pow (sqrt(num_vtx_b1x5[2]) / num_vtx_b1x5[2], 2.0) };

  double nvtx_err_b2y1[] = { pow (sqrt(num_vtx_b2y1[0]) / num_vtx_b2y1[0], 2.0)  , pow (sqrt(num_vtx_b2y1[1]) / num_vtx_b2y1[1], 2.0)  , pow (sqrt(num_vtx_b2y1[2]) / num_vtx_b2y1[2], 2.0) };
  double nvtx_err_b2y2[] = { pow (sqrt(num_vtx_b2y2[0]) / num_vtx_b2y2[0], 2.0)  , pow (sqrt(num_vtx_b2y2[1]) / num_vtx_b2y2[1], 2.0)  , pow (sqrt(num_vtx_b2y2[2]) / num_vtx_b2y2[2], 2.0) };
  double nvtx_err_b2y3[] = { pow (sqrt(num_vtx_b2y3[0]) / num_vtx_b2y3[0], 2.0)  , pow (sqrt(num_vtx_b2y3[1]) / num_vtx_b2y3[1], 2.0)  , pow (sqrt(num_vtx_b2y3[2]) / num_vtx_b2y3[2], 2.0) };
  double nvtx_err_b2y4[] = { pow (sqrt(num_vtx_b2y4[0]) / num_vtx_b2y4[0], 2.0)  , pow (sqrt(num_vtx_b2y4[1]) / num_vtx_b2y4[1], 2.0)  , pow (sqrt(num_vtx_b2y4[2]) / num_vtx_b2y4[2], 2.0) };
  double nvtx_err_b2y5[] = { pow (sqrt(num_vtx_b2y5[0]) / num_vtx_b2y5[0], 2.0)  , pow (sqrt(num_vtx_b2y5[1]) / num_vtx_b2y5[1], 2.0)  , pow (sqrt(num_vtx_b2y5[2]) / num_vtx_b2y5[2], 2.0) };

  double nvtx_err_b2x1[] = { pow (sqrt(num_vtx_b2x1[0]) / num_vtx_b2x1[0], 2.0)  , pow (sqrt(num_vtx_b2x1[1]) / num_vtx_b2x1[1], 2.0)  , pow (sqrt(num_vtx_b2x1[2]) / num_vtx_b2x1[2], 2.0) };
  double nvtx_err_b2x2[] = { pow (sqrt(num_vtx_b2x2[0]) / num_vtx_b2x2[0], 2.0)  , pow (sqrt(num_vtx_b2x2[1]) / num_vtx_b2x2[1], 2.0)  , pow (sqrt(num_vtx_b2x2[2]) / num_vtx_b2x2[2], 2.0) };
  double nvtx_err_b2x3[] = { pow (sqrt(num_vtx_b2x3[0]) / num_vtx_b2x3[0], 2.0)  , pow (sqrt(num_vtx_b2x3[1]) / num_vtx_b2x3[1], 2.0)  , pow (sqrt(num_vtx_b2x3[2]) / num_vtx_b2x3[2], 2.0) };
  double nvtx_err_b2x4[] = { pow (sqrt(num_vtx_b2x4[0]) / num_vtx_b2x4[0], 2.0)  , pow (sqrt(num_vtx_b2x4[1]) / num_vtx_b2x4[1], 2.0)  , pow (sqrt(num_vtx_b2x4[2]) / num_vtx_b2x4[2], 2.0) };
  double nvtx_err_b2x5[] = { pow (sqrt(num_vtx_b2x5[0]) / num_vtx_b2x5[0], 2.0)  , pow (sqrt(num_vtx_b2x5[1]) / num_vtx_b2x5[1], 2.0)  , pow (sqrt(num_vtx_b2x5[2]) / num_vtx_b2x5[2], 2.0) };


   double num_vtx_b1y1_err[] = { num_vtx_b1y1_plots[0] * sqrt(nvtx_err_b1y1[0]) , num_vtx_b1y1_plots[1] * sqrt(nvtx_err_b1y1[1]) , num_vtx_b1y1_plots[2] * sqrt(nvtx_err_b1y1[2])};
   cout << "num_vtx_b1y1_err = " << num_vtx_b1y1_err[0] << "  "  << "num_vtx_1_err = " << num_vtx_b1y1_err[1] << "  " << "num_vtx_2_err = " << num_vtx_b1y1_err[2] << endl;
   double num_vtx_b1y2_err[] = { num_vtx_b1y2_plots[0] * sqrt(nvtx_err_b1y2[0]) , num_vtx_b1y2_plots[1] * sqrt(nvtx_err_b1y2[1]) , num_vtx_b1y2_plots[2] * sqrt(nvtx_err_b1y2[2])};
   double num_vtx_b1y3_err[] = { num_vtx_b1y3_plots[0] * sqrt(nvtx_err_b1y3[0]) , num_vtx_b1y3_plots[1] * sqrt(nvtx_err_b1y3[1]) , num_vtx_b1y3_plots[2] * sqrt(nvtx_err_b1y3[2])};
   double num_vtx_b1y4_err[] = { num_vtx_b1y4_plots[0] * sqrt(nvtx_err_b1y4[0]) , num_vtx_b1y4_plots[1] * sqrt(nvtx_err_b1y4[1]) , num_vtx_b1y4_plots[2] * sqrt(nvtx_err_b1y4[2])};
   double num_vtx_b1y5_err[] = { num_vtx_b1y5_plots[0] * sqrt(nvtx_err_b1y5[0]) , num_vtx_b1y5_plots[1] * sqrt(nvtx_err_b1y5[1]) , num_vtx_b1y5_plots[2] * sqrt(nvtx_err_b1y5[2])};
   double num_vtx_b1x1_err[] = { num_vtx_b1x1_plots[0] * sqrt(nvtx_err_b1x1[0]) , num_vtx_b1x1_plots[1] * sqrt(nvtx_err_b1x1[1]) , num_vtx_b1x1_plots[2] * sqrt(nvtx_err_b1x1[2])};
   double num_vtx_b1x2_err[] = { num_vtx_b1x2_plots[0] * sqrt(nvtx_err_b1x2[0]) , num_vtx_b1x2_plots[1] * sqrt(nvtx_err_b1x2[1]) , num_vtx_b1x2_plots[2] * sqrt(nvtx_err_b1x2[2])};
   double num_vtx_b1x3_err[] = { num_vtx_b1x3_plots[0] * sqrt(nvtx_err_b1x3[0]) , num_vtx_b1x3_plots[1] * sqrt(nvtx_err_b1x3[1]) , num_vtx_b1x3_plots[2] * sqrt(nvtx_err_b1x3[2])};
   double num_vtx_b1x4_err[] = { num_vtx_b1x4_plots[0] * sqrt(nvtx_err_b1x4[0]) , num_vtx_b1x4_plots[1] * sqrt(nvtx_err_b1x4[1]) , num_vtx_b1x4_plots[2] * sqrt(nvtx_err_b1x4[2])};
   double num_vtx_b1x5_err[] = { num_vtx_b1x5_plots[0] * sqrt(nvtx_err_b1x5[0]) , num_vtx_b1x5_plots[1] * sqrt(nvtx_err_b1x5[1]) , num_vtx_b1x5_plots[2] * sqrt(nvtx_err_b1x5[2])};
   double num_vtx_b2y1_err[] = { num_vtx_b2y1_plots[0] * sqrt(nvtx_err_b2y1[0]) , num_vtx_b2y1_plots[1] * sqrt(nvtx_err_b2y1[1]) , num_vtx_b2y1_plots[2] * sqrt(nvtx_err_b2y1[2])};
   double num_vtx_b2y2_err[] = { num_vtx_b2y2_plots[0] * sqrt(nvtx_err_b2y2[0]) , num_vtx_b2y2_plots[1] * sqrt(nvtx_err_b2y2[1]) , num_vtx_b2y2_plots[2] * sqrt(nvtx_err_b2y2[2])};
   double num_vtx_b2y3_err[] = { num_vtx_b2y3_plots[0] * sqrt(nvtx_err_b2y3[0]) , num_vtx_b2y3_plots[1] * sqrt(nvtx_err_b2y3[1]) , num_vtx_b2y3_plots[2] * sqrt(nvtx_err_b2y3[2])};
   double num_vtx_b2y4_err[] = { num_vtx_b2y4_plots[0] * sqrt(nvtx_err_b2y4[0]) , num_vtx_b2y4_plots[1] * sqrt(nvtx_err_b2y4[1]) , num_vtx_b2y4_plots[2] * sqrt(nvtx_err_b2y4[2])};
   double num_vtx_b2y5_err[] = { num_vtx_b2y5_plots[0] * sqrt(nvtx_err_b2y5[0]) , num_vtx_b2y5_plots[1] * sqrt(nvtx_err_b2y5[1]) , num_vtx_b2y5_plots[2] * sqrt(nvtx_err_b2y5[2])};
   double num_vtx_b2x1_err[] = { num_vtx_b2x1_plots[0] * sqrt(nvtx_err_b2x1[0]) , num_vtx_b2x1_plots[1] * sqrt(nvtx_err_b2x1[1]) , num_vtx_b2x1_plots[2] * sqrt(nvtx_err_b2x1[2])};
   double num_vtx_b2x2_err[] = { num_vtx_b2x2_plots[0] * sqrt(nvtx_err_b2x2[0]) , num_vtx_b2x2_plots[1] * sqrt(nvtx_err_b2x2[1]) , num_vtx_b2x2_plots[2] * sqrt(nvtx_err_b2x2[2])};
   double num_vtx_b2x3_err[] = { num_vtx_b2x3_plots[0] * sqrt(nvtx_err_b2x3[0]) , num_vtx_b2x3_plots[1] * sqrt(nvtx_err_b2x3[1]) , num_vtx_b2x3_plots[2] * sqrt(nvtx_err_b2x3[2])};
   double num_vtx_b2x4_err[] = { num_vtx_b2x4_plots[0] * sqrt(nvtx_err_b2x4[0]) , num_vtx_b2x4_plots[1] * sqrt(nvtx_err_b2x4[1]) , num_vtx_b2x4_plots[2] * sqrt(nvtx_err_b2x4[2])};
   double num_vtx_b2x5_err[] = { num_vtx_b2x5_plots[0] * sqrt(nvtx_err_b2x5[0]) , num_vtx_b2x5_plots[1] * sqrt(nvtx_err_b2x5[1]) , num_vtx_b2x5_plots[2] * sqrt(nvtx_err_b2x5[2])};

   ofstream myfile;
   myfile.open("plots_data_old.txt");

   myfile << "num_vtx_b1y1_0 , num_vtx_b1y1_1 , num_vtx_b1y1_2  = " << num_vtx_b1y1_plots [0] << " , "  << num_vtx_b1y1_plots [1] << " , " << num_vtx_b1y1_plots [2] << endl;
   myfile << "num_vtx_b1y2_0 , num_vtx_b1y2_1 , num_vtx_b1y2_2  = " << num_vtx_b1y2_plots [0] << " , "  << num_vtx_b1y2_plots [1] << " , " << num_vtx_b1y2_plots [2] << endl;
   myfile << "num_vtx_b1y3_0 , num_vtx_b1y3_1 , num_vtx_b1y3_2  = " << num_vtx_b1y3_plots [0] << " , "  << num_vtx_b1y3_plots [1] << " , " << num_vtx_b1y3_plots [2] << endl;
   myfile << "num_vtx_b1y4_0 , num_vtx_b1y4_1 , num_vtx_b1y4_2  = " << num_vtx_b1y4_plots [0] << " , "  << num_vtx_b1y4_plots [1] << " , " << num_vtx_b1y4_plots [2] << endl;
   myfile << "num_vtx_b1y5_0 , num_vtx_b1y5_1 , num_vtx_b1y5_2  = " << num_vtx_b1y5_plots [0] << " , "  << num_vtx_b1y5_plots [1] << " , " << num_vtx_b1y5_plots [2] << endl;

   myfile << "num_vtx_b1x1_0 , num_vtx_b1x1_1 , num_vtx_b1x1_2  = " << num_vtx_b1x1_plots [0] << " , "  << num_vtx_b1x1_plots [1] << " , " << num_vtx_b1x1_plots [2] << endl;
   myfile << "num_vtx_b1x2_0 , num_vtx_b1x2_1 , num_vtx_b1x2_2  = " << num_vtx_b1x2_plots [0] << " , "  << num_vtx_b1x2_plots [1] << " , " << num_vtx_b1x2_plots [2] << endl;
   myfile << "num_vtx_b1x3_0 , num_vtx_b1x3_1 , num_vtx_b1x3_2  = " << num_vtx_b1x3_plots [0] << " , "  << num_vtx_b1x3_plots [1] << " , " << num_vtx_b1x3_plots [2] << endl;
   myfile << "num_vtx_b1x4_0 , num_vtx_b1x4_1 , num_vtx_b1x4_2  = " << num_vtx_b1x4_plots [0] << " , "  << num_vtx_b1x4_plots [1] << " , " << num_vtx_b1x4_plots [2] << endl;
   myfile << "num_vtx_b1x5_0 , num_vtx_b1x5_1 , num_vtx_b1x5_2  = " << num_vtx_b1x5_plots [0] << " , "  << num_vtx_b1x5_plots [1] << " , " << num_vtx_b1x5_plots [2] << endl;

   myfile << "num_vtx_b2y1_0 , num_vtx_b2y1_1 , num_vtx_b2y1_2  = " << num_vtx_b2y1_plots [0] << " , "  << num_vtx_b2y1_plots [1] << " , " << num_vtx_b2y1_plots [2] << endl;
   myfile << "num_vtx_b2y2_0 , num_vtx_b2y2_1 , num_vtx_b2y2_2  = " << num_vtx_b2y2_plots [0] << " , "  << num_vtx_b2y2_plots [1] << " , " << num_vtx_b2y2_plots [2] << endl;
   myfile << "num_vtx_b2y3_0 , num_vtx_b2y3_1 , num_vtx_b2y3_2  = " << num_vtx_b2y3_plots [0] << " , "  << num_vtx_b2y3_plots [1] << " , " << num_vtx_b2y3_plots [2] << endl;
   myfile << "num_vtx_b2y4_0 , num_vtx_b2y4_1 , num_vtx_b2y4_2  = " << num_vtx_b2y4_plots [0] << " , "  << num_vtx_b2y4_plots [1] << " , " << num_vtx_b2y4_plots [2] << endl;
   myfile << "num_vtx_b2y5_0 , num_vtx_b2y5_1 , num_vtx_b2y5_2  = " << num_vtx_b2y5_plots [0] << " , "  << num_vtx_b2y5_plots [1] << " , " << num_vtx_b2y5_plots [2] << endl;

   myfile << "num_vtx_b2x1_0 , num_vtx_b2x1_1 , num_vtx_b2x1_2  = " << num_vtx_b2x1_plots [0] << " , "  << num_vtx_b2x1_plots [1] << " , " << num_vtx_b2x1_plots [2] << endl;
   myfile << "num_vtx_b2x2_0 , num_vtx_b2x2_1 , num_vtx_b2x2_2  = " << num_vtx_b2x2_plots [0] << " , "  << num_vtx_b2x2_plots [1] << " , " << num_vtx_b2x2_plots [2] << endl;
   myfile << "num_vtx_b2x3_0 , num_vtx_b2x3_1 , num_vtx_b2x3_2  = " << num_vtx_b2x3_plots [0] << " , "  << num_vtx_b2x3_plots [1] << " , " << num_vtx_b2x3_plots [2] << endl;
   myfile << "num_vtx_b2x4_0 , num_vtx_b2x4_1 , num_vtx_b2x4_2  = " << num_vtx_b2x4_plots [0] << " , "  << num_vtx_b2x4_plots [1] << " , " << num_vtx_b2x4_plots [2] << endl;
   myfile << "num_vtx_b2x5_0 , num_vtx_b2x5_1 , num_vtx_b2x5_2  = " << num_vtx_b2x5_plots [0] << " , "  << num_vtx_b2x5_plots [1] << " , " << num_vtx_b2x5_plots [2] << endl;
   myfile << "---------------------------------------------------------------------------------------------------" << endl;

   myfile << "num_vtx_b1y1_0_err , num_vtx_b1y1_1_err , num_vtx_b1y1_2_err  = " << num_vtx_b1y1_err [0] << " , "  << num_vtx_b1y1_err [1] << " , " << num_vtx_b1y1_err [2] << endl;
   myfile << "num_vtx_b1y2_0_err , num_vtx_b1y2_1_err , num_vtx_b1y2_2_err  = " << num_vtx_b1y2_err [0] << " , "  << num_vtx_b1y2_err [1] << " , " << num_vtx_b1y2_err [2] << endl;
   myfile << "num_vtx_b1y3_0_err , num_vtx_b1y3_1_err , num_vtx_b1y3_2_err  = " << num_vtx_b1y3_err [0] << " , "  << num_vtx_b1y3_err [1] << " , " << num_vtx_b1y3_err [2] << endl;
   myfile << "num_vtx_b1y4_0_err , num_vtx_b1y4_1_err , num_vtx_b1y4_2_err  = " << num_vtx_b1y4_err [0] << " , "  << num_vtx_b1y4_err [1] << " , " << num_vtx_b1y4_err [2] << endl;
   myfile << "num_vtx_b1y5_0_err , num_vtx_b1y5_1_err , num_vtx_b1y5_2_err  = " << num_vtx_b1y5_err [0] << " , "  << num_vtx_b1y5_err [1] << " , " << num_vtx_b1y5_err [2] << endl;

   myfile << "num_vtx_b1x1_0_err , num_vtx_b1x1_1_err , num_vtx_b1x1_2_err  = " << num_vtx_b1x1_err [0] << " , "  << num_vtx_b1x1_err [1] << " , " << num_vtx_b1x1_err [2] << endl;
   myfile << "num_vtx_b1x2_0_err , num_vtx_b1x2_1_err , num_vtx_b1x2_2_err  = " << num_vtx_b1x2_err [0] << " , "  << num_vtx_b1x2_err [1] << " , " << num_vtx_b1x2_err [2] << endl;
   myfile << "num_vtx_b1x3_0_err , num_vtx_b1x3_1_err , num_vtx_b1x3_2_err  = " << num_vtx_b1x3_err [0] << " , "  << num_vtx_b1x3_err [1] << " , " << num_vtx_b1x3_err [2] << endl;
   myfile << "num_vtx_b1x4_0_err , num_vtx_b1x4_1_err , num_vtx_b1x4_2_err  = " << num_vtx_b1x4_err [0] << " , "  << num_vtx_b1x4_err [1] << " , " << num_vtx_b1x4_err [2] << endl;
   myfile << "num_vtx_b1x5_0_err , num_vtx_b1x5_1_err , num_vtx_b1x5_2_err  = " << num_vtx_b1x5_err [0] << " , "  << num_vtx_b1x5_err [1] << " , " << num_vtx_b1x5_err [2] << endl;

   myfile << "num_vtx_b2y1_0_err , num_vtx_b2y1_1_err , num_vtx_b2y1_2_err  = " << num_vtx_b2y1_err [0] << " , "  << num_vtx_b2y1_err [1] << " , " << num_vtx_b2y1_err [2] << endl;
   myfile << "num_vtx_b2y2_0_err , num_vtx_b2y2_1_err , num_vtx_b2y2_2_err  = " << num_vtx_b2y2_err [0] << " , "  << num_vtx_b2y2_err [1] << " , " << num_vtx_b2y2_err [2] << endl;
   myfile << "num_vtx_b2y3_0_err , num_vtx_b2y3_1_err , num_vtx_b2y3_2_err  = " << num_vtx_b2y3_err [0] << " , "  << num_vtx_b2y3_err [1] << " , " << num_vtx_b2y3_err [2] << endl;
   myfile << "num_vtx_b2y4_0_err , num_vtx_b2y4_1_err , num_vtx_b2y4_2_err  = " << num_vtx_b2y4_err [0] << " , "  << num_vtx_b2y4_err [1] << " , " << num_vtx_b2y4_err [2] << endl;
   myfile << "num_vtx_b2y5_0_err , num_vtx_b2y5_1_err , num_vtx_b2y5_2_err  = " << num_vtx_b2y5_err [0] << " , "  << num_vtx_b2y5_err [1] << " , " << num_vtx_b2y5_err [2] << endl;

   myfile << "num_vtx_b2x1_0_err , num_vtx_b2x1_1_err , num_vtx_b2x1_2_err  = " << num_vtx_b2x1_err [0] << " , "  << num_vtx_b2x1_err [1] << " , " << num_vtx_b2x1_err [2] << endl;
   myfile << "num_vtx_b2x2_0_err , num_vtx_b2x2_1_err , num_vtx_b2x2_2_err  = " << num_vtx_b2x2_err [0] << " , "  << num_vtx_b2x2_err [1] << " , " << num_vtx_b2x2_err [2] << endl;
   myfile << "num_vtx_b2x3_0_err , num_vtx_b2x3_1_err , num_vtx_b2x3_2_err  = " << num_vtx_b2x3_err [0] << " , "  << num_vtx_b2x3_err [1] << " , " << num_vtx_b2x3_err [2] << endl;
   myfile << "num_vtx_b2x4_0_err , num_vtx_b2x4_1_err , num_vtx_b2x4_2_err  = " << num_vtx_b2x4_err [0] << " , "  << num_vtx_b2x4_err [1] << " , " << num_vtx_b2x4_err [2] << endl;
   myfile << "num_vtx_b2x5_0_err , num_vtx_b2x5_1_err , num_vtx_b2x5_2_err  = " << num_vtx_b2x5_err [0] << " , "  << num_vtx_b2x5_err [1] << " , " << num_vtx_b2x5_err [2] << endl;

   myfile.close();
   
  gSystem->Exec("date");
  f->Close();
}


