
#include "phonebook.hpp"

	void PhoneBook::add_cont()
	{
		std::cout << "Write the first name" << std::endl;
		std::cin >> contacts[i].f_name ;
		std::cout << "Write the last name" << std::endl;
		std::cin >> contacts[i].l_name;
		std::cout << "Write the nickname" << std::endl;
		std::cin >> contacts[i].nickname;
		std::cout << "Write the phone number" << std::endl;
		std::cin >> contacts[i].num;
		std::cout << "Write the darkest secret" << std::endl;
		std::cin >> contacts[i].secret;
		i++;
		if (i == 8)
			i = 0;
	}
	void PhoneBook::display_cont()
	{
		int j = 0;
		while(j < 8)
		{
			std::cout << std::setw(10) << j << "|";
			if ( contacts[j].f_name.length() <= 10)
				std::cout << std::setw(10) << contacts[j].f_name << "|";
			else
				std::cout << contacts[j].f_name.substr(0, 9) << "." << "|";
			if ( contacts[j].l_name.length() <= 10)
				std::cout << std::setw(10) << contacts[j].l_name << "|";
			else
				std::cout << contacts[j].l_name.substr(0, 9) << "." << "|";
			if ( contacts[j].nickname.length() <= 10)
				std::cout << std::setw(10) << contacts[j].nickname << std::endl;
			else
				std::cout << contacts[j].nickname.substr(0, 9) << "." << "|";
			j++;
		}
	}
	void PhoneBook::search_cont()
	{
//		display_cont();
	}

	PhoneBook::PhoneBook(int i) {
		PhoneBook::i = i;
	}

//	int show_index()
//	{
//		return i;
//	}
//};