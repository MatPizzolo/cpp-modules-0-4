#include <iostream>
#include <iomanip>

#include "../includes/PhoneBook.hpp"


PhoneBook::PhoneBook() {
	nbrContacts = 0;
}

bool isNumber(const std::string& input) {
    for (std::size_t i = 0; i < input.length(); ++i) {
        if (!std::isdigit(input[i])) {
            return false;
        }
    }
    return true;
}

void PhoneBook::addContact() {
	if (nbrContacts < MAX_CONTACTS) {
		std::string name, lastname, nickName, inputNumber;
		char darkestSecret[100];
		int number;

		std::cout << "Enter contact information:\n";
		std::cout << "Name: ";
		std::cin >> name;

		std::cout << "Lastname: ";
		std::cin >> lastname;

		std::cout << "Nickname: ";
		std::cin >> nickName;

		std::cout << "Darkest Secret: ";
		std::cin.ignore();
		std::cin.getline(darkestSecret, sizeof(darkestSecret));

		std::cout << "Number: ";
		std::cin >> inputNumber;
		if (!isNumber(inputNumber)) {
        	std::cout << "Invalid input. Please enter a valid number." << std::endl;
			return ;
		} else {
			number = std::atoi(inputNumber.c_str());
		}

		Contact newContact;
		newContact.contact(nbrContacts, name, lastname, nickName, darkestSecret, number);
		contacts[nbrContacts] = newContact;
		nbrContacts++;
		std::cout << "Contact added successfully!" << std::endl;
	} else {
		std::string name, lastname, nickName, inputNumber;
		char darkestSecret[100];
		int number;

		std::cout << "Enter contact information:\n";
		std::cout << "Name: ";
		std::cin >> name;

		std::cout << "Lastname: ";
		std::cin >> lastname;

		std::cout << "Nickname: ";
		std::cin >> nickName;

		std::cout << "Darkest Secret: ";
		std::cin.ignore();
		std::cin.getline(darkestSecret, sizeof(darkestSecret));

		std::cout << "Number: ";
		std::cin >> inputNumber;
		if (!isNumber(inputNumber)) {
        	std::cout << "Invalid input. Please enter a valid number." << std::endl;
			return ;
		} else {
			number = std::atoi(inputNumber.c_str());
		}

		Contact newContact;
		newContact.contact(7, name, lastname, nickName, darkestSecret, number);
		contacts[7] = newContact;
		std::cout << "Contact added successfully!" << std::endl;
	}
}

void PhoneBook::displayPhoneBook() {
	if (contacts[0].getFirstName() == "")
	{
		std::cout << "There are no contacts" << std::endl;
		return ;
	}
	
	std::cout 	<< std::setw(10) << std::right << "Index"	
				<< " | " << std::setw(10) << std::right << "Name"
				<< " | " << std::setw(10) << std::right << "Lastname"
			  	<< " | " << std::setw(10) << std::right << "Nickname" << std::endl;
	
	for (int i = 0; i < nbrContacts; ++i) {
		std::string truncatedName = contacts[i].getFirstName();
		std::string truncatedLastname = contacts[i].getLastName();
		std::string truncatedNumber = contacts[i].getNickName();
		
		// Truncate strings if longer than 10 characters
		if (truncatedName.length() > 10)
			truncatedName = truncatedName.substr(0, 9) + ".";
		
		if (truncatedLastname.length() > 10)
			truncatedLastname = truncatedLastname.substr(0, 9) + ".";
		
		if (truncatedNumber.length() > 10)
			truncatedNumber = truncatedNumber.substr(0, 9) + ".";
		
		std::string indexToPrint = std::to_string(i + 1);
		std::cout << std::setw(10) << std::right << indexToPrint
				  << " | " << std::setw(10) << std::right << truncatedName
				  << " | " << std::setw(10) << std::right << truncatedLastname
				  << " | " << std::setw(10) << std::right << truncatedNumber << std::endl;
	}

	std::string inputNumber;
	int nbr;
	bool x = true;
	while (x)
	{
		std::cout << "Enter index of user to see more info: ";
		std::cin >> inputNumber;
		if (!isNumber(inputNumber)) {
			std::cout << "Invalid input. Please enter a valid number." << std::endl;
		} else {
			nbr = std::atoi(inputNumber.c_str());
			if (contacts[nbr - 1].getFirstName() == "")
				std::cout << "Invalid input. Please enter a valid index." << std::endl;
			else
				x = false;
		}
	}
	int index = nbr - 1;
	contacts[index].displayInfo();
}
