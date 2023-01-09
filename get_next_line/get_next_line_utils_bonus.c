/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:10:14 by tde-sous          #+#    #+#             */
/*   Updated: 2023/01/09 17:35:28 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str && *(str + i))
		i++;
	return (i);
}

char	*ft_strchr(char *str, int chr)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == chr)
			return (str);
		str++;
	}
	if (chr == '\0')
		return (str);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	len;
	int		i;
	int		j;

	len = (ft_strlen(s1) + ft_strlen(s2));
	str = ft_calloc(sizeof(char), (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && *(s1 + i))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j) && s2)
	{
		*(str + i++) = *(s2 + j++);
	}
	*(str + i) = '\0';
	return (str);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	int		x;

	x = nmemb * size;
	ptr = malloc(x);
	if (!ptr)
		return (NULL);
	while (--x >= 0)
		*(ptr + x) = '\0';
	return ((void *)ptr);
}
