/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:57:04 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 14:22:47 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ClapTrap
{
private:
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
