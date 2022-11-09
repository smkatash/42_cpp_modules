/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:23:04 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 21:13:55 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _materia[4];
	public:
		Character(const std::string &name);
		Character(const Character &Parent);
		Character& operator=(const Character &cpyParent);
		~Character(void);
		std::string const &getName(void) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
