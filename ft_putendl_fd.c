/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:06:21 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:47:27 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Writes a string followed by a newline character to a specified file descriptor.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
