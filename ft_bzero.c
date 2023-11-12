/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:28:07 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/12 18:11:59 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Places n zero-valued bytes in the area pointed to by s.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *)str++ = 0;
		n--;
	}
}
