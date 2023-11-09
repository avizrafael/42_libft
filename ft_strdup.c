/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:26:21 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/09 20:56:32 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
