#include <iostream>
#include <string>

int main(int ac, char **av)
{
	std::string s = "243";
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int	i;
	int j;

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			std::cout << (char) std::toupper(av[i][j]);
	}
	std::cout << std::endl;
	return 0;
}
