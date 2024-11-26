#include "CarList.h"
#include <iostream>

using std::cout;
using std::endl;


int main()
{
    Car c1("Tomer", 100, Color::PINK, "Prious", "Toyota");
    Car c2("Lior", 200, Color::BLUE, "Ibiza", "Seat");

    std::cout << "Total Cars Number: " << Car::getTotalCars() << std::endl;


    CarList cl;
    cl.add(c1);
    cl.add(c2);
    cl.printMostExpansive();
    return 0;
}