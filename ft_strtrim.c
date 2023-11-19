/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:05:00 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 15:09:57 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Searches for characters to be removed from the beginning and end of a string
*/

#include "libft.h"

static char	*new_str(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	trim = NULL;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		trim = new_str(end - start);
		if (!trim)
			return (NULL);
		ft_strlcpy(trim, &s1[start], end - start + 1);
	}
	return (trim);
}
