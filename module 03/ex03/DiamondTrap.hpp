/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:57:06 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 17:37:02 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_HPP
# define DIAMONTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;

	DiamondTrap(void);
public:
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &src);
	~DiamondTrap( void );
	
	DiamondTrap & operator=(const DiamondTrap &other);

	void attack(const std::string &target) const;
	void whoAmI(void) const;
};




#endif