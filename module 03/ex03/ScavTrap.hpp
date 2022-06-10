/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:35:25 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 17:28:27 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	ScavTrap(void);
public:
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &other);
	
	void attack(const std::string &target) const;
	void guardGate() const;
};

#endif 