#!/bin/bash

default=$(basename $(pwd))

mA=(700 700 800 800 900 900 1000 1000 1000 1150 1150 1150 1150 1150 1150 1150 1200 1200 1200 1200 1200 1200 1200 1200 1500 1500 1500 1800 1800 2100 2100 2100 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250)
mH=(350 400 600 650 350 400 600 700 800 400 500 600 700 800 900 1000 450 550 650 750 850 1050 950 1000 400 1000 1400 400 1600 400 1000 1600 330 350 400 450 500 550 600 650 700 750 800 850 900 950 1000 1050 1100 1150)
lambda2=(0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734 0.257734)
lambda3=(12.3815 11.1444 9.49491 7.43304 22.9383 21.7012 21.3713 17.0826 12.1341 38.6085 35.6394 32.0105 27.7218 22.7734 17.1651 10.897 41.0828 37.7838 33.825 29.2064 23.928 11.3918 17.9898 14.7733 69.2067 41.4951 9.82481 101.867 22.6909 140.465 112.753 61.2891 48.2119 47.7632 46.5261 45.124 43.557 41.825 39.9281 37.8662 35.6394 33.2477 30.6909 27.9693 25.0827 22.0311 18.8146 15.4331 11.8867 8.17532)

for idx in "${!mA[@]}"; do
   mA_val=${mA[$idx]}
   mH_val=${mH[$idx]}
   ks=0.03
   echo $default
   echo $mA
   echo "Copying mass (mA,mH)" # ($mA_val,$mH_val)
   newdir="$default"_mA"$mA_val"_mH"$mH_val"
   mkdir $newdir
   cp "$default"_customizecards.dat $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_customizecards.dat
   cp "$default"_extramodels.dat $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_extramodels.dat
   cp "$default"_madspin_card.dat $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_madspin_card.dat
   cp "$default"_proc_card.dat $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_proc_card.dat
   cp "$default"_run_card.dat $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_run_card.dat
   # modify output name
   sed -i 's/'$default'/'$default'_mA'$mA_val'_mH'$mH_val'/g' $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_proc_card.dat
   # Modify mass parameter
   sed -i 's/AMASS/'$mA_val'.0/g' $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_customizecards.dat
   sed -i 's/HMASS/'$mH_val'.0/g' $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_customizecards.dat
   sed -i 's/HWIDTH/'$(bc <<< "$ks * $mH_val")'/g' $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_customizecards.dat
   sed -i 's/AWIDTH/'$(bc <<< "$ks * $mA_val")'/g' $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_customizecards.dat
   # Modify lambda2 and lambda3
   sed -i 's/lambda2/'${lambda2[$idx]}'/g' $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_customizecards.dat
   sed -i 's/lambda3/'${lambda3[$idx]}'/g' $newdir/"$default"_mA"$mA_val"_mH"$mH_val"_customizecards.dat
done
