#include "../inc/Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Invalid args" << std::endl;
		return (1);
	}
	Harl karen;
	karen.complain(argv[1]);

}