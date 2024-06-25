#ifndef COLLATZRECURSIVE_H
#define COLLATZRECURSIVE_H

#include <vector>

class Collatzrecursive
{
    private:
        int start_number;
        std::vector<int> collatz_vector;
    public:
        Collatzrecursive();
        Collatzrecursive(int start_num);
        int CollatzSequence(int start_number);
        void DisplaySequence(Collatzrecursive T);
        ~Collatzrecursive();
};

#endif