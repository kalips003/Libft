/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:40:22 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:40:24 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*rtrn;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	rtrn = (char *)malloc(sizeof(char) * (len + 1));
	if (rtrn == NULL)
		return (NULL);
	while (s[i] && i < len)
	{
		rtrn[i] = s[start + i];
		i++;
	}
	rtrn[i] = '\0';
	return (rtrn);
}
/*
#include <stdio.h>
int	main()
{
	char string[] = "abcdefghijkl";
	char *substring = ft_substr(string, 5, 4);
	printf("%s\n", substring);
	free(substring);
	return(0);
}*/
