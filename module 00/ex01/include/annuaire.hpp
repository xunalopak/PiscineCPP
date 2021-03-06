/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:27:00 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/17 17:52:39 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_HPP
# define ANNUAIRE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include "contact.hpp"

class Annuaire
{
private:
	Contact contacts[8];
	int		contact_amount;
	int		loop;

	
public:
	Annuaire();
	virtual ~Annuaire();
	
	void menu(void);
	void add(void);
	void display_menu(void);
	void search_menu(void);
};

#endif