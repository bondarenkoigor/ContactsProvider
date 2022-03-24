#pragma once
#include<string>

class Car {
private:
	std::string mark;
	std::string model;
	std::string licensePlate;
public:
	Car();
	Car(std::string mark, std::string model, std::string licensePlate);

	inline std::string getMark() const {
		return this->mark;
	}
	inline std::string getModel() const {
		return this->model;
	}
	inline std::string getLicensePlate() const {
		return this->licensePlate;
	}
};