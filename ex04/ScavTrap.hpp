/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:18:29 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/29 19:54:10 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap
	: public ClapTrap
{
private:
	static int quotes_length;
	static std::string quotes[];

public:
	ScavTrap(void);
	ScavTrap(const ScavTrap &clone);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap &operator=(const ScavTrap &op);
	void challengeNewcomer(void);
};
#define SCAVTRAP_HPP
#endif
