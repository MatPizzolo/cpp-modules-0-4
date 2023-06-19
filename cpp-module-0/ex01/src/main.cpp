#include <iostream>

#include "../inc/Contact.hpp"
#include "../inc/PhoneBook.hpp"

int main ()
{
	PhoneBook phoneBook;
	
	std::string choice;
	while (true) {
		std::cout << "What would you like to do?\n";
		std::cout << "ADD\n";
		std::cout << "SEARCH\n";
		std::cout << "EXIT\n";
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		std::cout << std::endl;
		if (std::cin.eof()) {
			std::cout << "Ctrl+D detected. Exiting..." << std::endl;
			break;
		}
		if (choice == "ADD") {
			phoneBook.addContact();
			std::cout << std::endl;
		} else if (choice == "SEARCH") {
			phoneBook.displayPhoneBook();
			std::cout << std::endl;
		} else if (choice == "EXIT") {
			std::cout << "Exiting...\n";
			break ;
		} else {
			std::cout << "Invalid choice. Please try again.\n";
		}
	}


	return 0;
}
