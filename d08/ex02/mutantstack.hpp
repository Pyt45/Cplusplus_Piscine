/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:45:07 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/28 13:53:56 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stdexcept>
# include <stack>
# include <deque>

template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename std::stack<T, Container>::container_type::iterator iterator;
        typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

        MutantStack<T, Container>( void ) {}
        MutantStack<T, Container>( MutantStack<T> const & src ) : std::stack<T>(src){}
        MutantStack<T, Container> & operator=( MutantStack<T> const & src ) {
            if (this != &src)
                this->c = src.c;
        }
        ~MutantStack<T, Container>( void ) {
            return ;
        }

        iterator begin(){
            return this->c.begin();
        }
        const_iterator begin() const {
            return this->c.begin();
        }
        iterator end() {
            return this->c.end();
        }
        const_iterator end() const {
            return this->c.end();
        }
        reverse_iterator rbegin() {
            return this->c.rbegin();
        }
        const_reverse_iterator rbegin() const {
            return this->c.rbegin();
        }
        reverse_iterator rend() {
            return this->c.rend();
        }
        const_reverse_iterator rend() const {
            return this->c.rend();
        }
};

#endif
