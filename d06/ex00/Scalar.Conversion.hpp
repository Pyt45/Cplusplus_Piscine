/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.Conversion.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:37:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/31 12:20:36 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERION_HPP
# define SCALAR_CONVERION_HPP

# include <iostream>
# include <sstream>
# include <limits>
# include <stdexcept>
# include <cstring>
# include <cmath>
# include <iomanip>


class ScalarConversion {
	public:
		class Impossible: public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class NotDisplayable: public std::exception {
			public:
				virtual const char * what() const throw();
		};
		ScalarConversion( void );
		ScalarConversion( ScalarConversion const & );
		ScalarConversion & operator=( ScalarConversion const & );
		~ScalarConversion( void );

		int			convertToInt(double num);
		float		convertToFloat(double num);
		double		convertToDouble(double num);
		char		convertToChar(double num);
};

#endif