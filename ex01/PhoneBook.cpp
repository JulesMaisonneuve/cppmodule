#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::addContact(Contact contact)
{
	this->contacts[index % MAX_PHONEBOOK_SIZE] = contact;
	this->index++;
	// if (this->index == 9)
	// 	this->index--;
}

Contact PhoneBook::getContact(int index)
{
	return this->contacts[index];
}

void	PhoneBook::printIndex(void)
{

	cout << this->index << endl;
	return ;
}

void	PhoneBook::printContacts(void)
{
	string value;
	Contact contact;

	for (int i = 0; i < this->index && i < 8; i++)
	{
		cout << std::setw(10);
		cout << i << "|";
		contact = this->getContact(i);
		value = contact.getFirstName();
		cout << std::setw(10);
		cout << value << "|";
		value = contact.getLastName();
		cout << std::setw(10);
		cout << value << "|";
		value = contact.getNickname();
		cout << std::setw(10);
		cout << value << "|";
		cout << endl;
	}
	return ;
}