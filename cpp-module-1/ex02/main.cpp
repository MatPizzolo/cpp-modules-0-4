#include <iostream>
#include <string>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory address of the string: " << &str << std::endl;
	std::cout << "Memory address of stringPTR:  " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF:  " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of str var:   " << str << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;

	return 0;
}