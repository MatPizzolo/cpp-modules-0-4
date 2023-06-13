#include <iostream>
#include <iomanip>

#include "../includes/PhoneBook.hpp"


PhoneBook::PhoneBook() {
	nbrContacts = 0;
}

void PhoneBook::addContact() {
	if (nbrContacts < MAX_CONTACTS) {
		std::string name, lastname, nickName, darkestSecret;
		int number;

		std::cout << "Enter contact information:\n";
		std::cout << "Name: ";
		std::cin >> name;

		std::cout << "Lastname: ";
		std::cin >> lastname;

		std::cout << "Nickname: ";
		std::cin >> nickName;

		std::cout << "Darkest Secret: ";
		std::cin >> darkestSecret;

		std::cout << "Number: ";
		std::cin >> number;

		Contact newContact;
		newContact.contact(nbrContacts, name, lastname, nickName, darkestSecret, number);
		contacts[nbrContacts] = newContact;
		nbrContacts++;
		std::cout << "Contact added successfully!" << std::endl;
	} else {
		std::string name, lastname, nickName, darkestSecret;
		int number;

		std::cout << "Enter contact information:\n";
		std::cout << "Name: ";
		std::cin >> name;

		std::cout << "Lastname: ";
		std::cin >> lastname;

		std::cout << "Nickname: ";
		std::cin >> nickName;

		std::cout << "Darkest Secret: ";
		std::cin >> darkestSecret;

		std::cout << "Number: ";
		std::cin >> number;

		Contact newContact;
		newContact.contact(nbrContacts, name, lastname, nickName, darkestSecret, number);
		contacts[nbrContacts] = newContact;
		nbrContacts++;
		std::cout << "Contact added successfully!" << std::endl;
	}
}

void PhoneBook::displayPhoneBook() {
	std::cout 	<< std::setw(10) << std::right << "Index"	
				<< " | " << std::setw(10) << std::right << "Name"
				<< " | " << std::setw(10) << std::right << "Lastname"
			  	<< " | " << std::setw(10) << std::right << "Nickname" << std::endl;
	
	for (int i = 0; i < nbrContacts; ++i) {
		std::string truncatedName = contacts[i].getFirstName();
		std::string truncatedLastname = contacts[i].getLastName();
		std::string truncatedNumber = std::to_string(contacts[i].getPhoneNumber());
		
		// Truncate strings if longer than 10 characters
		if (truncatedName.length() > 10)
			truncatedName = truncatedName.substr(0, 9) + ".";
		
		if (truncatedLastname.length() > 10)
			truncatedLastname = truncatedLastname.substr(0, 9) + ".";
		
		if (truncatedNumber.length() > 10)
			truncatedNumber = truncatedNumber.substr(0, 9) + ".";
		
		char indexToPrint = nbrContacts + '0';
		std::cout << std::setw(10) << std::right << indexToPrint
				  << " | " << std::setw(10) << std::right << truncatedName
				  << " | " << std::setw(10) << std::right << truncatedLastname
				  << " | " << std::setw(10) << std::right << truncatedNumber << std::endl;
	}

	char nbr;
	std::cout << "Enter index of user to see more info: ";
	std::cin >> nbr;
	std::cout << std::endl;
	int index = (nbr - '0') - 1;
	contacts[index].displayInfo();
}
