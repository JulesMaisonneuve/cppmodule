#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phoneBook;
	string command;
	string value;
	Contact contact;
	while (1)
	{
		cin >> command;
		if (command.compare("ADD") == 0)
		{
			Contact newContact; 
			cout << "Enter first name" << endl;
			cin >> value;
			newContact.setFirstName(value);
			cout << "Enter last name" << endl;
			cin >> value;
			newContact.setLastName(value);
			cout << "Enter nickname" << endl;
			cin >> value;
			newContact.setNickname(value);
			cout << "Enter number" << endl;
			cin >> value;
			newContact.setNumber(value);
			cout << "Enter darkest secret" << endl;
			cin >> value;
			newContact.setSecret(value);
			phoneBook.addContact(newContact);
			value = newContact.getFirstName();
		}
		if (command.compare("SEARCH") == 0)
		{
			cout << std::setw(10);
			cout << "index" << "|";
			cout << std::setw(10);
			cout << "first name" << "|";
			cout << std::setw(10);
			cout << "last name" << "|";
			cout << std::setw(10);
			cout << "nickname" << "|" << endl;

			phoneBook.printContacts();


		}
		
	}
	return 0;
}
