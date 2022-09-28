/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:51:25 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/28 11:59:40 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include <string>
#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria {
	public:
		Ice();
		Ice(const Ice& Parent);
		Ice& operator=(const Ice& cpyParent);
		~Ice();
		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif