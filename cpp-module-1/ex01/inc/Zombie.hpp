#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {

	private:
		std::string name;

	public:
		Zombie();		
		Zombie(std::string);		
		void announce(void);
		static Zombie* newZombie(std::string);
		void setName(std::string name);
		~Zombie();
};

Zombie* zombieHorde(int n, std::string name);

#endif