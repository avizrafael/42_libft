/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:41:52 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/08 14:21:44 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Tests for an ASCII character (in the range 0 to 127) and
return nonzero if c is an ASCII character; otherwise, zero.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
