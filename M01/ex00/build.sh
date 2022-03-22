#!/bin/sh

rm -rf cmake-build-debug/
mkdir build
cd build
cmake ..
make
rm -rf CM* cm*
rm zombie
#mv * ..
#cd ..
#rm -rf build
