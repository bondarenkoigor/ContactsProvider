#pragma once
class Date
{
private:
	int day;
	int mounth;
	int year;
public:
	Date();
	Date(int day, int mounth, int year);

	inline int getDay() const {
		return this->day;
	}
	inline int getMounth() const {
		return this->mounth;
	}
	inline int getYear() const {
		return this->year;
	}
};