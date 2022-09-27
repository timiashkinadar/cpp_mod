
#ifndef C__MOD_PHONEBOOK_HPP
#define C__MOD_PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.h"
class PhoneBook{
private:

	Contact contacts[8];
	int i;

public:
	explicit PhoneBook(int i);
	void add_cont();
	void display_cont();
};

#endif //C__MOD_PHONEBOOK_HPP
