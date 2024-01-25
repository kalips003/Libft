/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:38:27 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:38:28 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		i++;
	}
	if (c == '\0')
	{
		ptr = (char *)&s[i];
		return (ptr);
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	char *s = "..a.b..b.a...bb.a...a..b.";
	printf("%s\n", s);
	printf("first occu = %s\n", ft_strchr(s, '\0'));
	return(0);
}*/
