/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:27:40 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/29 19:55:30 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ScavTrap.hpp"

int ScavTrap::quotes_length = 5;
std::string ScavTrap::quotes[5] = {
	"You versus me! Me versus you! Either way!",
	"I will prove to you my robotic superiority!",
	"Dance battle! Or, you know... regular battle.",
	"Man versus machine! Very tiny streamlined machine!",
	"Care to have a friendly duel?"};

ScavTrap::ScavTrap(void)
	: ClapTrap("unknown", "This is why you do your homework!", "Sniped!")
{
	ClapTrap::hit = 100;
	ClapTrap::max_hit = 100;
	ClapTrap::energy = 50;
	ClapTrap::max_energy = 50;
	ClapTrap::level = 1;
	ClapTrap::melee = 20;
	ClapTrap::ranged = 15;
	ClapTrap::armor = 3;
	std::cout << "Hey everybody! Check out my package!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &clone)
{
	ScavTrap::operator=(clone);
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name, "This is why you do your homework!", "Sniped!")
{
	ClapTrap::hit = 100;
	ClapTrap::max_hit = 100;
	ClapTrap::energy = 50;
	ClapTrap::max_energy = 50;
	ClapTrap::level = 1;
	ClapTrap::melee = 20;
	ClapTrap::ranged = 15;
	ClapTrap::armor = 3;
	std::cout << "Hey everybody! Check out my package!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "I'm too pretty to die!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &op)
{
	ClapTrap::operator=(op);
	return (*this);
}

void ScavTrap::challengeNewcomer(void)
{
	if (ScavTrap::energy < 25)
	{
		std::cout << "Out of energy. Well, I'm useless." << std::endl;
		return;
	}
	ScavTrap::energy -= 25;
	std::cout << ScavTrap::getName()
			  << " challenges! "
			  << ScavTrap::quotes[rand() % ScavTrap::quotes_length]
			  << std::endl;
}
