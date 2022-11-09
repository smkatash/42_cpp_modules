/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:02:42 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 20:50:30 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain* _brain;
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &Parent);
		Cat& operator=(const Cat &cpyParent);
		~Cat(void);
		virtual void makeSound(void) const;
		Brain* getBrain(void) const;
};

#endif
