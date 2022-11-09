/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:13:11 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 20:50:22 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain* _brain;
	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog &Parent);
		Dog& operator=(const Dog &cpyParent);
		~Dog(void);
		virtual void makeSound(void) const;
		Brain* getBrain(void) const;
};

#endif
