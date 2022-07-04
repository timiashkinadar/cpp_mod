#include "phonebook.hpp"

void PhoneBook::add_cont(){
	std::string fn, ln, nn, pn, sec;
	std::cout << "Write the first name" << std::endl;
	std::cin >> fn;
	contacts[i].set_fn(fn);
	std::cout << "Write the last name" << std::endl;
	std::cin >> ln;
	contacts[i].set_ln(ln);
	std::cout << "Write the nickname" << std::endl;
	std::cin >> nn;
	contacts[i].set_nn(nn);
	std::cout << "Write the phone number" << std::endl;
	std::cin >> pn;
	contacts[i].set_pn(pn);
	std::cout << "Write the darkest secret" << std::endl;
	std::cin >> sec;
	contacts[i].set_ds(sec);
	i++;
	if (i == 8)
		i = 0;
}

void PhoneBook::display_cont(){
	std::string fn, ln, nn;
	int j = 0;
	while(j < 8)
	{
		std::cout << std::setw(10) << j << "|";
		if ( contacts[j].get_fn().length() <= 10)
			std::cout << std::setw(10) << contacts[j].get_fn() << "|";
		else
			std::cout << contacts[j].get_fn().substr(0, 9) << "." << "|";
		if ( contacts[j].get_ln().length() <= 10)
			std::cout << std::setw(10) << contacts[j].get_ln() << "|";
		else
			std::cout << contacts[j].get_ln().substr(0, 9) << "." << "|";
		if ( contacts[j].get_nn().length() <= 10)
			std::cout << std::setw(10) << contacts[j].get_nn() << std::endl;
		else
			std::cout << contacts[j].get_nn().substr(0, 9) << "." << std::endl;
		j++;
	}
}

PhoneBook::PhoneBook(int i){
	PhoneBook::i = i;
}

void Contact::set_fn(std::string s){
	f_name = s;
}

void Contact::set_ln(std::string s){
	l_name = s;
}

void Contact::set_nn(std::string s){
	nickname = s;
}

void Contact::set_pn(std::string s){
	num = s;
}

void Contact::set_ds(std::string s){
	secret = s;
}

std::string Contact::get_fn(){
	return f_name;
}

std::string Contact::get_ln(){
	return l_name;
}

std::string Contact::get_nn(){
	return nickname;
}

std::string Contact::get_pn(){
	return num;
}

std::string Contact::get_ds(){
	return secret;
}