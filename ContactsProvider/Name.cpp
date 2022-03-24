#include "Name.h"

Name::Name()
{
	this->firstName = "NULL";
	this->lastName = "NULL";
	this->patronymic = "NULL";
}

Name::Name(std::string firstName, std::string lastName, std::string patronymic)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->patronymic = patronymic;
}

bool Name::operator==(const Name& other)
{
	return (this->firstName == other.firstName && this->lastName == other.lastName && this->patronymic == other.patronymic);
}
