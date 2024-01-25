/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:38:39 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:38:41 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*rtrn;
	int		i;

	rtrn = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (rtrn == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		rtrn[i] = s[i];
		i++;
	}
	rtrn[i] = '\0';
	return (rtrn);
}
/*
int	main()
{
	char *test = "abcd";
	char *test2 = ft_strdup(test);
	printf("%s", test2);
	free(test2);
	return(0);
}*/
