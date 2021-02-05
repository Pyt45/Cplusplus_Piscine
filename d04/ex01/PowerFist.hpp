/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:52:53 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 12:41:20 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist( void );
		PowerFist( PowerFist const & src );
		// PowerFist & operator=( PowerFist const & src );
		~PowerFist( void );
		void	attack() const;
};

#endif