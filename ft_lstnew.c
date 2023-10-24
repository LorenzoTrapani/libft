/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotrapan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:10:53 by lotrapan          #+#    #+#             */
/*   Updated: 2023/10/24 12:27:29 by lotrapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*l;

	l = malloc (sizeof (t_list));
	if (!l)
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}

