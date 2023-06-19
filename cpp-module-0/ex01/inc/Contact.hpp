#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <iostream>

class Contact {

	private:
		int			index;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string darkestSecret;
		std::string	phoneNumber;

	public:
		Contact();		
		void contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string darkestSecret, std::string phoneNumber);
		void displayInfo();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();

};

#endif