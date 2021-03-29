/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:00:57 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/29 20:09:40 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"

int FragTrap::quotes_length = 5;
std::string FragTrap::quotes[5] = {
	"This time it'll be awesome, I promise!",
	"Hey everybody, check out my package!",
	"Place your bets!",
	"Defragmenting!",
	"Recompiling my combat code!"};

FragTrap::FragTrap(void)
	: ClapTrap("unknown", "Meet professor punch!", "Crack shot!")
{
	ClapTrap::hit = 100;
	ClapTrap::max_hit = 100;
	ClapTrap::energy = 100;
	ClapTrap::max_energy = 100;
	ClapTrap::level = 1;
	ClapTrap::melee = 30;
	ClapTrap::ranged = 20;
	ClapTrap::armor = 5;
	std::cout << "NO! Son of a... HEY! You! Yeah yeah, Claptrap unit!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &clone)
{
	FragTrap::operator=(clone);
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name, "Meet professor punch!", "Crack shot!")
{
	ClapTrap::hit = 100;
	ClapTrap::max_hit = 100;
	ClapTrap::energy = 100;
	ClapTrap::max_energy = 100;
	ClapTrap::level = 1;
	ClapTrap::melee = 30;
	ClapTrap::ranged = 20;
	ClapTrap::armor = 5;
	std::cout << "NO! Son of a... HEY! You! Yeah yeah, Claptrap unit!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &op)
{
	ClapTrap::operator=(op);
	return (*this);
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (FragTrap::energy < 25)
	{
		std::cout << "Out of energy. Well, I'm useless." << std::endl;
		return;
	}
	FragTrap::energy -= 25;
	std::cout << FragTrap::getName()
			  << " attacks "
			  << target
			  << ", causing "
			  << (rand() % FragTrap::melee) + 1
			  << " points of damage! "
			  << FragTrap::quotes[rand() % FragTrap::quotes_length]
			  << std::endl;
}
