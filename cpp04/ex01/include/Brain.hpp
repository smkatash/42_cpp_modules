/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:00:09 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 20:49:43 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &Parent);
		Brain& operator=(const Brain &cpyParent);
		const std::string &getIdea(int index) const;
};

#endif