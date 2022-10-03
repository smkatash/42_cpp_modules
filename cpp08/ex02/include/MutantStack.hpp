/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:02:25 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/03 19:38:45 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack() : MutantStack<T, Container>::stack() {};
        MutantStack(const MutantStack<T, Container>& Parent) : MutantStack<T, Container>::stack(Parent) {};
        MutantStack<T, Container>& operator=(const MutantStack<T, Container>& cpyParent)
	    {
		    if (this != &cpyParent)
			    this->MutantStack<T, Container>::stack::operator=(cpyParent);
		    return *this;
	    }
        virtual ~MutantStack() {};
        typedef typename Container::iterator				iterator;
        typedef typename Container::reverse_iterator		reverse_iterator;
        iterator			begin() { return this->c.begin(); };
        iterator			end() { return this->c.end(); };
        reverse_iterator	rbegin() { return this->c.rbegin(); };
        reverse_iterator	rend() { return this->c.rend(); };
};

#endif