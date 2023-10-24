/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotrapan <lotrapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:01:40 by lotrapan          #+#    #+#             */
/*   Updated: 2023/10/16 11:59:41 by lotrapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/*int main()
{
	char s[10] = "ciao";
	char *d = ft_memset(s, 'f', 3);
	printf("%s", d);
	return 0;
}*/