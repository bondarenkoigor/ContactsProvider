#pragma once
#include <string>
class Name
{
private:
	std::string firstName;
	std::string lastName;
	std::string patronymic;
public:
	Name();
	Name(std::string firstName, std::string lastName, std::string patronymic);

	inline std::string getName() const {
		return this->firstName;
	}
	inline std::string getLastName() const {
		return this->lastName;
	}
	inline std::string getPatronymic() const {
		return this->patronymic;
	}

	bool operator==(const Name& other);
};