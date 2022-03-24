#include "Date.h"

Date::Date()
{
	this->day = 1;
	this->mounth = 1;
	this->year = 1900;
}

Date::Date(int day, int mounth, int year)
{
	this->day = day;
	this->mounth = mounth;
	this->year = year;
}
