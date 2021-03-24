/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:00:57 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/24 11:26:12 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"

int FragTrap::max_hit = 100;
int FragTrap::max_energy = 100;
int FragTrap::level = 1;
int FragTrap::melee = 30;
int FragTrap::ranged = 20;
int FragTrap::armor = 5;
int FragTrap::quotes_length = 5;
std::string FragTrap::quotes[5] = {
	"Stop me before I kill again, except don't!",
	"Hehehehe, mwaa ha ha ha, MWAA HA HA HA!",
	"Meatsplosion!",
	"Recompiling my combat code!",
	"Kill, reload! Kill, reload! KILL! RELOAD!"};

FragTrap::FragTrap() : name("unknown"), hit(100), energy(100)
{
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::FragTrap(std::string name) : name(name), hit(100), energy(100)
{
	std::cout << "NO! Son of a... HEY! You! Yeah yeah, FragTrap unit!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP "
			  << FragTrap::name
			  << " attacks "
			  << target
			  << " at range, causing "
			  << FragTrap::ranged
			  << " points of damage!"
			  << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP "
			  << FragTrap::name
			  << " attacks "
			  << target
			  << " at melee, causing "
			  << FragTrap::melee
			  << " points of damage!"
			  << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount -= FragTrap::armor;
	if (amount < 0)
		amount = 0;
	std::cout << "FR4G-TP "
			  << FragTrap::name
			  << " takes "
			  << amount
			  << " points of damage!"
			  << std::endl;
	FragTrap::hit -= amount;
	if (FragTrap::hit < 0)
		FragTrap::hit = 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		amount = 0;
	std::cout << "FR4G-TP "
			  << FragTrap::name
			  << " repaired and gained "
			  << amount
			  << " hit points!"
			  << std::endl;
	FragTrap::hit = amount;
	if (FragTrap::hit > FragTrap::max_hit)
		FragTrap::hit = FragTrap::max_hit;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (FragTrap::energy < 25)
	{
		std::cout << "Out of energy. Well, I'm useless." << std::endl;
		return;
	}
	FragTrap::energy -= 25;
	std::cout << this->name << ": "
			  << FragTrap::quotes[rand() % FragTrap::quotes_length] << std::endl
			  << this->name << " attacks "
			  << target << " for " << ((rand() % FragTrap::melee) + 1)
			  << " points of damage!" << std::endl;
}
