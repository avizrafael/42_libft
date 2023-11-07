/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:52:13 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/07 13:33:26 by raviz-es         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}


#include <unistd.h>
#include <ctype.h>
int	main(void)
{
	printf("%d", ft_isalpha('A'));
	printf("\n%d", isalpha('B'));
	return (0);
}
