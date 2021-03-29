/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:55:45 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/29 19:50:40 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: hit(0),
	  max_hit(0),
	  energy(0),
	  max_energy(0),
	  level(0),
	  melee(0),
	  ranged(0),
	  armor(0),
	  name("unknown"),
	  melee_quote(""),
	  ranged_quote("")
{
	std::cout << "ClapTrap unit calling "
			  << ClapTrap::name
			  << " has been created! Yeah" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clone)
{
	ClapTrap::operator=(clone);
}

ClapTrap::ClapTrap(std::string name,
				   std::string melee_quote,
				   std::string ranged_quote)
	: hit(0),
	  max_hit(0),
	  energy(0),
	  max_energy(0),
	  level(0),
	  melee(0),
	  ranged(0),
	  armor(0),
	  name(name),
	  melee_quote(melee_quote),
	  ranged_quote(ranged_quote)
{
	std::cout << "ClapTrap unit calling "
			  << ClapTrap::name
			  << " has been created! Yeah" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << ClapTrap::name
			  << " has just died RIP." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &op)
{
	this->hit = op.hit;
	this->max_hit = op.max_hit;
	this->energy = op.energy;
	this->max_energy = op.max_energy;
	this->level = op.level;
	this->melee = op.melee;
	this->ranged = op.ranged;
	this->armor = op.armor;
	this->name = op.name;
	this->melee_quote = op.melee_quote;
	this->ranged_quote = op.ranged_quote;
	return (*this);
}

std::string ClapTrap::getName(void)
{
	return (ClapTrap::name);
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << ClapTrap::name
			  << " attacks "
			  << target
			  << " at melee, causing "
			  << ClapTrap::melee
			  << " points of damage!";
	if (ClapTrap::melee_quote.length())
		std::cout << " "
				  << ClapTrap::melee_quote;
	std::cout << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << ClapTrap::name
			  << " attacks "
			  << target
			  << " at range, causing "
			  << ClapTrap::ranged
			  << " points of damage!";
	if (ClapTrap::ranged_quote.length())
		std::cout << " "
				  << ClapTrap::ranged_quote;
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	amount -= ClapTrap::armor;
	if (amount < 0)
		amount = 0;
	std::cout << ClapTrap::name
			  << " takes "
			  << amount
			  << " points of damage!"
			  << std::endl;
	ClapTrap::hit -= amount;
	if (ClapTrap::hit < 0)
		ClapTrap::hit = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		amount = 0;
	std::cout << ClapTrap::name
			  << " repaired and gained "
			  << amount
			  << " hit points!"
			  << std::endl;
	ClapTrap::hit = amount;
	if (ClapTrap::hit > ClapTrap::max_hit)
		ClapTrap::hit = ClapTrap::max_hit;
}
