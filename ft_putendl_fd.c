/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:13:56 by agallon           #+#    #+#             */
/*   Updated: 2023/11/13 13:14:01 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	newline;

	newline = '\n';
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, &newline, 1);
}
/*
int	main(void)
{
	char	*str = "Hello!";
	ft_putendl_fd(str, 1);
	return (0);
}*/
