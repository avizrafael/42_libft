/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:31:25 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:28:00 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Checks if the passed character is a decimal digit character and returns 
non-zero value if c is a digit.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	else
		return (0);
}
