/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:00:13 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/08 15:27:22 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
copies n characters from str2 to str1, but for overlapping memory blocks, 
memmove() is a safer approach than memcpy() 
and returns a pointer to the destination.

str1 − This is a pointer to the destination array where the content 
is to be copied, type-casted to a pointer of type void*.

str2 − This is a pointer to the source of data to be copied, 
type-casted to a pointer of type void*.

n − This is the number of bytes to be copied.
*/

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (str2 < str1)
	{
		i = n;
		while (n > 0)
		{
			i--;
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
			i++;
		}
	}
	return (str1);
}
