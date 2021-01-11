# Variable-LSC
This code used to calculate Variable Length scale calibration for the 2018 pp Run fill 6868 
1- run "find_files.py" to get the input files for analysis
2- different ways to calculate per step OD correction (step1 and step2 )can be found in "stepsize.ods" file,in this file I used for bump amplitude the average of the two beams position when they are head-on.
3- Using the scanned beam position as bump amplitude,the different ways to calculate per step OD correction for step 2 can be found in "stepsizes_bump_each_beam.ods".
4- the beamspot position at maximum beam overlap after scaling the errors with the function max(1,sqrt(chi2/ndf)) can be found by run the approberiate script in folder "step1_different_ways". 
5- the beamspot position at maximum beam overlap is plotted as afunction of the bump amplitude to get the LS correction and uncertainty by running the approberiate script in folder "step2_different_ways".
