/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:02:42 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 20:31:10 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &Parent);
		Cat& operator=(const Cat &cpyParent);
		~Cat(void);
		void makeSound(void) const;
};

#endif
