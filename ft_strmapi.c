/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:11:43 by agallon           #+#    #+#             */
/*   Updated: 2023/11/11 21:11:46 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rtrn;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	rtrn = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (rtrn == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		rtrn[i] = f(i, s[i]);
		i++;
	}
	rtrn[i] = '\0';
	return (rtrn);
}
/*
static char	ft_toupper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	if (c >= 'A' && c <= 'Z')
		return (c + i);
	return (c);
}

int	main(void)
{
	char	*test = "abcABC";
	char	*rtrn = ft_strmapi(test, ft_toupper);
	printf("%s\n", rtrn);
	free(rtrn);
	return (0);
}*/
