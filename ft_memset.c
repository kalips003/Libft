/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:38:07 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:38:08 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < n)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char str[] = "abcdefgh";
	printf("%s\n", str);
	memset(str, 65, 10);
	//ft_memset(str, 65, 10);
	printf("%s\n", str);
	return(0);
}*/
