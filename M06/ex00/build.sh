#!/bin/sh

mkdir build
cd build
cmake ..
make
rm -rf CM* cm* main
#mv * ..
#cd ..
#rm -rf build
