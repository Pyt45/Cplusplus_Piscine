/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.Conversion.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:37:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/19 17:48:33 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERION_HPP
# define SCALAR_CONVERION_HPP

# include <iostream>

class ScalarConversion {
	public:
		ScalarConversion( void );
		ScalarConversion( ScalarConversion const & );
		ScalarConversion & operator=( ScalarConversion const & );
		~ScalarConversion( void );

		std::string ParserStr(std::string str);
		int			toInt();
		float		toFloat();
		double		toDouble();
		char		toChar();
	private:
		int		num;
		char	c;
		float	f;
		double	d;
};

#endif