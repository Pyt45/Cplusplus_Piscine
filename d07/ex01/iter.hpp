/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:45:51 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:46:34 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T1, typename T2>
void    iter(T1 *arr, int size, T2 (*func)(T1))
{
    for (int i = 0; i < size; i++)
        func(arr[i]);
}

#endif
