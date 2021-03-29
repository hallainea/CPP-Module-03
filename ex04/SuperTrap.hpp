/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:51:48 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/29 20:07:16 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(void);
	SuperTrap(const SuperTrap &clone);
	SuperTrap(std::string name);
	~SuperTrap(void);
	SuperTrap &operator=(const SuperTrap &op);
	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
};
#endif
