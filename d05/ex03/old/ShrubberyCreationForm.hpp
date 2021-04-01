/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:34:51 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/18 10:37:50 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm  const & );
		ShrubberyCreationForm  & operator=( ShrubberyCreationForm  const & );
		~ShrubberyCreationForm( void );
		
		void	execute(Bureaucrat const & executor) const;
		std::string const & getType() const;
	private:
		static const int _sign;
		static const int _exec;
};

#endif