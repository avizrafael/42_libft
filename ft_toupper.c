/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:01:15 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 13:34:49 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Checks if 'c' is in the lowercase letter range and subtract 32 from its ASCII 
value to convert it to the corresponding uppercase.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
