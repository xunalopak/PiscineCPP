/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:57:04 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 15:23:35 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int			HitPoints;
	int			EnergyPoints;
	int			AttackDamage;
	int			HPMax;

	ClapTrap(void);

public:
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &src);
	~ClapTrap();
	ClapTrap &operator=( const ClapTrap &other );
	
	void	attack(std::string const & target);
	void	takeDamage(unsigned int damage);
	void	beRepaired(unsigned int heal);
	
	const std::string &getName(void) const;
};	

std::ostream	&operator<<( std::ostream &ostream, const ClapTrap &myClass );

#endif
