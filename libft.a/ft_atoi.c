/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:34:12 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/12 16:10:52 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
    int	sign; 
    int	result;
    int	i; 
    sign =1; 
    result =0;
    i =0;
    //first skip over all the spacing in the begging of the string 
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
    i++;
    // check if negatives and positives if there its - set sign equal to -1 to multiply w the result when return it
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    // convert each digit in a string to an integer by multiplying the result by 10 and adding the digits value stopping when hit a nondigit
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return((int)(result * sign));
}
// #include <stdlib.h>

// int main()
// {
//     int a = ft_atoi("--123.");
//     int b = atoi("--123.");

//     printf("%d\n", a);
//     printf("%d\n", b);

// }