/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:04:46 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:51:08 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Concatenates two strings into a new string.
*/

#include "libft.h"

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*str_ptr;

	if (!s1 || !s2)
		return (NULL);
	str = str_new(ft_strlen(s1) + ft_strlen(s2));
	if (!str)
		return (NULL);
	str_ptr = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (str_ptr);
}
