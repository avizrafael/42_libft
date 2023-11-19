/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:26:02 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:27:24 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates the requested memory and returns a pointer to it. The difference 
in malloc and calloc is that malloc does not set the memory to zero where 
as calloc sets allocated memory to zero. UINT_MAX / size to avoid overflow.
*/

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	t_size;
	void	*dst;

	t_size = size * nitems;
	if (nitems && size && nitems > (UINT_MAX / size))
		return (NULL);
	dst = (void *)malloc(t_size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, t_size);
	return (dst);
}
