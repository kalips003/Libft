/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:37:49 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:37:50 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i++ < n)
		((char *)dest)[i - 1] = ((char *)src)[i - 1];
	return (dest);
}
/*
#include <string.h>

int	main()
{
	char src[] = "abcdefgh";
	char dest[] = "000000000000";
	//memcpy(dest, src, 4);	
	ft_memcpy(dest, src, 4);
	printf("%s\n", dest);
	return(0);
}*/
