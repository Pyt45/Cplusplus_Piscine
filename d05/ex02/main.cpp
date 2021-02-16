/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:50:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/16 18:10:11 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat b("Bob", 1);
	Form *f = new PresidentialPardonForm("Jimmy");
	f->beSigned(b);
	try {
		f->execute(b);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	delete f;
	return 0;
}