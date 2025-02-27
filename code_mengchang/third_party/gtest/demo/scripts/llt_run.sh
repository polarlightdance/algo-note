#!/bin/bash

set -e
set +x

current_path=$(pwd)

export LD_LIBRARY_PATH=${current_path}/../../lib

if [ ! -d ../out ]; then
    echo -e "\033[31mError: Need to build first\033[0m"
    exit 1
fi

pushd ../out/llt
    ./llt_demo
popd
