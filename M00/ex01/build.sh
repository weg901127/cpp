#!/bin/sh

mkdir build
cd build
cmake ..
make
rm -rf CM* cm*
#mv * ..
#cd ..
#rm -rf build
