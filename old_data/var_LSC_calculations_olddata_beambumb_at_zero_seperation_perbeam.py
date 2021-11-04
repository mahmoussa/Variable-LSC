import os, sys
import ROOT
import math
import numpy as np

#no step size first item "slope" second "stat err" third "chi2/dof"
no_step_av_b1x =  [-1.000185  ,  0.001343  ,  0.07420333333333333] 
no_step_av_b2x =  [-1.003922  ,  0.001364  ,  1.0946556666666667]
no_step_av_b1y =  [1.00252  ,  0.001611  ,  0.05703833333333333]
no_step_av_b2y =  [0.998204  ,  0.00158  ,  1.2314753333333333]

no_step_nom_b1x =  [-0.99775  ,  0.001343  ,  0.9988980000000001] 
no_step_nom_b2x =  [-0.99492  ,  0.001354  ,  0.402205]
no_step_nom_b1y =  [0.991517  ,  0.001594  ,  0.7839053333333333]
no_step_nom_b2y =  [0.993802  ,  0.001574  ,  0.09041066666666665]

no_step_dor_b1x =  [-1.001991  ,  0.001345  ,  0.08812199999999999] 
no_step_dor_b2x =  [-1.00767  ,  0.001372  ,  1.3421200000000002]
no_step_dor_b1y =  [1.005327  ,  0.001619  ,  0.013929333333333333]
no_step_dor_b2y =  [0.995647  ,  0.001578  ,  1.3653579999999998]

no_step_arc_b1x =  [-0.998384  ,  0.001341  ,  0.25342733333333334] 
no_step_arc_b2x =  [-1.000205  ,  0.001357  ,  0.897418]
no_step_arc_b1y =  [0.999737  ,  0.001605  ,  0.22604333333333335]
no_step_arc_b2y =  [1.000773  ,  0.001584  ,  1.1855066666666667]

#mini per step without outlier removal first item "slope" second "stat err" third "chi2/dof"
mini_step_nojoscha_av_b1x =  [-0.998449  ,  0.00134  ,  0.074058] 
mini_step_nojoscha_av_b2x =  [-0.995621  ,  0.001353  ,  1.0914716666666666]
mini_step_nojoscha_av_b1y =  [0.991829  ,  0.001594  ,  0.056768000000000006]
mini_step_nojoscha_av_b2y =  [0.993926  ,  0.001574  ,  1.2295683333333334]

mini_step_nojoscha_nom_b1x =  [-0.99775  ,  0.001343  ,  0.9988980000000001] 
mini_step_nojoscha_nom_b2x =  [-0.99492  ,  0.001354  ,  0.402205]
mini_step_nojoscha_nom_b1y =  [0.991517  ,  0.001594  ,  0.7839053333333333]
mini_step_nojoscha_nom_b2y =  [0.993802  ,  0.001574  ,  0.09041066666666665]

mini_step_nojoscha_dor_b1x =  [-0.998495  ,  0.00134  ,  0.087599] 
mini_step_nojoscha_dor_b2x =  [-0.995411  ,  0.001356  ,  1.3326883333333333]
mini_step_nojoscha_dor_b1y =  [0.991153  ,  0.001596  ,  0.014632666666666667]
mini_step_nojoscha_dor_b2y =  [0.993511  ,  0.001574  ,  1.3661803333333333]

mini_step_nojoscha_arc_b1x =  [-0.998402  ,  0.001341  ,  0.25337266666666663] 
mini_step_nojoscha_arc_b2x =  [-0.995831  ,  0.001351  ,  0.8995380000000001]
mini_step_nojoscha_arc_b1y =  [0.992505  ,  0.001593  ,  0.222486]
mini_step_nojoscha_arc_b2y =  [0.994341  ,  0.001574  ,  1.1809396666666667]

#mini per step with outlier removal first item "slope" second "stat err" third "chi2/dof"
mini_step_joscha_av_b1x =  [-1.001751  ,  0.001345  ,  0.075527] 
mini_step_joscha_av_b2x =  [-0.994121  ,  0.001351  ,  1.0900763333333334]
mini_step_joscha_av_b1y =  [0.99408  ,  0.001597  ,  0.05696466666666666]
mini_step_joscha_av_b2y =  [0.993926  ,  0.001574  ,  1.2295683333333334]

mini_step_joscha_nom_b1x =  [-0.99775  ,  0.001343  ,  0.9988980000000001] 
mini_step_joscha_nom_b2x =  [-0.99492  ,  0.001354  ,  0.402205]
mini_step_joscha_nom_b1y =  [0.991517  ,  0.001594  ,  0.7839053333333333]
mini_step_joscha_nom_b2y =  [0.993802  ,  0.001574  ,  0.09041066666666665]

mini_step_joscha_dor_b1x =  [-1.001839  ,  0.001345  ,  0.08992966666666667] 
mini_step_joscha_dor_b2x =  [-0.993685  ,  0.001354  ,  1.3306256666666667]
mini_step_joscha_dor_b1y =  [0.993412  ,  0.0016  ,  0.014416]
mini_step_joscha_dor_b2y =  [0.993511  ,  0.001574  ,  1.3661803333333333]

mini_step_joscha_arc_b1x =  [-1.001662  ,  0.001345  ,  0.25517266666666666] 
mini_step_joscha_arc_b2x =  [-0.994558  ,  0.00135  ,  0.8986153333333333]
mini_step_joscha_arc_b1y =  [0.992505  ,  0.001593  ,  0.222486]
mini_step_joscha_arc_b2y =  [0.994341  ,  0.001574  ,  1.1809396666666667]

#mini per beam without outlier removal first item "slope" second "stat err" third "chi2/dof"
mini_beam_nojoscha_av_b1x =  [-0.998449  ,  0.00134  ,  0.073416] 
mini_beam_nojoscha_av_b2x =  [-0.995615  ,  0.001353  ,  1.0856223333333335]
mini_beam_nojoscha_av_b1y =  [0.991829  ,  0.001594  ,  0.056765]
mini_beam_nojoscha_av_b2y =  [0.993923  ,  0.001574  ,  1.228356]

mini_beam_nojoscha_nom_b1x =  [-0.99775  ,  0.001343  ,  0.9988980000000001] 
mini_beam_nojoscha_nom_b2x =  [-0.99492  ,  0.001354  ,  0.402205]
mini_beam_nojoscha_nom_b1y =  [0.991517  ,  0.001594  ,  0.7839053333333333]
mini_beam_nojoscha_nom_b2y =  [0.993802  ,  0.001574  ,  0.09041066666666665]

mini_beam_nojoscha_dor_b1x =  [-0.998495  ,  0.00134  ,  0.086374] 
mini_beam_nojoscha_dor_b2x =  [-0.995406  ,  0.001356  ,  1.3283186666666666]
mini_beam_nojoscha_dor_b1y =  [0.991151  ,  0.001596  ,  0.014704333333333333]
mini_beam_nojoscha_dor_b2y =  [0.99351  ,  0.001574  ,  1.3663123333333334]

mini_beam_nojoscha_arc_b1x =  [-0.998402  ,  0.001341  ,  0.2532976666666667] 
mini_beam_nojoscha_arc_b2x =  [-0.995823  ,  0.001351  ,  0.8926283333333332]
mini_beam_nojoscha_arc_b1y =  [0.992503  ,  0.001593  ,  0.22293266666666667]
mini_beam_nojoscha_arc_b2y =  [0.994335  ,  0.001574  ,  1.1773686666666667]

#mini per beam with outlier removal first item "slope" second "stat err" third "chi2/dof"
mini_beam_joscha_av_b1x =  [-1.001751  ,  0.001345  ,  0.07486666666666666] 
mini_beam_joscha_av_b2x =  [-0.994115  ,  0.001351  ,  1.084231]
mini_beam_joscha_av_b1y =  [0.99408  ,  0.001597  ,  0.056961000000000005]
mini_beam_joscha_av_b2y =  [0.993923  ,  0.001574  ,  1.228356]

mini_beam_joscha_nom_b1x =  [-0.99775  ,  0.001343  ,  0.9988980000000001] 
mini_beam_joscha_nom_b2x =  [-0.99492  ,  0.001354  ,  0.402205]
mini_beam_joscha_nom_b1y =  [0.991517  ,  0.001594  ,  0.7839053333333333]
mini_beam_joscha_nom_b2y =  [0.993802  ,  0.001574  ,  0.09041066666666665]

mini_beam_joscha_dor_b1x =  [-1.00184  ,  0.001345  ,  0.08868666666666668] 
mini_beam_joscha_dor_b2x =  [-0.993681  ,  0.001354  ,  1.326259]
mini_beam_joscha_dor_b1y =  [0.99341  ,  0.0016  ,  0.014487666666666668]
mini_beam_joscha_dor_b2y =  [0.99351  ,  0.001574  ,  1.3663123333333334]

mini_beam_joscha_arc_b1x =  [-1.001662  ,  0.001345  ,  0.2550803333333333] 
mini_beam_joscha_arc_b2x =  [-0.99455  ,  0.00135  ,  0.8917096666666667]
mini_beam_joscha_arc_b1y =  [0.992503  ,  0.001593  ,  0.22293266666666667]
mini_beam_joscha_arc_b2y =  [0.994335  ,  0.001574  ,  1.1773686666666667]

#LSC calculations and its error:
x_scan_LSC = (mini_beam_joscha_av_b1x[0] + mini_beam_joscha_av_b2x[0])/2
y_scan_LSC = (mini_beam_joscha_av_b1y[0] + mini_beam_joscha_av_b2y[0])/2


arc_B1_B2_x = (mini_beam_joscha_arc_b1x[0] + mini_beam_joscha_arc_b2x[0])/2
arc_B1_B2_y = (mini_beam_joscha_arc_b1y[0] + mini_beam_joscha_arc_b2y[0])/2
dor_B1_B2_x = (mini_beam_joscha_dor_b1x[0] + mini_beam_joscha_dor_b2x[0])/2
dor_B1_B2_y = (mini_beam_joscha_dor_b1y[0] + mini_beam_joscha_dor_b2y[0])/2


stat_err_xscan = np.sqrt(((mini_beam_joscha_av_b1x[1])**2 * max(mini_beam_joscha_av_b1x[2],1)) + ((mini_beam_joscha_av_b2x[1])**2 * max(mini_beam_joscha_av_b2x[2],1))) / 2
stat_err_yscan = np.sqrt(((mini_beam_joscha_av_b1y[1])**2 * max(mini_beam_joscha_av_b1y[2],1)) + ((mini_beam_joscha_av_b2y[1])**2 * max(mini_beam_joscha_av_b2y[2],1))) / 2

OD_max_arc_dor_from_xscanLSC= max (abs(arc_B1_B2_x - x_scan_LSC), abs(dor_B1_B2_x - x_scan_LSC))
OD_max_arc_dor_from_yscanLSC= max (abs(arc_B1_B2_y - y_scan_LSC), abs(dor_B1_B2_y - y_scan_LSC))
OD_with_without_outliers_removals_xscan = abs(((mini_beam_nojoscha_av_b1x[0]+mini_beam_nojoscha_av_b2x[0])/2) - x_scan_LSC)
OD_with_without_outliers_removals_yscan = abs(((mini_beam_nojoscha_av_b1y[0]+mini_beam_nojoscha_av_b2y[0])/2) - y_scan_LSC)
OD_mini_per_step_beam_xscan = abs(((mini_step_joscha_av_b1x[0] + mini_step_joscha_av_b2x[0])/2) - x_scan_LSC)
OD_mini_per_step_beam_yscan = abs(((mini_step_joscha_av_b1y[0] + mini_step_joscha_av_b2y[0])/2) - y_scan_LSC)


# nom values without using step size for end of the year data ( no legacy data)
nom_values_without_legacy_data_nostepsize_xscan = abs((-0.9968 - 0.9921)/2)
nom_values_without_legacy_data_nostepsize_yscan = (0.9993 + 0.9988)/2

vtx_recostruction_err_xscan = abs(abs(((no_step_nom_b1x[0] + no_step_nom_b2x[0])/2)) - nom_values_without_legacy_data_nostepsize_xscan)
vtx_recostruction_err_yscan = abs(((no_step_nom_b1y[0] + no_step_nom_b2y[0])/2) - nom_values_without_legacy_data_nostepsize_yscan)

tot_err_xscan = np.sqrt(stat_err_xscan**2 + OD_max_arc_dor_from_xscanLSC**2 + OD_with_without_outliers_removals_xscan**2 + OD_mini_per_step_beam_xscan**2 + vtx_recostruction_err_xscan**2)
tot_err_yscan = np.sqrt(stat_err_yscan**2 + OD_max_arc_dor_from_yscanLSC**2 + OD_with_without_outliers_removals_yscan**2 + OD_mini_per_step_beam_yscan**2 + vtx_recostruction_err_yscan**2)


corr_sigma_vis_var = ((abs(x_scan_LSC)-1) + (abs(y_scan_LSC)-1)) * 100
corr_sigma_vis_const = ((abs(-0.9946)-1) + 0.9997-1)* 100
err_sigma_vis_var = np.sqrt(tot_err_xscan**2 + tot_err_yscan**2)* 100
err_sigma_vis_const = np.sqrt(0.00255**2 + 0.00287**2)* 100


tot_corr_sigma_visible = ((corr_sigma_vis_var / err_sigma_vis_var**2) + (corr_sigma_vis_const / err_sigma_vis_const**2))/((1 / err_sigma_vis_var**2) + (1 / err_sigma_vis_const**2))
tot_corr_sigma_visible_err = np.sqrt(1 / ((1 / err_sigma_vis_var**2) + (1 / err_sigma_vis_const**2)))



print ('LSC calculations using old data and beambumb at zero seperation for each beam ')
print ('LSC in X scan = %0.7f' %x_scan_LSC)
print ('LSC in Y scan = %0.7f' %y_scan_LSC)
print ('stat. err. X scan = %0.7f' %stat_err_xscan)
print ('stat. err. Y scan = %0.7f' %stat_err_yscan)
print ('OD from the diff. between arc and dor from average X scan = %0.7f' %OD_max_arc_dor_from_xscanLSC)
print ('OD from the diff. between arc and dor from average Y scan = %0.7f' %OD_max_arc_dor_from_yscanLSC)
print ('OD from the diff. with and without outliers removals X scan = %0.7f' %OD_with_without_outliers_removals_xscan)
print ('OD from the diff. with and without outliers removals Y scan = %0.7f' %OD_with_without_outliers_removals_yscan)
print ('OD from the diff. mini per step and per beam X scan = %0.7f' %OD_mini_per_step_beam_xscan)
print ('OD from the diff. mini per step and per beam Y scan = %0.7f' %OD_mini_per_step_beam_yscan)

'''
print ('vtx reconstruction err. X scan = %0.7f' %vtx_recostruction_err_xscan)
print ('vtx reconstruction err. Y scan = %0.7f' %vtx_recostruction_err_yscan)
print ('=============================================================================================')
print ('var. LSC in X scan +- errors = ', '%0.7f' %x_scan_LSC , '+-' , '%0.7f' %tot_err_xscan)
print ('constant LSC in X scan +- errors = ', -0.9946 , '+-' , 0.00255)
print ('var. LSC in Y scan +- errors = ', '%0.7f' %y_scan_LSC , '+-' , '%0.7f' %tot_err_yscan)
print ('constant LSC in Y scan +- errors = ', 0.9997 , '+-' , 0.00287)
print ('=============================================================================================')
print ('corr. to sigma visible from var. LSC +- errors in % = ' , '%0.7f' % corr_sigma_vis_var, '+-' , '%0.7f' %err_sigma_vis_var)
print ('corr. to sigma visible from constant LSC +- errors in % = ' , '%0.7f' % corr_sigma_vis_const, '+-' , '%0.7f' %err_sigma_vis_const)
print ('=============================================================================================')
print ('corr. to sigma visible from variable & constant LSC +- errors in % = ' , '%0.3f' %tot_corr_sigma_visible , '+-' , '%0.3f' %tot_corr_sigma_visible_err , '%') 
'''



'''
#additional calculations 

diff_B1_B2_xscan = abs(mini_beam_joscha_av_b1x[0] - x_scan_LSC)
diff_B1_B2_yscan = abs(mini_beam_joscha_av_b1y[0] - y_scan_LSC)

diff_using_step_without_step_xscan = abs(((no_step_av_b1x[0]+no_step_av_b2x[0])/2) - x_scan_LSC) 
diff_using_step_without_step_yscan = abs(((no_step_av_b1y[0]+no_step_av_b2y[0])/2) - y_scan_LSC)

print ('diff. arc and average X scan = %0.7f' %(arc_B1_B2_x - x_scan_LSC))
print ('diff. arc and average Y scan = %0.7f' %(arc_B1_B2_y - y_scan_LSC))
print ('diff. dor and average X scan = %0.7f' %(dor_B1_B2_x - x_scan_LSC))
print ('diff. dor and average Y scan = %0.7f' %(dor_B1_B2_y - y_scan_LSC))
print ('diff_B1_B2_xscan X scan = %0.7f' %diff_B1_B2_xscan)
print ('diff_B1_B2_xscan Y scan = %0.7f' %diff_B1_B2_yscan)
print ('diff_using_step_without_step X scan = %0.7f' %diff_using_step_without_step_xscan)
print ('diff_using_step_without_step Y scan = %0.7f' %diff_using_step_without_step_yscan)
'''



