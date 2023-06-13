#include <fstream>
#include <iostream>

bool fileExists(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    return file.good();
}


int check_args(std::string filename, std::string str1, std::string str2)
{
	int res = 1;
	std::fstream fd;
	
	fd.open (filename, std::fstream::in);
	if (fd.is_open() == false)
	{
		std::cout << "File is no good" << std::endl;
		return 0;
	}
	if (str1.compare(str2) == 0)
	{	
		std::cout << "Both the input strings are equal." << std::endl;
		return 0;
	}
	if (str1.length() == 0 || str2.length() == 0)
	{	
		std::cout << "An input is empty " << std::endl;
		return 0;
	}
	return res;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	if (check_args(argv[1], argv[2], argv[3]) == 0)
	{
		std::cout << "Invalid argument/s" << std::endl;
		return (1);
	}
	std::string line;
	std::fstream fd;
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	std::string rep = ".replace";
	std::ofstream fileout(argv[1] + rep);
	fd.open(argv[1], std::fstream::in);
  	while (fd)
	{
		std::getline(fd, line);
		if (line.length() == 0)
			fd.close();
		else
		{
			if (line.compare(str1) == 0)
			{
				fileout << str2 + "\n";
			}
			else
				fileout << line + "\n"; 
		}
	}
}
