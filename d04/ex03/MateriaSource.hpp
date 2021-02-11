/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:09:22 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/11 18:14:58 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
class MateriaSource : public IMateriaSource {
	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & );
		MateriaSource & operator=( MateriaSource const & );
		~MateriaSource( void );
		
		void learnMateria( AMateria* );
		AMateria* createMateria( std::string const & type );
	private:
		AMateria *_am[4];
};

#endif