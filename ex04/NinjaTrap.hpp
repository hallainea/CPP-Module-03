/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 22:59:03 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/29 20:01:49 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap
	: virtual public ClapTrap
{

public:
	NinjaTrap(void);
	NinjaTrap(const NinjaTrap &clone);
	NinjaTrap(std::string name);
	~NinjaTrap(void);
	NinjaTrap &operator=(const NinjaTrap &op);
	void ninjaShoebox(ClapTrap &target);
	void ninjaShoebox(FragTrap &target);
	void ninjaShoebox(ScavTrap &target);
	void ninjaShoebox(NinjaTrap &target);
};
#endif
