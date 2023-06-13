#include "../includes/Contact.hpp"

Contact::Contact() {}

void Contact::contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string darkestSecret, int phoneNumber) {
	this->index = index;
	this->firstName = firstName;
    this->lastName = lastName;
    this->nickName = nickName;
    this->darkestSecret = darkestSecret;
    this->phoneNumber = phoneNumber;
}

void Contact::displayInfo(){
	std::cout << "name: " << firstName << std::endl;
	std::cout << "lastname: " << lastName << std::endl;
	std::cout << "nickname: " << nickName << std::endl;
	std::cout << "darkest secret: " << darkestSecret << std::endl;
	std::cout << "number: " << phoneNumber << std::endl;
}

std::string Contact::getFirstName() {return this->firstName; }
std::string Contact::getLastName() {return this->lastName; }
std::string Contact::getNickName() {return this->nickName; }
int			Contact::getPhoneNumber() {return this->phoneNumber; }