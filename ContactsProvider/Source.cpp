#include <iostream>
#include <string>
#include"Contacts.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	Contacts contacts;
	unsigned int check;
	do {
		system("cls");
		cout << "1 - Добавление контакта\n";
		cout << "2 - Удаление контакта по имени\n";
		cout << "3 - Поиск контакта по имени\n";
		cout << "4 - Поиск контакта по номеру телефона\n";
		cout << "5 - Сортировка по имени\n";
		cout << "6 - Сортировка по номеру телефона\n";
		cout << "7 - Список контактов\n";
		cout << "8 - Подробная информация о контакте\n";
		cout << "0 - Выход\n";
		cin >> check;
		cin.ignore();
		switch (check)
		{
		case 1: {
			string name, lastName, patronymic;
			cout << "Введите имя ";
			getline(cin, name);
			cout << "Введите фамилию ";
			getline(cin, lastName);
			cout << "Введите отчество ";
			getline(cin, patronymic);
			int d, m, y;
			cout << "Введите дату рождения (d/m/y) ";
			cin >> d >> m >> y;
			string number;
			cin.ignore();
			cout << "Введите номер телефона ";
			getline(cin, number);
			string country, city, street, house, apartment;
			cout << "Введите страну проживания ";
			getline(cin, country);
			cout << "Введите город проживания ";
			getline(cin, city);
			cout << "Введите улицу проживания ";
			getline(cin, street);
			cout << "Введите дом проживания ";
			getline(cin, house);
			cout << "Введите квартиру проживания ";
			getline(cin, apartment);
			string mark, model, licensePlate;
			cout << "Введите марку машины ";
			getline(cin, mark);
			cout << "Введите модель машины ";
			getline(cin, model);
			cout << "Введите номера машины ";
			getline(cin, licensePlate);
			string companyName, position;
			cout << "Введите компанию ";
			getline(cin, companyName);
			cout << "Введите должность ";
			getline(cin, position);
			contacts.addContact(Contact(Name(name, lastName, patronymic), Date(d, m, y), number, Address(country, city, street, house, apartment), Car(mark, model, licensePlate), Company(companyName, position)));
			break;
		}
		case 2:
		{
			string name, lastName, patronymic;
			cout << "Введите ФИО: ";
			getline(cin, name);
			getline(cin, lastName);
			getline(cin, patronymic);
			contacts.deleteContact(Name(name, lastName, patronymic));
			break;
		}
		case 3:
		{
			string name, lastName, patronymic;
			cout << "Введите ФИО: ";
			getline(cin, name);
			getline(cin, lastName);
			getline(cin, patronymic);
			contacts.searchByName(Name(name, lastName, patronymic));
			break;
		}
		case 4:
		{
			string phone;
			cout << "Введите номер телефона ";
			getline(cin, phone);
			contacts.searchByPhone(phone);
			break;
		}
		case 5:
		{
			contacts.sortByName();
			break;
		}
		case 6:
		{
			contacts.sortByPhone();
			break;
		}
		case 7:
		{
			contacts.printAll();
			break;
		}
		case 8:
		{
			std::cout << "Введите номер нужного контакта: ";
			int index;
			cin >> index;
			if (index >= contacts.getSize()) break;
			cin.ignore();
			contacts.print(index);
			break;
		}
		}
		system("pause");
	} while (check != 0);


}
