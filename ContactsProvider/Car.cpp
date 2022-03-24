#include "Car.h"
Car::Car()
{
	this->mark = "NULL";
	this->model = "NULL";
	this->licensePlate = "NULL";
}
Car::Car(std::string mark, std::string model, std::string licensePlate)
{
	this->mark = mark;
	this->model = model;
	this->licensePlate = licensePlate;
}