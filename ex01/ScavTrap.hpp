/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:18:29 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/25 21:07:58 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

#include <string>

class ScavTrap
{
private:
	static int max_hit;
	static int max_energy;
	static int level;
	static int melee;
	static int ranged;
	static int armor;
	static int quotes_length;
	static std::string quotes[];
	std::string name;
	int hit;
	int energy;

public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);
};
#define SCAVTRAP_HPP
#endif
