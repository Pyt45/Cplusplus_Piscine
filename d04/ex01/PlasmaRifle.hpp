/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:50:13 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:14:49 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle( void );
		PlasmaRifle( PlasmaRifle const & src );
		PlasmaRifle & operator=( PlasmaRifle const & src );
		~PlasmaRifle( void );
		void	attack() const;
};

#endif