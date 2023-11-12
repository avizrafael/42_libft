/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:35:24 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/12 20:05:52 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copies n characters from memory area src to memory area dest and
returns a pointer to destination.

dest − This is pointer to the destination array where the content is 
to be copied, type-casted to a pointer of type void*.

src − This is pointer to the source of data to be copied, 
type-casted to a pointer of type void*.

n − This is the number of bytes to be copied.
*/

#include "libft.h"

/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
*/

void	*ft_memcpy(void	*dest, void const *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest_ptr);
}
