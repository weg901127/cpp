#!/bin/sh

mkdir build
cd build
cmake ..
make
rm -rf CM* cm*
./test | awk '{print $2}' > a
cat ../*.log | awk '{print $2}' >b
diff -b a b
#mv * ..
#cd ..
#rm -rf build
