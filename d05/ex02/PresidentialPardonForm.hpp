/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:34:31 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/16 16:54:46 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & );
		PresidentialPardonForm & operator=( PresidentialPardonForm const & );
		~PresidentialPardonForm( void );

		void				execute( Bureaucrat const & executor );
		std::string const & getTarget() const;
	private:
		static const int _exec;
		static const int _sign;
};

#endif