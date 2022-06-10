/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:01:29 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 17:24:54 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap( const std::string &name );
	FragTrap( const FragTrap &src );
	~FragTrap( void );
	FragTrap	&operator=( const FragTrap &other );
	void		highFivesGuys( void );
protected:
	FragTrap( void );
};
#endif
