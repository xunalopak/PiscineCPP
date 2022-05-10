/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:31:54 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/10 16:40:29 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	int			index;
	std::string	information[5];

	enum	Field{
		FirstName = 0,
		LastName,
		NickName,
		PhoneNumber,
		DarkSecret
	};

	std::string Field_name[5] = {
		"FirstName",
		"LastName",
		"NickName",
		"PhoneNumber",
		"DarkSecret"
	};
public:
	Contact();
	virtual ~Contact();

	bool set_info(int i);
	void display_menu(void);
	void display(void);
};

#endif