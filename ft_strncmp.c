/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:02:18 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:50:51 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compares at most the first n bytes of str1 and str2
*/

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]));
}
