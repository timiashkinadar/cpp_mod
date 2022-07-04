#include "phonebook.hpp"

int main()
{
	PhoneBook book = PhoneBook(0);

	std::string command;
	while (1)
	{
		std::cout << "Write the command:" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			book.add_cont();
		else if (command == "SEARCH")
		{
			std::cout << "     index|first name| last name| nickname" << std::endl;
			book.display_cont();
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Сommand doesn't exist. Try again!" <<  std::endl;
	}
}

