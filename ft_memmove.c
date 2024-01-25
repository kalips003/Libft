/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:37:57 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:37:59 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

#include "libft.h"

char	*ft_move(char *s, char *d, size_t n)
{
	size_t	i;

	i = 0;
	if (d < s)
	{
		while (i++ < n)
			d[i - 1] = s[i - 1];
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	ft_move(s, d, n);
	return (dest);
}

/*
#include "libft.h"

void	ft_move(char *s, char *d, size_t n)
{
	size_t	i;

	i = 0;
	if (d < s)
	{
		while (i++ < n)
			d[i - 1] = s[i - 1];
	}
	else
	{
		i = n;
		while (i-- > 0)
			d[i + 1] = s[i + 1];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	ft_move(s, d, n);
	return (dest);
}






void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;

	if (!dest && !src)
		return (NULL);
	i = 0;
	temp = (char *)malloc(n);
	while (i++ < n)
		temp[i - 1] = ((char *)src)[i - 1];
	i = 0;
	while (i++ < n)
		((char *)dest)[i - 1] = temp[i - 1];
	free(temp);
	return (dest);
}

#include <string.h>

int	main()
{
	char src[] = "abcdefgh";
	char dest[] = "000000000000";
	ft_memmove(&dest, src, 4);
	memmove(&dest, src, 4);
	printf("%s\n", dest);
	return(0);
}*/
