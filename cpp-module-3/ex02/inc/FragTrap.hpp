#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void highFiveGuys(void);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &src);

};

#endif