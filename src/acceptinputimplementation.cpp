#include "../include/acceptinput.h"
#include <iostream>


Acceptinput::Acceptinput()
{
}
Acceptinput::~Acceptinput()
{
}

int Acceptinput::acceptUserInput()
{
    int start_number;
    std::cout<<"Type in the number you would like the sequence to start with\n";
    std::cout<<"Start number : ";
    cin>>start_number;
    if (validateInput(start_number))
    {
      return start_number;
    }
    else
    {
        return -1;
    }
    
}

bool Acceptinput::validateInput(int i_arg)
{
    if (isdigit(i_arg) == 1)
    {
        return true;
    }
    
    return false;
}
