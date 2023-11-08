/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:06:13 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/08 14:27:50 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Computes the length of the string str up to, but not including the terminating 
null character and returns the length of string.
*/

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
