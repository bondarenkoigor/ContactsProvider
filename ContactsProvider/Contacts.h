#include<vector>
#include<algorithm>
#include<iostream>
#include"Contact.h"

class Contacts
{
private:
	std::vector<Contact> contacts;
public:
	Contacts() {}
	void addContact(Contact contact);
	void deleteContact(Name name);
	void searchByName(Name name);
	void searchByPhone(string phone);
	void sortByName();
	void sortByPhone();
	void print(int index);
	void printAll();
	inline size_t getSize() {
		return this->contacts.size();
	}
};