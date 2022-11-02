/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:56:45 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/02 23:36:17 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define	HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		std::string	_name;
		Weapon *_weaponType;
		bool	_got_weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon &weapon);
};

#endif
