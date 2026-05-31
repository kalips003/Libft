/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:37:01 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:37:02 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		if (temp[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	char *test = "abcdefgh>>>";
	printf("%s\n", (char *)ft_memchr(test, 'z', 5));
	return(0);
}*/
