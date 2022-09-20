/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:18:31 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/20 14:15:45 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

private:
	std::string _name;

public:
	Zombie(void);
	Zombie(std::string _name);
	~Zombie(void);
	void announce( void );
	void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
