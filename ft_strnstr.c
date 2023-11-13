/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:03:01 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/13 17:52:49 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Locates the first	occurrence of the  null-terminated  string little in the 
string big, where not more than len characters are	searched.  Characters that
appear after	a `\0'	character  are not  searched. 

If little is an empty string, big is returned; if little	occurs nowhere 
in big, NULL is returned; otherwise a pointer to	the first character of 
the first occurrence of little is returned.
*/

#include "libft.h"

/*
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little == NULL || *little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + 1);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
*/

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	j;

	if (!haystack && !n)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		j = 0;
		while (*(haystack + j) == *(needle + j)
			&& *(needle + j) && j <= n)
		{
			if (!*(needle + j + 1))
				return ((char *)haystack);
			j++;
		}
		haystack++;
	}
	return (NULL);
}
