/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:34:45 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/02 16:37:39 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTO_MY_REQUEST_FORM_HPP
# define ROBOTO_MY_REQUEST_FORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & );
		RobotomyRequestForm & operator=( RobotomyRequestForm const & );
		~RobotomyRequestForm( void );

		void	action() const;
		std::string const & getTarget() const;
};

#endif