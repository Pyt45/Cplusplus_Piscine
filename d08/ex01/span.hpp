/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:44 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:47:24 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <list>
# include <ctime>
# include <vector>

class Span {
    public:
        Span( void );
        Span( unsigned int n );
        Span( Span const & );
        Span & operator=( Span const & );
        ~Span( void );

        void    addNumber(int num);
        int     shortestSpan( void ) const;
        int     longestSpan( void ) const;
    private:
        std::vector<int> _v;
        unsigned int _n;
};

#endif