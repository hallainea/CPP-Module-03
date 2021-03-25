/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:27:40 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/25 21:08:08 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ScavTrap.hpp"

int ScavTrap::max_hit = 100;
int ScavTrap::max_energy = 50;
int ScavTrap::level = 1;
int ScavTrap::melee = 20;
int ScavTrap::ranged = 15;
int ScavTrap::armor = 3;
int ScavTrap::quotes_length = 5;
std::string ScavTrap::quotes[5] = {
	"You versus me! Me versus you! Either way!",
	"I will prove to you my robotic superiority!",
	"Dance battle! Or, you know... regular battle.",
	"Man versus machine! Very tiny streamlined machine!",
	"Care to have a friendly duel?"};

ScavTrap::ScavTrap() : name("unknown"), hit(100), energy(50)
{
	std::cout << "Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : name(name), hit(100), energy(100)
{
	std::cout << "Hey everybody! Check out my package!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "I'm too pretty to die!" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP "
			  << ScavTrap::name
			  << " attacks "
			  << target
			  << " at range, causing "
			  << ScavTrap::ranged
			  << " points of damage! "
			  << "Sniped!"
			  << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP "
			  << ScavTrap::name
			  << " attacks "
			  << target
			  << " at melee, causing "
			  << ScavTrap::melee
			  << " points of damage! "
			  << "This is why you do your homework!"
			  << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	amount -= ScavTrap::armor;
	if (amount < 0)
		amount = 0;
	std::cout << "FR4G-TP "
			  << ScavTrap::name
			  << " takes "
			  << amount
			  << " points of damage!"
			  << std::endl;
	ScavTrap::hit -= amount;
	if (ScavTrap::hit < 0)
		ScavTrap::hit = 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		amount = 0;
	std::cout << "FR4G-TP "
			  << ScavTrap::name
			  << " repaired and gained "
			  << amount
			  << " hit points!"
			  << std::endl;
	ScavTrap::hit = amount;
	if (ScavTrap::hit > ScavTrap::max_hit)
		ScavTrap::hit = ScavTrap::max_hit;
}

void ScavTrap::challengeNewcomer(void)
{
	if (ScavTrap::energy < 25)
	{
		std::cout << "Out of energy. Well, I'm useless." << std::endl;
		return;
	}
	ScavTrap::energy -= 25;
	std::cout << "FR4G-TP "
			  << ScavTrap::name
			  << " challenges! "
			  << ScavTrap::quotes[rand() % ScavTrap::quotes_length]
			  << std::endl;
}
