/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotrapan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:40:29 by lotrapan          #+#    #+#             */
/*   Updated: 2023/10/21 12:58:28 by lotrapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		len;

	p = lst;
	len = 0;
	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	return (len);
}
