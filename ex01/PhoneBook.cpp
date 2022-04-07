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
}

Contact PhoneBook::getContact(int index)
{
	return this->contacts[index];
}
