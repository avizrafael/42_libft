/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:01:42 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/08 16:17:04 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Searches for the first occurrence of the character c (an unsigned char) 
in the string pointed to by the argument str and searches for the first 
occurrence of the character c (an unsigned char) in the string pointed to 
by the argument str.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && c != *str)
		str++;
	if (c == *str)
		return ((char *)str);
	return (0);
}
