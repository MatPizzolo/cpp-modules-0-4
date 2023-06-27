#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		void highFiveGuys(void);
		FragTrap &operator=(const FragTrap &src);
		~FragTrap();

};

#endif