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
			book.search_cont();
		else if (command == "EXIT")
			break;
//		else if (command == "INDEX")
//			std::cout << book.show_index() << std::endl;
	}
}

