#include <iostream>
#include "../include/displaysequence.h"

template <typename T>
DisplaySequence<T>::DisplaySequence()
{
}

template <typename T>
void DisplaySequence<T>::print()
{
    for (auto &&i : T.sequence_vector)
    {
        std::cout<<i<<" ";
    }
    std::puts("");  
}
