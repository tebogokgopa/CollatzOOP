#include <vector>
#include <iostream>
#include "../include/collatzrecursive.h"

Collatzrecursive::Collatzrecursive()
{

}

Collatzrecursive::Collatzrecursive(int start_num): start_number(start_num)
{
    
}

int Collatzrecursive::Collatzrecursive::CollatzSequence(int start_number)
{
   
    if (start_number <= 1)
    {
        collatz_vector.push_back(start_number);
        return 0;
    }

    collatz_vector.push_back(start_number);

    while (start_number > 1)
    {
        if (start_number % 2 == 0)
        {
            start_number = CollatzSequence(start_number/ 2);
        }
        else
        {
            start_number = CollatzSequence(start_number * 3 + 1);
        }   
        
    }
    return 0;
}

void Collatzrecursive::DisplaySequence(Collatzrecursive T)
{
     for (auto &&i : T.collatz_vector)
    {
        std::cout<<i<< " ";
    }
    std::puts("");
}

Collatzrecursive::~Collatzrecursive()
{
}
