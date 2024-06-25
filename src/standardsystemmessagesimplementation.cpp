#include "../include/standardsystemmessages.h"
#include <iostream>

StandardSystemMessages::StandardSystemMessages()
{

}

StandardSystemMessages::~StandardSystemMessages()
{
}

void StandardSystemMessages::welcomeMessage()
{
    std::puts("Collatz Conjecture sequence generator");
    
}

void StandardSystemMessages::exitProgramMessage()
{
    std::puts("Exiting program hope to see you soon........ \n");
}

void StandardSystemMessages::programNameMessage()
{
    std::puts("The Collatz Conjecture, also known as the 3x+1 problem, is a fascinating mathematical\n 
    puzzle that has been named after the German mathematician Lothar Collatz. \n
    This conjecture arises from an iterative process where you start with any positive integer and \n
    alternate between two simple rules: if the number is even, you divide it by 2,\n
    and if it's odd, you multiply it by 3 and add 1.\n
    For example, take the number 3. It's odd, so we multiply by 3 and add 1. We get 10.\n 
    Now that's even, so we can divide it by 2, to get 5. Back to odd, so let's multiply that by 3 and add 1.\n
    We are now at 16, which is very even. So much so that we can keep on dividing by 2 until we reach 1.\n
    What happens when we reach 1? Well, it's odd so we multiply by 3 and add 1.\n 
    And we are back at 4, which leads back to one. We have reached a cycle.\n
    The question is, can you predict what the number will be after a certain number of iterations?\n
    The conjecture is that no matter what starting number you choose, regardless of its size,\n
    you will always reach the number 1.\n
    However, despite being relatively simple to understand and easy to test for small numbers,\n 
    it has so far proven difficult to prove definitively for all cases. \n
    This conjecture is an unsolved problem in mathematics that continues to intrigue both mathematicians and\n 
    enthusiasts alike.\n");
}
