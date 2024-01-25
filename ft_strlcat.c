/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:38:59 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:39:00 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static size_t	ft_strlen_2(char *dest, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dest[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_l;

	i = 0;
	dst_l = ft_strlen_2(dest, size);
	if (dst_l == size)
		return (dst_l + ft_strlen(src));
	while (src[i])
	{
		if (dst_l + i < size - 1)
			dest[dst_l + i] = src[i];
		i++;
	}
	dest[dst_l + i] = '\0';
	return (dst_l + i);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char *src     = "abcdEfghiJ ";
	char dest[20] = "01234";
	printf("%d\n", ft_strlen(src));
	printf("%s\n", dest);
	printf("= %zu\n", ft_strlcat(dest, src, 20));
	//printf("ori = %zu\n", ft_strlcat(dest, src, 20));
	
	//printf("%zu\n", ft_strlcat(dest, src, 5));
	printf("%s\n", dest);
	return(0);
}*/
