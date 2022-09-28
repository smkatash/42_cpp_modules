/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:51:41 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/28 11:59:37 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure();
		Cure(const Cure& Parent);
		Cure& operator=(const Cure& cpyParent);
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif