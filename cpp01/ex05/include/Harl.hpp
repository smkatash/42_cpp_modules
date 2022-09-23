/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:37:52 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/22 17:25:25 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl {
	private:
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);

	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif
