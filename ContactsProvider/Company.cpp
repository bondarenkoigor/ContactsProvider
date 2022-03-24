#include "Company.h"

Company::Company()
{
	this->name = "NULL";
	this->position = "NULL";
}

Company::Company(std::string name, std::string pos)
{
	this->name = name;
	this->position = pos;
}
