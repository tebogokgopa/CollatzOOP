#ifndef DISPLAYSEQUENCE_H
#define DISPLAYSEQUENCE_H

#include <vector>

template <typename T> class DisplaySequence
{
    private:
        int start_number;
        std::vector<T> sequence_vector;
    public:
        DisplaySequence();
        void print();
};
 
#endif