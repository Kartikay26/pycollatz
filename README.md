Bind a small C++ function to python and measure speedup.

```
~/Desktop/pycollatz $ mkdir build
~/Desktop/pycollatz $ cd build 
~/Desktop/pycollatz/build $ cmake ..
~/Desktop/pycollatz/build $ make
Scanning dependencies of target collatz
[ 16%] Building CXX object CMakeFiles/collatz.dir/collatz.cpp.o
[ 33%] Linking CXX static library libcollatz.a
[ 33%] Built target collatz
Scanning dependencies of target pycollatz
[ 50%] Building CXX object CMakeFiles/pycollatz.dir/pycollatz.cpp.o
[ 66%] Linking CXX shared module pycollatz.cpython-37m-x86_64-linux-gnu.so
[ 66%] Built target pycollatz
Scanning dependencies of target collatzer
[ 83%] Building CXX object CMakeFiles/collatzer.dir/main.cpp.o
[100%] Linking CXX executable collatzer
[100%] Built target collatzer
~/Desktop/pycollatz/build $ time python ../onlypython.py 
131434272
python ../onlypython.py  31.70s user 0.02s system 100% cpu 31.683 total
~/Desktop/pycollatz/build $ time python ../main.py 
131434272
python ../main.py  2.11s user 0.01s system 100% cpu 2.119 total
~/Desktop/pycollatz/build $ time ./collatzer 
131434272
./collatzer  0.67s user 0.01s system 100% cpu 0.681 total
```
