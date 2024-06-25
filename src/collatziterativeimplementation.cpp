#include <vector>
#include <iostream>
#include "../include/collatziterative.h"

Collatziterative::Collatziterative()
{
}

Collatziterative::Collatziterative(int start_num):start_number(start_num)
{
}

std::vector<int> Collatziterative::CollatzSequence(int start_number)
{
    if (start_number <= 1)
    {
        collatz_vector.push_back(1);
        return this->collatz_vector;
    }

    collatz_vector.push_back(start_number);
    while (start_number > 1)
    {
        if (start_number % 2 == 0)
        {
            start_number = start_number / 2;
        }
        else
        {
            start_number = start_number * 3 + 1;
        }
        
        collatz_vector.push_back(start_number);
    }

    return this->collatz_vector;
}

void Collatziterative::DisplaySequence(Collatziterative T)
{
    for (auto &&i : T.collatz_vector)
    {
        std::cout<<i<< " ";
    }
    std::puts("");
    
}
Collatziterative::~Collatziterative()
{
}
