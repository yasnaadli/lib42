/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:43:47 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/14 23:37:13 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_memset(void *wtf, int	c, size_t len)
{
	size_t	i;
	i = 0;
	while (i < len)
		((unsigned char *)wtf)[i++] = (unsigned char)c;
	return (wtf);
}
