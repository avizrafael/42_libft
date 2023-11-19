/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:01:29 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 13:33:54 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Checks if 'c' is in the uppercase letter range and sum 32  from its ASCII 
value to convert it to the corresponding lowercase.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
