#include "Adress.h"

Address::Address()
{
	this->country = "NULL";
	this->city = "NULL";
	this->street = "NULL";
	this->house = "NULL";
	this->apartment = "NULL";
}

Address::Address(std::string country, std::string city, std::string street, std::string house, std::string apartment)
{
	this->country = country;
	this->city = city;
	this->street = street;
	this->house = house;
	this->apartment = apartment;
}
