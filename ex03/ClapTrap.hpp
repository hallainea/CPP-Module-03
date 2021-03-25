/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:35:06 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/25 23:35:55 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	int hit;
	int max_hit;
	int energy;
	int max_energy;
	int level;
	int melee;
	int ranged;
	int armor;

private:
	std::string name;
	std::string melee_quote;
	std::string ranged_quote;

public:
	ClapTrap(std::string name,
			 std::string melee_quote,
			 std::string ranged_quote);
	~ClapTrap(void);
	std::string getName(void);
	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif
