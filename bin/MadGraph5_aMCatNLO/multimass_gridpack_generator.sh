#!/bin/bash

default="AZHToLLtt"
base_path="cards/production/2017/13TeV/AZHToLLtt"

mA_values=(1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250 1250)

mH_values=(450 500 550 600 650 700 750 800 850 900 950 1000 1050 1100 1150)

for idx in "${!mA_values[@]}"; do
    mA=${mA_values[$idx]}
    mH=${mH_values[$idx]}
    model_name="${default}_mA${mA}_mH${mH}"
    
    echo "Running gridpack generation for $model_name"
    ./gridpack_generation.sh "$model_name" "$base_path/$model_name"
    
    echo "#########################################Wait Moving Files to EOS#########################################"
    mv "${model_name}"* /eos/user/h/harshul/created_gridpacks/
    echo "******************************************Moved All Files to EOS******************************************"
done

