/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotrapan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:05:14 by lotrapan          #+#    #+#             */
/*   Updated: 2023/10/19 15:16:37 by lotrapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			count++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**buff;
	size_t	word_len;
	int		i;

	i = 0;
	buff = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!s || !buff)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!ft_strchr(s, c))
			word_len = ft_strlen(s);
		else
			word_len = ft_strchr(s, c) - s;
		if (*s)
			buff[i++] = ft_substr(s, 0, word_len);
		s += word_len;
	}
	buff[i] = NULL;
	return (buff);
}
/*int main()
{
	//char *str = "          ";
	char **tab = ft_split("c                 ", ' ');
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return 0;
}*/