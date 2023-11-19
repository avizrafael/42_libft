/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:02:31 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 12:21:14 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Searches for the first occurrence of the character c (an unsigned char) 
in the first n bytes of the string pointed to, by the argument str and
returns a pointer to the matching byte or NULL if the character does not 
occur in the given memory area.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
