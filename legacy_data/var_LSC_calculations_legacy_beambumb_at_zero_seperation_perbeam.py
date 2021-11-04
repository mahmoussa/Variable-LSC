import os, sys
import ROOT
import math
import numpy as np

#no step size first item "slope" second "stat err" third "chi2/dof"
no_step_av_b1x =  [-0.999698  ,  0.001284  ,  0.1824916666666667] 
no_step_av_b2x =  [-0.998187  ,  0.001283  ,  0.10697866666666667]
no_step_av_b1y =  [1.002409  ,  0.001517  ,  0.10064666666666666]
no_step_av_b2y =  [1.007963  ,  0.001514  ,  0.048640666666666665]

no_step_nom_b1x =  [-0.99726  ,  0.001277  ,  1.0551213333333334] 
no_step_nom_b2x =  [-0.989181  ,  0.001277  ,  0.106257]
no_step_nom_b1y =  [0.991391  ,  0.001501  ,  0.9120086666666666]
no_step_nom_b2y =  [1.003482  ,  0.001508  ,  1.9128103333333335]

no_step_dor_b1x =  [-1.001507  ,  0.001286  ,  0.148284] 
no_step_dor_b2x =  [-1.001894  ,  0.001289  ,  0.18519466666666665]
no_step_dor_b1y =  [1.005183  ,  0.001524  ,  0.02502]
no_step_dor_b2y =  [1.005362  ,  0.00151  ,  0.08604099999999999]

no_step_arc_b1x =  [-0.997895  ,  0.001282  ,  0.42746033333333333] 
no_step_arc_b2x =  [-0.994508  ,  0.001278  ,  0.09294466666666668]
no_step_arc_b1y =  [0.999659  ,  0.001512  ,  0.32042533333333334]
no_step_arc_b2y =  [1.010575  ,  0.001519  ,  0.10960533333333333]

#mini per step without outlier removal first item "slope" second "stat err" third "chi2/dof"
mini_step_nojoscha_av_b1x =  [-0.997963  ,  0.001282  ,  0.18148466666666666] 
mini_step_nojoscha_av_b2x =  [-0.989935  ,  0.001272  ,  0.10487866666666668]
mini_step_nojoscha_av_b1y =  [0.99172  ,  0.0015  ,  0.10042733333333333]
mini_step_nojoscha_av_b2y =  [1.003643  ,  0.001508  ,  0.04885966666666666]

mini_step_nojoscha_nom_b1x =  [-0.99726  ,  0.001277  ,  1.0551213333333334] 
mini_step_nojoscha_nom_b2x =  [-0.989181  ,  0.001277  ,  0.106257]
mini_step_nojoscha_nom_b1y =  [0.991391  ,  0.001501  ,  0.9120086666666666]
mini_step_nojoscha_nom_b2y =  [1.003482  ,  0.001508  ,  1.9128103333333335]

mini_step_nojoscha_dor_b1x =  [-0.998012  ,  0.001281  ,  0.14622433333333332] 
mini_step_nojoscha_dor_b2x =  [-0.989708  ,  0.001273  ,  0.18011533333333332]
mini_step_nojoscha_dor_b1y =  [0.991011  ,  0.001503  ,  0.026063666666666666]
mini_step_nojoscha_dor_b2y =  [1.003205  ,  0.001507  ,  0.085474]

mini_step_nojoscha_arc_b1x =  [-0.997912  ,  0.001282  ,  0.4271606666666667] 
mini_step_nojoscha_arc_b2x =  [-0.99016  ,  0.001273  ,  0.09192266666666667]
mini_step_nojoscha_arc_b1y =  [0.992428  ,  0.001501  ,  0.31613766666666665]
mini_step_nojoscha_arc_b2y =  [1.00408  ,  0.001509  ,  0.10962100000000001]

#mini per step with outlier removal first item "slope" second "stat err" third "chi2/dof"
mini_step_joscha_av_b1x =  [-1.001263  ,  0.001286  ,  0.183742] 
mini_step_joscha_av_b2x =  [-0.988444  ,  0.00127  ,  0.104479]
mini_step_joscha_av_b1y =  [0.993971  ,  0.001504  ,  0.10068666666666666]
mini_step_joscha_av_b2y =  [1.003643  ,  0.001508  ,  0.04885966666666666]

mini_step_joscha_nom_b1x =  [-0.99726  ,  0.001277  ,  1.0551213333333334] 
mini_step_joscha_nom_b2x =  [-0.989181  ,  0.001277  ,  0.106257]
mini_step_joscha_nom_b1y =  [0.991391  ,  0.001501  ,  0.9120086666666666]
mini_step_joscha_nom_b2y =  [1.003482  ,  0.001508  ,  1.9128103333333335]

mini_step_joscha_dor_b1x =  [-1.001355  ,  0.001286  ,  0.14934233333333333] 
mini_step_joscha_dor_b2x =  [-0.987992  ,  0.001271  ,  0.17930566666666667]
mini_step_joscha_dor_b1y =  [0.99327  ,  0.001506  ,  0.025813]
mini_step_joscha_dor_b2y =  [1.003205  ,  0.001507  ,  0.085474]

mini_step_joscha_arc_b1x =  [-1.001171  ,  0.001286  ,  0.42986066666666667] 
mini_step_joscha_arc_b2x =  [-0.988894  ,  0.001271  ,  0.09174966666666667]
mini_step_joscha_arc_b1y =  [0.992428  ,  0.001501  ,  0.31613766666666665]
mini_step_joscha_arc_b2y =  [1.00408  ,  0.001509  ,  0.10962100000000001]

#mini per beam without outlier removal first item "slope" second "stat err" third "chi2/dof"
mini_beam_nojoscha_av_b1x =  [-0.997963  ,  0.001282  ,  0.180945] 
mini_beam_nojoscha_av_b2x =  [-0.989929  ,  0.001272  ,  0.10366233333333334]
mini_beam_nojoscha_av_b1y =  [0.99172  ,  0.0015  ,  0.10043266666666667]
mini_beam_nojoscha_av_b2y =  [1.00364  ,  0.001508  ,  0.049134333333333335]

mini_beam_nojoscha_nom_b1x =  [-0.99726  ,  0.001277  ,  1.0551213333333334] 
mini_beam_nojoscha_nom_b2x =  [-0.989181  ,  0.001277  ,  0.106257]
mini_beam_nojoscha_nom_b1y =  [0.991391  ,  0.001501  ,  0.9120086666666666]
mini_beam_nojoscha_nom_b2y =  [1.003482  ,  0.001508  ,  1.9128103333333335]

mini_beam_nojoscha_dor_b1x =  [-0.998013  ,  0.001281  ,  0.145113] 
mini_beam_nojoscha_dor_b2x =  [-0.989703  ,  0.001273  ,  0.17866033333333334]
mini_beam_nojoscha_dor_b1y =  [0.99101  ,  0.001503  ,  0.026094333333333334]
mini_beam_nojoscha_dor_b2y =  [1.003205  ,  0.001507  ,  0.08566633333333333]

mini_beam_nojoscha_arc_b1x =  [-0.997912  ,  0.001282  ,  0.42718966666666663] 
mini_beam_nojoscha_arc_b2x =  [-0.990152  ,  0.001273  ,  0.09194866666666666]
mini_beam_nojoscha_arc_b1y =  [0.992426  ,  0.001501  ,  0.31682266666666664]
mini_beam_nojoscha_arc_b2y =  [1.004073  ,  0.001509  ,  0.11105]

#mini per beam with outlier removal first item "slope" second "stat err" third "chi2/dof"
mini_beam_joscha_av_b1x =  [-1.001264  ,  0.001286  ,  0.18318166666666666] 
mini_beam_joscha_av_b2x =  [-0.988438  ,  0.00127  ,  0.10326733333333334]
mini_beam_joscha_av_b1y =  [0.99397  ,  0.001504  ,  0.10069133333333334]
mini_beam_joscha_av_b2y =  [1.00364  ,  0.001508  ,  0.049134333333333335]

mini_beam_joscha_nom_b1x =  [-0.99726  ,  0.001277  ,  1.0551213333333334] 
mini_beam_joscha_nom_b2x =  [-0.989181  ,  0.001277  ,  0.106257]
mini_beam_joscha_nom_b1y =  [0.991391  ,  0.001501  ,  0.9120086666666666]
mini_beam_joscha_nom_b2y =  [1.003482  ,  0.001508  ,  1.9128103333333335]

mini_beam_joscha_dor_b1x =  [-1.001356  ,  0.001286  ,  0.14821033333333333] 
mini_beam_joscha_dor_b2x =  [-0.987987  ,  0.001271  ,  0.17785433333333334]
mini_beam_joscha_dor_b1y =  [0.993269  ,  0.001506  ,  0.025843333333333333]
mini_beam_joscha_dor_b2y =  [1.003205  ,  0.001507  ,  0.08566633333333333]

mini_beam_joscha_arc_b1x =  [-1.001171  ,  0.001286  ,  0.42986966666666665] 
mini_beam_joscha_arc_b2x =  [-0.988886  ,  0.001271  ,  0.09178033333333334]
mini_beam_joscha_arc_b1y =  [0.992426  ,  0.001501  ,  0.31682266666666664]
mini_beam_joscha_arc_b2y =  [1.004073  ,  0.001509  ,  0.11105]

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


#  end of the year data ( no legacy data)
old_data_xscan = abs(-0.9979330)
old_data_yscan = 0.9940015

vtx_recostruction_err_xscan = abs(abs(x_scan_LSC) - old_data_xscan)
vtx_recostruction_err_yscan = abs(y_scan_LSC - old_data_yscan)

tot_err_xscan = np.sqrt(stat_err_xscan**2 + OD_max_arc_dor_from_xscanLSC**2 + OD_with_without_outliers_removals_xscan**2 + OD_mini_per_step_beam_xscan**2 + vtx_recostruction_err_xscan**2)
tot_err_yscan = np.sqrt(stat_err_yscan**2 + OD_max_arc_dor_from_yscanLSC**2 + OD_with_without_outliers_removals_yscan**2 + OD_mini_per_step_beam_yscan**2 + vtx_recostruction_err_yscan**2)


corr_sigma_vis_var = ((abs(x_scan_LSC)-1) + (abs(y_scan_LSC)-1)) * 100
corr_sigma_vis_const = ((abs(-0.9946)-1) + 0.9997-1)* 100
err_sigma_vis_var = np.sqrt(tot_err_xscan**2 + tot_err_yscan**2)* 100
err_sigma_vis_const = np.sqrt(0.00255**2 + 0.00287**2)* 100


tot_corr_sigma_visible = ((corr_sigma_vis_var / err_sigma_vis_var**2) + (corr_sigma_vis_const / err_sigma_vis_const**2))/((1 / err_sigma_vis_var**2) + (1 / err_sigma_vis_const**2))
tot_corr_sigma_visible_err = np.sqrt(1 / ((1 / err_sigma_vis_var**2) + (1 / err_sigma_vis_const**2)))



print ('LSC calculations using legacy data and beambumb at zero seperation for each beam ')
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



