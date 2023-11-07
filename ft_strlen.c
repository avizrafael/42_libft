/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:06:13 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/07 15:14:58 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

#include <unistd.h>
int	main(void)
{
	char	x[] = "Hello s 5";
	int	y;

	y = ft_strlen(x);
	printf("%s %i",x , y);
}