#!/bin/bash

set -e
set +x

pushd ..
    if [ -d build ]; then
    rm build -rf
    fi
    mkdir build
popd

pushd ../build
    cmake .. && make -j128 && make install
popd
