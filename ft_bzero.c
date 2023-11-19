/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:28:07 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:27:28 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Takes a pointer to a memory block and the number of bytes to set to zero. 
It treats the memory block as an array of unsigned characters (bytes) and 
iterates through each byte in the block. In each iteration, it assigns the 
value 0 to the current byte by dereferencing the pointer and casting it 
to an unsigned char pointer.
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
