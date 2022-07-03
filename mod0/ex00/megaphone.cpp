#include <iostream>


int main(int argc, char **argv)
{
	std::string line;
	int i, j = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(j < argc)
	{
		line = argv[j];
		i = 0;
		while ((unsigned long)i < line.size())
		{
			putchar(toupper(line[i]));
			i++;
		}
		if (j != argc - 1)
			std::cout << ' ';
		j++;
	}
}

