/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:55:22 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/26 11:33:47 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
	: ClapTrap(name, "Ready for the PUNCHline?!", "Crack shot!"),
	  FragTrap(name),
	  NinjaTrap(name)
{
	ClapTrap::hit = 100;
	ClapTrap::max_hit = 100;
	ClapTrap::energy = 120;
	ClapTrap::max_energy = 120;
	ClapTrap::level = 1;
	ClapTrap::melee = 60;
	ClapTrap::ranged = 20;
	ClapTrap::armor = 5;
	std::cout << "Glitching weirdness is a term of endearment, right?" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "RUN FOR YOUR LIIIIIVES!!!" << std::endl;
}
