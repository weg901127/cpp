#!/bin/sh

rm -rf cmake-build-debug
mkdir build
cd build
cmake ..
make
rm -rf CM* cm* zombie
#mv * ..
#cd ..
#rm -rf build
