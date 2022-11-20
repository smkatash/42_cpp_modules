/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:02:25 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/17 16:30:00 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iostream>

//template <class T, class Container = deque<T> > class stack;
template <typename T, typename T_Container = std::deque<T> >
class MutantStack : public std::stack<T, T_Container>
{
	public:
		MutantStack(void) : MutantStack<T, T_Container>::stack() {};
		MutantStack(const MutantStack<T, T_Container>& Parent) : MutantStack<T, T_Container>::stack(Parent) {};
		MutantStack<T, T_Container>& operator=(const MutantStack<T, T_Container>& cpyParent)
		{
			if (this != &cpyParent)
				this->MutantStack<T, T_Container>::stack::operator=(cpyParent);
			return *this;
		}
		virtual ~MutantStack(void) {};

		typedef typename T_Container::iterator			iterator;
		iterator	begin() {
			return this->c.begin();
		};
		iterator		end() {
			return this->c.end();
		};

		typedef typename T_Container::reverse_iterator	reverse_iterator;
		reverse_iterator	rbegin() {
			return this->c.rbegin();
		};
		reverse_iterator	rend() {
			return this->c.rend(); 
		};
};

#endif