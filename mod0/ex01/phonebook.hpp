
#ifndef C__MOD_PHONEBOOK_HPP
#define C__MOD_PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact
{
public:
	std::string f_name;
	std::string l_name;
	std::string nickname;
	long num;
	std::string secret;
};

class PhoneBook{
private:

	Contact contacts[8];
	int i;

public:
	explicit PhoneBook(int i);
	void add_cont();
	void display_cont();
	void search_cont();
};


#endif //C__MOD_PHONEBOOK_HPP
