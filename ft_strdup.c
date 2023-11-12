/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:26:21 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/12 20:12:06 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Creates a duplicate of the string pointed to by string.
*/

#include "libft.h"

/*
char	*ft_strdup(const char *str1)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = ft_strlen((char *)str1);
	str2 = (char *)malloc(sizeof(*str2) * (j + 1));
	while (i < j)
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
*/

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strdup(char const *src)
{
	char	*dest;
	char	*start;

	dest = str_new(ft_strlen(src));
	if (!dest)
		return (NULL);
	start = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}
