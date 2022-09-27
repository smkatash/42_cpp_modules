/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:00:09 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/27 18:15:28 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
	private:
		std::string _ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain& Parent);
		Brain& operator=(const Brain& cpyParent);
		const std::string& getIdea(int index) const;
};

#endif