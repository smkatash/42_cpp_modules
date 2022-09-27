/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:02:42 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/27 20:59:02 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal {
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat& Parent);
		Cat& operator=(const Cat& cpyParent);
		~Cat();
		virtual void makeSound() const;
		Brain* getBrain() const;
};

#endif
