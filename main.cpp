#include<iostream>
#include <chrono>
#include "include/collatziterative.h"
#include "include/collatzrecursive.h"


int main()
{
    Collatziterative collatzit = Collatziterative();
    Collatzrecursive collatzre = Collatzrecursive();

    
    
    std::puts("");
    std::puts("Iterative Collatz Conjecture.");
    auto start = std::chrono::high_resolution_clock::now();
    collatzit.CollatzSequence(13);
    auto end = std::chrono::high_resolution_clock::now();
    auto time_taken = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout<<"Time taken : "<<time_taken.count()<<" microseconds."<<std::endl;
    collatzit.DisplaySequence(collatzit);
    
    std::puts("");

    std::puts("Recursive Collatz Conjecture");
    auto startr = std::chrono::high_resolution_clock::now(); 
    collatzre.CollatzSequence(13);
    auto endr = std::chrono::high_resolution_clock::now();
    auto time_takenr = std::chrono::duration_cast<std::chrono::microseconds>(endr - startr);
    std::cout<<"Time taken : "<<time_takenr.count()<<" microseconds."<<std::endl;
    collatzre.DisplaySequence(collatzre);
    std::puts("");
    return 0;
}