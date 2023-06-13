#include <iostream>

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int main ()
{
	PhoneBook phoneBook;
	
	int			run = 1;
	std::string choice;
	while (run) {
		std::cout << "What would you like to do?\n";
		std::cout << "ADD\n";
		std::cout << "SEARCH\n";
		std::cout << "EXIT\n";
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		std::cout << std::endl;
		
		if (choice == "ADD") {
			phoneBook.addContact();
			std::cout << std::endl;
		} else if (choice == "SEARCH") {
			phoneBook.displayPhoneBook();
			std::cout << std::endl;
		} else if (choice == "EXIT") {
			std::cout << "Exiting...\n";
			run = 0;
		} else {
			std::cout << "Invalid choice. Please try again.\n";
		}
	}


	return 0;
}