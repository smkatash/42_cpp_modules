/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:42:08 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 21:02:33 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal {
	protected:
		std::string	_type;
	public:
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal &Parent);
		AAnimal& operator=(const AAnimal &cpyParent);
		virtual ~AAnimal(void);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif