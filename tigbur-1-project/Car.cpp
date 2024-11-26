#include "Car.h"
#include <iostream>

int Car::totalCars = 0;

Car::Car(const std::string& owner, const double& price, const CarColor& color, const std::string& model, const std::string& company)
	: _owner(owner),_price(price), _carColor(color),_model(model),_company(company)
{
	totalCars++;
}


//get
std::string Car::getOwner() const { return this->_owner; }
double Car::getPrice() const { return this->_price; }
CarColor Car::getCarColor() const { return this->_carColor; }
std::string Car::getModel() const { return this->_model; }
std::string Car::getCompany() const { return this->_company; }
int Car::getTotalCars(){ return totalCars; }


//set
void Car::setOwner(const std::string& newOwner) { this->_owner = newOwner; }
void Car::setPrice(const double newPrice) { this->_price = newPrice; }
void Car::setCarColor(const CarColor& newColor) { this->_carColor = newColor; }
void Car::setModel(const std::string& newModel) { this->_model = newModel; }
void Car::setCompany(const std::string& newCompany) { this->_company = newCompany; }

void Car::print() const
{
	std::cout << "Model: "<<this->_model << std::endl;
	std::cout << "Company: "<<this->_company << std::endl;
	std::cout << "Price: "<<this->_owner << std::endl;
	std::cout << "" << std::endl;

}

bool Car::operator<(const Car& other) const
{
	return this->_price<other.getPrice() ;
}

bool Car::operator>(const Car& other) const
{
	return this->_price > other.getPrice();
}

bool Car::operator==(const Car& other) const
{
	bool res_model = (this->_model == other.getModel());
	bool res_company = (this->_company == other.getCompany());
	bool res_color = (this->_carColor == other.getCarColor());
	bool res_price = (this->_price == other.getPrice());

	return res_color and res_company and res_model and res_price;
}

bool Car::operator!=(const Car& other) const
{
	return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Car& car)
{
	os << "Model: " << car._model << std::endl;
	os << "Company: " << car._company << std::endl;
	os << "Price: " << car._owner << std::endl;
	os << "" << std::endl;
	return os;
}
