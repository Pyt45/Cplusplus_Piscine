/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:54 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/31 15:29:50 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int     main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    MutantStack<int>::const_iterator cit = mstack.begin();
    MutantStack<int>::const_iterator cite = mstack.end();
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    std::cout << "it = " << *it << std::endl;
    std::cout << "ite = " << *ite << std::endl;
    std::cout << "cit = " << *cit << std::endl;
    std::cout << "cite = " << *cite << std::endl;
    std::cout << "rit = " << *rit << std::endl;
    std::cout << "rite = " << *rite << std::endl;
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
