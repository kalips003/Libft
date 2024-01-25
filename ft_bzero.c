/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:35:38 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:35:44 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *ptr, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>

int	main()
{
	char str[] = "abcdefgh";
	printf("%s\n", str);
	ft_bzero(str, 6);
	for(size_t i = 0; i < 10; i++)
	{
		printf("%d,", str[i]);
	}
	printf("\n");
	return(0);
}*/
