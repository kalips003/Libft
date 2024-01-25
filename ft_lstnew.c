/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:03:41 by agallon           #+#    #+#             */
/*   Updated: 2023/11/13 13:03:43 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtrn;

	rtrn = (t_list *)malloc(sizeof(t_list));
	if (rtrn == NULL)
		return (NULL);
	rtrn->content = content;
	rtrn->next = NULL;
	return (rtrn);
}
/*
#include <stdio.h>
int main() {
    t_list *node = ft_lstnew("Hello, World!");

    if (node != NULL) 
    {
        printf("Content: %s\n", (char*)node->content);
        free(node);
    } 
    else
        fprintf(stderr, "Memory allocation failed.\n");
    return 0;
}*/
