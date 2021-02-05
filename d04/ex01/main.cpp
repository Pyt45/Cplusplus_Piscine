/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:58:44 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 12:28:59 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	return 0;
}

// class Base {
// 	public:
// 		Base( void ){
// 			return ;
// 		}
// 		Base( std::string const & name ) {
// 			this->_name = name;
// 		}
// 		virtual ~Base( void ){
// 			return ;
// 		}
// 		std::string const & getName(){
// 			return this->_name;
// 		}
// 	protected:
// 		std::string _name;
// };


// class Drived : public Base {
// 	public:
// 		Drived( void ) : Base("Default"){
// 		}
// 		Drived( std::string const & name ) : Base(name) {
// 		}
// 		~Drived( void ) {
// 			return ;
// 		}
// };

// int main()
// {
// 	Base *b = new Drived();

// 	std::cout << b->getName();
// }