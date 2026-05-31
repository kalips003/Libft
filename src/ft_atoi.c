/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:34:49 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:35:24 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	what_is_it(char c)
{
	int	result;

	result = 0;
	if ((c >= 9 && c <= 13) || c == ' ')
		result = 1;
	if (c >= '0' && c <= '9')
		result = 2;
	if (c == '+')
		result = 3;
	if (c == '-')
		result = 4;
	return (result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	i = 0;
	while (what_is_it(str[i]) == 1 && str[i] != '\0')
		i++;
	if (what_is_it(str[i]) >= 3 && str[i] != '\0')
	{
		if (what_is_it(str[i]) == 4)
			sign = -sign;
		i++;
	}
	while (what_is_it(str[i]) == 2)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("expected = 0, result = %d\n", ft_atoi("+-54"));
	printf("expected = 0, result = %d\n", ft_atoi("-+48"));
	printf("expected = 0, result = %d\n", ft_atoi("--47"));
	printf("expected = 0, result = %d\n", ft_atoi("++47"));
}*/
