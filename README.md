# Variable-LSC
This code used to calculate Variable Length scale calibration for the 2018 pp Run fill 6868 
1- run find_files.py to get the input files for analysis
2- run analysis_using_stepsize_chi2.py to get the beamspot position at maximum beam overlap after scaling the errors with with the function max(1,sqrt(chi2/ndf)) for step size scaling positions. 
3- run analysis_without_stepsize_chi2.py to get the beamspot position at maximum beam overlap after scaling the errors with with the function max(1,sqrt(chi2/ndf)) for the beam positions without step size scaling.
4- the beamspot position at maximum beam overlap are plotted as afunction of the bump amplitude to get the correction and uncertainty by running the following:
5- step2_using_stepsize_chi2.py and step2_without_stepsize_chi2.py
