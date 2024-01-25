/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:35:51 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:35:54 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*rtrn;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return ((void *)malloc(1));
	if (nmemb > 2147483647 / size)
		return (NULL);
	rtrn = malloc(size * nmemb);
	if (rtrn == NULL)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		((char *)rtrn)[i] = '\0';
		i++;
	}
	return (rtrn);
}
/*
#include <stdio.h>
int	main()
{
	char *test = (char*)ft_calloc(70 , 4);
	int i = 0;
	while(i++ < 50)
		printf("%d", test[i-1]);
	free(test);
	return(0);
}*/
