/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 23:14:06 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/29 20:00:02 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
	: ClapTrap("unknown", "Ready for the PUNCHline?!", "Chk-chk, BOOM!")
{
	ClapTrap::hit = 60;
	ClapTrap::max_hit = 60;
	ClapTrap::energy = 120;
	ClapTrap::max_energy = 120;
	ClapTrap::level = 1;
	ClapTrap::melee = 60;
	ClapTrap::ranged = 5;
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &clone)
{
	NinjaTrap::operator=(clone);
}

NinjaTrap::NinjaTrap(std::string name)
	: ClapTrap(name, "Ready for the PUNCHline?!", "Chk-chk, BOOM!")
{
	ClapTrap::hit = 60;
	ClapTrap::max_hit = 60;
	ClapTrap::energy = 120;
	ClapTrap::max_energy = 120;
	ClapTrap::level = 1;
	ClapTrap::melee = 60;
	ClapTrap::ranged = 5;
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Aaaaaaahhh!" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &op)
{
	ClapTrap::operator=(op);
	return (*this);
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	if (NinjaTrap::energy < 25)
	{
		std::cout << "Out of energy. Well, I'm useless." << std::endl;
		return;
	}
	NinjaTrap::energy -= 25;
	int damage = rand() % NinjaTrap::melee + 1;
	target.takeDamage(damage);
	std::cout << NinjaTrap::getName()
			  << " attacks "
			  << target.getName()
			  << ", causing "
			  << damage
			  << " points of damage! "
			  << "Shoot him... he's the real one..."
			  << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	if (NinjaTrap::energy < 25)
	{
		std::cout << "Out of energy. Well, I'm useless." << std::endl;
		return;
	}
	NinjaTrap::energy -= 25;
	int damage = rand() % NinjaTrap::melee + 1;
	target.takeDamage(damage);
	std::cout << NinjaTrap::getName()
			  << " attacks "
			  << target.getName()
			  << ", causing "
			  << damage
			  << " points of damage! "
			  << "I'm invisible!"
			  << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	if (NinjaTrap::energy < 25)
	{
		std::cout << "Out of energy. Well, I'm useless." << std::endl;
		return;
	}
	NinjaTrap::energy -= 25;
	int damage = rand() % NinjaTrap::melee + 1;
	target.takeDamage(damage);
	std::cout << NinjaTrap::getName()
			  << " attacks "
			  << target.getName()
			  << ", causing "
			  << damage
			  << " points of damage! "
			  << "Roses are red and/Violets are blue/Wait... how many syllables was that?"
			  << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	if (NinjaTrap::energy < 25)
	{
		std::cout << "Out of energy. Well, I'm useless." << std::endl;
		return;
	}
	NinjaTrap::energy -= 25;
	int damage = rand() % NinjaTrap::melee + 1;
	target.takeDamage(damage);
	std::cout << NinjaTrap::getName()
			  << " attacks "
			  << target.getName()
			  << ", causing "
			  << damage
			  << " points of damage! "
			  << "I'm a robot ninja..."
			  << std::endl;
}
