/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:51:41 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 21:14:37 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure(void);
		Cure(const Cure &Parent);
		Cure& operator=(const Cure &cpyParent);
		~Cure(void);
		AMateria* clone(void) const;
		void use(ICharacter &target);
};

#endif