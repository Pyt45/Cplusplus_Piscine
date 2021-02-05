/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:38:54 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:38:55 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main()
{
	Human	H;

	H.action("meleeAttack", "\033[0;32mshout shout ...... \033[0m");
	H.action("rangedAttack", "\033[1;31mshout shout with ......  gun\033[0m");
	H.action("intimidatingShout", "\033[1;32mshout shout with ......  pistol\033[0m");
}