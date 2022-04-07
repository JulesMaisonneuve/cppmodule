#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::setFirstName(string firstName)
{
	this->firstName = firstName;
}

string Contact::getFirstName(void)
{
	return this->firstName;
}

void Contact::setLastName(string lastName)
{
	this->lastName = lastName;
}

string Contact::getLastName(void)
{
	return this->firstName;
}

void Contact::setNickname(string nickname)
{
	this->nickname = nickname;
}

string Contact::getNickname(void)
{
	return this->nickname;
}

void Contact::setNumber(string number)
{
	this->number = number;
}

string Contact::getNumber(void)
{
	return this->number;
}

void Contact::setSecret(string secret)
{
	this->secret = secret;
}

string Contact::getSecret(void)
{
	return this->secret;
}
