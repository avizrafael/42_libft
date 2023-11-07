/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:41:52 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/07 14:55:14 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

#include <unistd.h>
#include <ctype.h>
int	main(void)
{
	printf("%d", ft_isascii(-1));
	printf("\n%d", isascii(-1));
	return (0);
}