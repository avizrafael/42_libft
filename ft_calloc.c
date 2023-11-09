/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:26:02 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/09 20:10:42 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * nitems;
	if (!(dst = malloc(tot_size)))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
