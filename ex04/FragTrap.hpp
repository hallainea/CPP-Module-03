/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:53:18 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/29 20:09:46 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap
	: virtual public ClapTrap
{
private:
	static int quotes_length;
	static std::string quotes[];

public:
	FragTrap(void);
	FragTrap(const FragTrap &clone);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap &operator=(const FragTrap &op);
	void vaulthunter_dot_exe(std::string const &target);
};
#endif
