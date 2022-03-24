#pragma once
#include <string>
class Company
{
private:
	std::string name;
	std::string position;
public:
	Company();
	Company(std::string name, std::string pos);

	inline std::string getName() const {
		return this->name;
	}
	inline std::string getPosition() const {
		return this->position;
	}
};