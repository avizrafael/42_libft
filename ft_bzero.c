/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:28:07 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/07 17:46:03 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

void	ft_bzero(void *str, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *)str++ = 0;
		n--;
	}
}

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_bzero(str, 2);
   puts(str);
   
   return(0);
}