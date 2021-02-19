/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:54:14 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/19 16:26:57 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern( void );
		Intern( Intern const & );
		Intern & operator=( Intern const & );
		~Intern( void );

		Form*	makeForm(std::string name, std::string target);
		
		typedef Form * (Intern::*Internptr)(std::string);
	private:
		Form*		_searchForm(std::string name, std::string target);
		Form* 		_PresidentialPardonForm(std::string target);
		Form* 		_RobotomyRequestForm(std::string target);
		Form* 		_ShrubberyCreationForm(std::string target);
		Internptr	_function[3];
		static		std::string _names[3];
};

#endif