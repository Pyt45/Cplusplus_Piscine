/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:54 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/25 00:45:35 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int     main()
{
   	{	
        std::cout << "\n\033[33mUSING STACK\033[0m\n" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << "Top  ==> " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size ==> "  << mstack.size() << std::endl;
		
		mstack.push(3);
		mstack.push(5);
		mstack.push(13);
		mstack.push(37);
		
		std::cout << "Top  ==> " << mstack.top() << std::endl;
		std::cout << "Size ==> "  << mstack.size() << std::endl;

		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "Elements: [  ";
		while (it != ite)
		{
			std::cout << *it << "  ";
			++it;
		}
		std::cout << "]" << std::endl;
		
		std::stack<int> s(mstack);
	}
	
	std::cout << "\n===================================================" << std::endl;
	
	{
        std::cout << "\n\033[33mUSING LIST\033[0m\n" << std::endl;
		std::list<int> mylist;

		mylist.push_back(5);
		mylist.push_back(17);
		std::cout << "Top  ==> " << mylist.back() << std::endl;
		mylist.pop_back();
		std::cout << "Size ==> " << mylist.size() << std::endl;

		mylist.push_back(3);
		mylist.push_back(5);
		mylist.push_back(13);
		mylist.push_back(37);
		
		std::cout << "Top  ==> " << mylist.back() << std::endl;
		std::cout << "Size ==> "  << mylist.size() << std::endl;
		
		std::list<int>::iterator it = mylist.begin();
		std::list<int>::iterator ite = mylist.end();
		++it;
		--it;
		std::cout << "Elements: [  ";
		while (it != ite)
		{
			std::cout << *it << "  ";
			++it;
		}
		std::cout << "]" << std::endl;
		
		std::list<int> s(mylist);
	}

	std::cout << std::endl;;
    return 0;
}
