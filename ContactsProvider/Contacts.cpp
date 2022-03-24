#include "Contacts.h"

void Contacts::addContact(Contact contact)
{
	this->contacts.push_back(contact);
}

void Contacts::deleteContact(Name name)
{
	this->contacts.erase(std::find_if(this->contacts.begin(), this->contacts.end(), [name](Contact i) {return i.getName() == (Name)name; }));
}

void Contacts::searchByName(Name name)
{
	for (auto i : contacts)
	{
		if (i.getName().getName() == name.getName()) std::cout << i.getInfo() << "\n";
	}
}

void Contacts::searchByPhone(string phone)
{
	for (auto i : contacts)
	{
		if (i.getPhone() == phone) std::cout << i.getInfo() << "\n";
	}
}

bool comparatorName(const Contact& lhs, const Contact& rhs)
{
	return lhs.getName().getLastName() < rhs.getName().getLastName();
}

void Contacts::sortByName()
{
	std::sort(contacts.begin(), contacts.end(), &comparatorName);
}

bool comparatorPhone(const Contact& lhs, const Contact& rhs)
{
	return lhs.getPhone() < rhs.getPhone();
}

void Contacts::sortByPhone()
{
	std::sort(contacts.begin(), contacts.end(), &comparatorPhone);
}

void Contacts::print(int index)
{
	std::cout << contacts[index].getInfo() << '\n';
}

void Contacts::printAll()
{
	for (int i = 0; i < this->contacts.size(); i++)
	{
		std::cout << i << ". " << contacts[i].getName().getName() << " " << contacts[i].getName().getLastName() << " " << contacts[i].getName().getPatronymic() << "\n";
	}
}