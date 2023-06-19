#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
# include <string>
# include <iostream>

#include "Contact.hpp"

#define MAX_CONTACTS 8


class PhoneBook {
	private:
		Contact	contacts[MAX_CONTACTS];
		int	nbrContacts;

	public:
		PhoneBook();
		void addContact();
		void displayPhoneBook();
};

#endif