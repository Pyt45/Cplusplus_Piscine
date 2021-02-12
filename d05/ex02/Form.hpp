#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int	const			_execGrade;
	public:
		Form(void);
		Form(std::string name, int signgrade, int execgrade);
		Form(Form const & src);
		~Form(void);

		Form& operator=(Form const & src);
		const int getSignGrade() const;
		const int getExecGrade() const;
		const std::string& getName() const;
		bool	isSigned() const;
		void	beSigned(Bureaucrat const & src);
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
};

std::ostream& operator<<(std::ostream& o, Form const & src);

#endif