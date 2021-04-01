/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:59:50 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/18 16:55:24 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class ExceptionNotSigned : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		Form( void );
		Form( std::string name, int GradeSign, int GradeExec);
		Form( Form const & );
		Form & operator=( Form const & );
		virtual ~Form( void ) = 0;
		std::string const & getName() const;
		bool				getSigned() const;
		int					getExecGrade() const;
		int					getSignGrade() const;
		void				set_signed();
		void				beSigned( Bureaucrat const & );
		virtual void		execute( Bureaucrat const & executor ) const;
	private:
		std::string const 	_name;
		bool				_IsSigned;
		int			const 	_SignGrade;
		int			const 	_ExecGrade;
};

std::ostream & operator<<(std::ostream &, Form const &);

#endif