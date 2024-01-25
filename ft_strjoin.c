/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:38:48 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:38:50 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rtrn;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	rtrn = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (rtrn == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		rtrn[j++] = s1[i++];
	i = 0;
	while (s2[i])
		rtrn[j++] = s2[i++];
	rtrn[j] = '\0';
	return (rtrn);
}
/*
#include <stdio.h>
int	main()
{
	char str1[] = "abbba";
	char str2[] = "cdddc";
	char *result = ft_strjoin(str1, str2);
	printf("%s\n", result);
	free(result);
	return(0);
}*/
