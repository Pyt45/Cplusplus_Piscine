/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:45:07 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/31 15:29:10 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stdexcept>
# include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        MutantStack<T>( void ) {}
        MutantStack<T>( MutantStack<T> const & src ) : std::stack<T>(src){}
        MutantStack<T> & operator=( MutantStack<T> const & src ) {
            if (this != &src)
                this->c = src.c;
        }
        ~MutantStack<T>( void ) {
            return ;
        }

        iterator begin(){
            return std::stack<T>::c.begin();
        }
        const_iterator begin() const {
            return std::stack<T>::c.begin();
        }
        iterator end() {
            return std::stack<T>::c.end();
        }
        const_iterator end() const {
            return std::stack<T>::c.end();
        }
        reverse_iterator rbegin() {
            return std::stack<T>::c.rbegin();
        }
        const_reverse_iterator rbegin() const {
            return std::stack<T>::c.rbegin();
        }
        reverse_iterator rend() {
            return std::stack<T>::c.rend();
        }
        const_reverse_iterator rend() const {
            return std::stack<T>::c.rend();
        }
};

#endif
