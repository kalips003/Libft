/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:36:21 by agallon           #+#    #+#             */
/*   Updated: 2023/11/11 21:36:24 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <unistd.h>
static void	ft_toupper(unsigned int i, char *c)
{
	printf("in= %c\n", c[i]);
	if (c[i] >= 'a' && c[i] <= 'z')
	{
		printf("out= %c\n\n", c[i] - 32);
		c[i] = c[i] - 32;
	}
}

int	main(void)
{
	char	test[] = "abcABC";
	printf("%s\n", test);
	ft_striteri(test, ft_toupper);
	printf("%s\n", test);
	return (0);
}*/
