/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:18:29 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/25 22:51:40 by ahallain         ###   ########.fr       */
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
	ScavTrap(std::string name);
	~ScavTrap(void);
	void challengeNewcomer(void);
};
#define SCAVTRAP_HPP
#endif
