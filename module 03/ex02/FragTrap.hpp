/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:01:29 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 16:38:47 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap( const std::string &name );
	FragTrap( const FragTrap &src );
	~FragTrap( void );
	FragTrap	&operator=( const FragTrap &other );
	void		highFivesGuys( void );
private:
	FragTrap( void );
};
#endif
