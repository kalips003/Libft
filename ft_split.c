/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:38:16 by agallon           #+#    #+#             */
/*   Updated: 2023/11/09 20:38:18 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	num_words(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			size++;
		i++;
	}	
	return (size);
}

static int	size_words(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static char	*rtrn_w(char const *s, char c, int i)
{
	int		size_w;
	char	*rtrn;
	int		k;

	size_w = size_words(s, c, i);
	rtrn = (char *)malloc((size_w + 1) * sizeof(char));
	if (rtrn == NULL)
		return (NULL);
	k = 0;
	while (k < size_w)
	{
		rtrn[k] = s[i];
		i++;
		k++;
	}
	rtrn[k] = '\0';
	return (rtrn);
}

static char	**ft_split_help(char **rtrn, char const *s, char c, int nbr_w)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j < nbr_w)
	{
		if (s[i] != c)
		{
			rtrn[j] = rtrn_w(s, c, i);
			if (rtrn[j] == NULL)
				return (NULL);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		i++;
	}
	rtrn[j] = NULL;
	return (rtrn);
}

char	**ft_split(char const *s, char c)
{
	char	**rtrn;
	int		nbr_w;

	if (!s)
		return (NULL);
	nbr_w = num_words(s, c);
	rtrn = (char **)malloc((nbr_w + 1) * sizeof(char *));
	if (rtrn == NULL)
		return (NULL);
	rtrn = ft_split_help(rtrn, s, c, nbr_w);
	return (rtrn);
}
/*
#include <stdio.h>

int	main()
{
	char test_string[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, \
ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, \
varius a, semper congue, euismod non, mi.";
	
	char **rtrn = ft_split(test_string, 'i');
	int	j = 0;
	int	num = num_words(test_string, 'i');
	printf("num words = %d\n", num);
	while(j < num)
	{
		printf("%d: %s\n", j, rtrn[j]);
		free(rtrn[j]);
		j++;
	}
	free(rtrn);
	return(0);
}
*/
