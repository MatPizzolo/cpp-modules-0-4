#include "../inc/Harl.hpp"

Harl::Harl(){}

void Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	int caseLevel = 0;

	if (level.compare("debug") == 0)
		caseLevel = 1;
	if (level.compare("info") == 0)
		caseLevel = 2;
	if (level.compare("warning") == 0)
		caseLevel = 3;
	if (level.compare("error") == 0)
		caseLevel = 4;
	switch (caseLevel) {
		case 0:
			break ;
		case 1:
			debug();
			break ;
		case 2:
			info();
			break ;
		case 3:
			warning();
			break ;
		case 4:
			error();
			break ;
	}
}