#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

using namespace std;

class Contact
{
	private:
		string firstName;
		string lastName;
		string nickname;
		string number;
		string secret;
	public:
		Contact(void);
		~Contact(void);
		void setFirstName(string firstName);
		string getFirstName(void);
		void setLastName(string lastName);
		string getLastName(void);
		void setNickname(string nickname);
		string getNickname(void);
		void setNumber(string number);
		string getNumber(void);
		void setSecret(string secret);
		string getSecret(void);

};

#endif
