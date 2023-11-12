/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:26:02 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/12 19:46:14 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates the requested memory and returns a pointer to it. The difference 
in malloc and calloc is that malloc does not set the memory to zero where 
as calloc sets allocated memory to zero.
*/

#include "libft.h"

/*
void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	t_size;
	void	*dst;

	t_size = size * nitems;
	dst = (void *)malloc(t_size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, t_size);
	return (dst);
}
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((ptr = malloc(nmemb * size)) == NULL)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, nmemb * size);
	return (ptr);
}
