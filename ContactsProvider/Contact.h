#pragma once
#include "Date.h"
#include "Name.h"
#include"Company.h"
#include"Car.h"
#include"Adress.h"
using std::string;
using std::to_string;
class Contact {

private:
	Name name;
	Date birthday;

	string phone;
	Address address;

	Car car;
	Company company;
public:

	/*Contact(string name, string lastName, string patronymic, int day, int mounth, int year, string phone,
		string country, string city, string street, string house, string apartment,
		string mark, string model, string licensePlate,
		string nameComp, string positionComp
	)
	{
		this->name = new Name(name, lastName, patronymic);
		this->birthday = new Date(day, mounth, year);

		this->phone = phone;

		this->address = new Address(country, city, street, house, apartment);
		this->company = new Company(nameComp, positionComp);
		this->car = new Car(mark, model, licensePlate);
	}*/

	Contact(Name fio, Date birthday, string phone, Address address, Car car, Company company)
	{
		this->name = fio;
		this->birthday = birthday;
		this->address = address;
		this->car = car;
		this->company = company;
		this->phone = phone;
	}

	inline string getInfo() const
	{
		return name.getName() + " " + name.getLastName() + " " + name.getPatronymic() + "\n" +
			to_string(birthday.getDay()) + "." + to_string(birthday.getMounth()) + "." + to_string(birthday.getYear()) + "\n"
			+ phone + "\n"
			+ address.getCountry() + " " + address.getCity() + " " + address.getStreet() + " " + address.getHouse() + " " + address.getApartment() + "\n"
			+ car.getMark() + " " + car.getModel() + " " + car.getLicensePlate() + "\n"
			+ company.getName() + "\n";
	}

	inline Name getName() const {
		return this->name;
	}
	inline Date getBirthday() const {
		return this->birthday;
	}
	inline string getPhone() const {
		return this->phone;
	}
	inline Address getAdress() const {
		return this->address;
	}
	inline Car getCar() const {
		return this->car;
	}
	inline Company getCompany() const {
		return this->company;
	}

};
