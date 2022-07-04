
#ifndef C__MOD_PHONEBOOK_HPP
#define C__MOD_PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact{
public:
	void set_fn(std::string s);
	void set_ln(std::string s);
	void set_nn(std::string s);
	void set_pn(std::string s);
	void set_ds(std::string s);
	std::string get_fn();
	std::string get_ln();
	std::string get_nn();
	std::string get_pn();
	std::string get_ds();
private:
	std::string f_name;
	std::string l_name;
	std::string nickname;
	std::string num;
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
};

#endif //C__MOD_PHONEBOOK_HPP
