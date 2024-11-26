#pragma once

#include <string>
#include "CarColor.h"
#include <iostream>

class Car {
private:
    // TODO: Add private fields:
    std::string _owner;
    double _price;
    CarColor _carColor;
    std::string _model;
    std::string _company;


public: 
    static int totalCars;

    // TODO: Implement constructor that initializes all fields
    Car(const std::string& owner, const double& price, const CarColor& color, const std::string& model, const std::string& company);


    // TODO: Implement all getters/setters for private fields

      // getters
    std::string getOwner() const;
    double getPrice() const;
    CarColor getCarColor() const;
    std::string getModel() const;
    std::string getCompany() const;

    // setters
    void setOwner(const std::string& newOwner);
    void setPrice(const double newPrice);
    void setCarColor(const CarColor& newColor);
    void setModel(const std::string& newModel);
    void setCompany(const std::string& newCompany);



    // TODO: Implement print() const - should print in format
    void print() const;


    // TODO: Implement operator< and operator> - compare by price

    bool operator<(const Car& other) const;

    bool operator>(const Car& other) const;


    // TODO: Implement operator== - compare model, company, color and price
    // Cars with different owners can be equal

    bool operator==(const Car& other) const;

    bool operator!=(const Car& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Car& value);


    // TODO: Implement operator!= in one line using operator==

    // BONUS: Add static totalCars counter
    // Initialize to 0, increment in constructor
    // Add getter method
    //
};

