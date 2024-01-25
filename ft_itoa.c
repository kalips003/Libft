/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:36:50 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:36:54 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

static int	ft_size(int nb)
{
	int			size;
	long int	n;

	n = nb;
	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 9)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
	char		*rtrn;
	int			i;
	int			s;
	long int	n;

	n = nb;
	s = ft_size(n);
	rtrn = (char *)malloc(sizeof(char) * (s + 1));
	if (rtrn == NULL)
		return (NULL);
	if (n < 0)
	{
		rtrn[0] = '-';
		n = -n;
	}
	rtrn[s] = '\0';
	i = 0;
	while (n >= 10)
	{
		rtrn[s - i++ - 1] = (n % 10) + '0';
		n = n / 10;
	}
	rtrn[s - i - 1] = (n % 10) + '0';
	return (rtrn);
}
/*
int	main()
{
	printf("=%d\n", ft_size(-123));
	char *test = ft_itoa(0);
	printf("%s", test);
	free(test);
	return(0);
}*/
