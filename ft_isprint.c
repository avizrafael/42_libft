/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:55:59 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/07 15:03:52 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}

#include <unistd.h>
#include <ctype.h>
int	main(void)
{
	printf("%d", ft_isprint('1'));
	printf("\n%d", isprint('1'));
	return (0);
}