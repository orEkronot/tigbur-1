#include <iostream>
#include "CarColor.h"

int main()
{
 
    CarColor c(PINK);
    CarColor d;
    int x = (c == d);
 
    std::cout << x << std::endl;

    return 0;
}