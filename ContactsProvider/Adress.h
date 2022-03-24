#pragma once
#include<string>

class Address {
private:
	std::string country;
	std::string city;
	std::string street;
	std::string house;
	std::string apartment;
public:
	Address();
	Address(std::string country, std::string city, std::string street, std::string house, std::string apartment);

	inline std::string getCountry() const {
		return this->country;
	}
	inline std::string getCity() const {
		return this->city;
	}
	inline std::string getStreet() const {
		return this->street;
	}
	inline std::string getHouse() const {
		return this->house;
	}
	inline std::string getApartment() const {
		return this->apartment;
	}
};