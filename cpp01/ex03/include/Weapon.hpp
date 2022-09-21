/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:16:29 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/21 17:25:19 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define	WEAPON_HPP

# include <iostream>

class Weapon {
	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		~Weapon();
		std::string	&getType();
		void		setType(std::string _type);
		
};

#endif
