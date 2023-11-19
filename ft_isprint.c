/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:55:59 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:30:21 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Checks if character is printable. A printable character is a character 
that is not a control character and returns a non-zero value.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
