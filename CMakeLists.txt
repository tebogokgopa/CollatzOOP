cmake_minimum_required(VERSION 3.9.1)
project(Collatz_seq)
add_executable(collatz main.cpp ./include/collatziterative.h ./src/collatziterativeimplementation.cpp 
./include/collatzrecursive.h ./src/collatzrecursiveimplementation.cpp )