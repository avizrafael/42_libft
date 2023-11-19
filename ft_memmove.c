/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:00:13 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 12:58:19 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copies n characters from src to dest and returns a pointer to the destination.
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
