/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:53:18 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/23 22:54:55 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

class FragTrap
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
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
};
#endif
