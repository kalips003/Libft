/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:39:58 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:40:00 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == c)
			ptr = (char *)&s[i];
		i++;
	}
	if (c == '\0')
	{
		ptr = (char *)&s[i];
		return (ptr);
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	char *s = "..a.b..b.a...bb.a...a..b.";
	printf("%s\n", s);
	printf("last occu = %s\n", ft_strrchr(s, '\0'));
	return(0);
}*/
