/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:37:52 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/21 17:35:28 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define	HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		std::string	_name;
		Weapon &_weaponType;
		HumanA();

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack() const;
};

#endif
