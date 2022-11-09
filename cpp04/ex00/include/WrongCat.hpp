/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:57:18 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 20:35:25 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(const WrongCat &Parent);
		WrongCat &operator=(const WrongCat &cpyParent);
		~WrongCat(void);
		void makeSound(void) const;
};

#endif