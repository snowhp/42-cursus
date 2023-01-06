/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:10:17 by tde-sous          #+#    #+#             */
/*   Updated: 2023/01/04 14:42:20 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*save;

	save = (char *)0;
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (*s != '\0')
	{
		if (*s == c)
			save = (char *)s;
		s++;
	}
	return (save);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		size;
	int		i;

	if (!s1)
		return (NULL);
	i = -1;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	dst = malloc(size * sizeof(char));
	if (!dst)
		return (NULL);
	while (s1[++i])
		dst[i] = s1[i];
	i = -1;
	while (s2[++i])
		dst[i + ft_strlen(s1)] = s2[i];
	dst[i + ft_strlen(s1)] = '\0';
	return (dst);
}