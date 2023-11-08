/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:01:55 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/08 16:27:10 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Searches for the last occurrence of the character c (an unsigned char) 
in the string pointed to, by the argument str and returns a pointer to the 
last occurrence of character in str. If the value is not found, the function 
returns a null pointer.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == 0)
		return ((char *)str + 1);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + 1);
		i--;
	}
	return (NULL);
}
