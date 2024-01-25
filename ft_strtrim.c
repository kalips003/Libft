/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:40:11 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:40:12 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	cut_details(char const *s1, char const *set, int *dim)
{
	int	i;

	i = 0;
	while (s1[i] && is_set(set, s1[i]) == 1)
		i++;
	if (s1[i] == '\0')
		return (-1);
	dim[0] = i;
	while (s1[i])
		i++;
	i--;
	while (i > 0 && is_set(set, s1[i]) == 1)
		i--;
	dim[1] = i;
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*rtrn;
	int		dim[2];

	if (!s1)
		return (NULL);
	if (cut_details(s1, set, dim) == -1)
	{
		rtrn = (char *)malloc(sizeof(char));
		if (rtrn == NULL)
			return (NULL);
		*rtrn = '\0';
		return (rtrn);
	}
	i = 0;
	rtrn = (char *)malloc(sizeof(char) * (dim[1] - dim[0] + 2));
	if (rtrn == NULL)
		return (NULL);
	while (i + dim[0] <= dim[1])
	{
		rtrn[i] = s1[i + dim[0]];
		i++;
	}
	rtrn[i] = '\0';
	return (rtrn);
}
/*
#include <stdio.h>
int	main()
{
	char test_string[] = "...  abc  . . . def  . . . . .";
	char set[] = " .";
	int dim[2];
	char *result = ft_strtrim(test_string, set);
	cut_details(test_string, set, dim);
	printf("start = %d\n", dim[0]);
	printf("end = %d\n", dim[1]);
	printf("size = %d\n", dim[1] - dim[0] + 2);
	printf("%s", result);
	free(result);
	return(0);
}*/
