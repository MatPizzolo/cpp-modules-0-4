#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {

	private:
		std::string name;

	public:
		Zombie(std::string);		
		void announce(void);
		~Zombie();
};

#endif