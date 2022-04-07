#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"
# include <iomanip>

# define MAX_PHONEBOOK_SIZE 8

class PhoneBook {
	private:
		Contact contacts[MAX_PHONEBOOK_SIZE];
		int index;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact(Contact contact);
		Contact getContact(int index);
		void printIndex(void);
		void printContacts(void);
};

#endif
