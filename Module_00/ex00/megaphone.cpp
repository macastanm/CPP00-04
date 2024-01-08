#include <iostream>
#include <cctype>
//using namespace std;

int	main(int argc, char**argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int	i = 1;
		int	j = 0;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				char	c = toupper(argv[i][j]);
				std::cout << c;
				j++;
			}
			if (i != (argc - 1))
				std::cout << " ";
			i++;
		}
	}
	std::cout << "\n";
	return 0;
}
