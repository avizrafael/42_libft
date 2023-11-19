/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:15:53 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:39:56 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copies the character c to the first n characters of the string pointed to, 
by the argument str and returns a pointer to the memory area str.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		*(ptr++) = (unsigned char)c;
		n--;
	}
	return (str);
}
