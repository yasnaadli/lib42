/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:29:33 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/14 22:41:14 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
		return(1);
	else 
		return(0);
}

// #include <stdio.h>

// void	test(int value, int expected_result)
// {
// 	int	result;

// 	result = ft_isprint(value);
// 	if (result == expected_result)
// 		printf("PASS! ft_isprint: %d\n", result);
// 	else
// 		printf("FAILED! ft_isprint: %d, expected: \
// 				%d\n", result, expected_result);
// }

// int	main(void)
// {
// 	test('1', 1);
// 	test('9', 1);
// 	test('a', 1);
// 	test('.', 1);
// 	test('~', 1);
// 	test(31, 0);
// 	test(127, 0);
// 	return (0);
// }