#ifndef COLLATZITERATIVE_H
#define COLLATZITERATIVE_H

#include <vector>

class Collatziterative
{
    private:
        int start_number;
        std::vector<int> collatz_vector;
    public:
        Collatziterative();
        Collatziterative(int start_num);
        std::vector<int> CollatzSequence(int start_number);
        void DisplaySequence(Collatziterative T);
        ~Collatziterative();
};

#endif