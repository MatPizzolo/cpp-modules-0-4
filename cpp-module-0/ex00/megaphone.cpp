#include <iostream>

int main (int argc, char *argv[])
{
	int	i;
  
	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			for (size_t x = 0; x < strlen(argv[i]); x++)
        		argv[i][x] = toupper(argv[i][x]);
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	else
  		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  return 0;
}
