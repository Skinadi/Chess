#!/bin/bash

echo $1
if [[ -n $1 ]]
then
    rm -rf build
    mkdir build
fi
cd build
cmake ..
make RunTests
cd ..