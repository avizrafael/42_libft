/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:00:13 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/13 13:54:23 by raviz-es         ###   ########.fr       */
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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}
