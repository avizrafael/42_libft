/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:06:12 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:47:44 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Writes a string to a specified file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
