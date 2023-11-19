/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:52:41 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:27:19 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Checks if the passed character is alphanumeric and returns non-zero value
if c is a digit or a letter.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (8);
	else
		return (0);
}
