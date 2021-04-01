/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:48:49 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/01 20:02:43 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat {
	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade);
		Bureaucrat( Bureaucrat const & );
		Bureaucrat & operator=( Bureaucrat const & );
		~Bureaucrat( void );

		std::string const & getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
	private:
		std::string const _name;
		int			_grade;
};

std::ostream & operator<<(std::ostream & , Bureaucrat const & );

#endif




































// #ifndef BUREAUCRAT_HPP
// # define BUREAUCRAT_HPP

// # include <iostream>
// # include <ostream>
// # include <stdexcept>
// class Bureaucrat
// {
// 	private:
// 		std::string const _name;
// 		int			_grade;
// 	public:
// 		Bureaucrat(void);
// 		Bureaucrat(std::string name, int grade);
// 		Bureaucrat(Bureaucrat const & src);
// 		~Bureaucrat(void);

// 		Bureaucrat & operator=(Bureaucrat const & src);
// 		void		operator+=(int const num);
// 		void		operator-=(int const num);
// 		const std::string&	getName() const;
// 		int					getGrade() const;
// 		class GradeTooHighException: public std::exception
// 		{
// 			public:
// 				virtual const char* what() const throw();
// 		};

// 		class GradeTooLowException: public std::exception
// 		{
// 			public:
// 				virtual const char* what() const throw();
// 		};
// };

// std::ostream& operator<<(std::ostream& o, Bureaucrat const & src);

// #endif