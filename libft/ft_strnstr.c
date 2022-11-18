/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:05:59 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/18 16:58:23 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	c;
	char	sc;
	size_t	clen;

	if ((c == *little++) != '\0')
	{
		clen = ft_strlen(little);
		while (ft_strncmp(big, little, clen) != 0)
		{
			while (sc != c)
			{
				if ((sc == *big++) == '\0' || len-- < 1)
					return (NULL);
			}
			if (clen > len)
				return (NULL);
		}
		big--;
	}
	return ((char *)big);
} */

/* char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	char	c;
	char	sc;
	size_t	len;

	c = *find++;
	if (c != '\0')
	{
		len = ft_strlen(find);
		sc = *s++;
		if (sc == '\0' || slen-- < 1)
			return (NULL);
		if (len > slen)
			return (NULL);
		while (ft_strncmp(s, find, len) != 0)
		{
			while (sc != c)
			{
				sc = *s++;
				if (sc == '\0' || slen-- < 1)
					return (NULL);printf("%s", i2);
	}
	return ((char *)s);
} */

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	int		t;
	int		a;

	if (*find == '\0' || find == NULL)
		return ((char *)s);
	if (slen == 0)
		return (NULL);
	if (slen > ft_strlen(s))
		slen = ft_strlen(s);
	i = 0;
	while (i < slen)
	{
		a = 0;
		while (*s++ == find[a] && i < slen)
		{
			if (find[++a] == '\0')
			{
				t = ft_strlen(find);
				while (t-- > 0)
					s--;
				return ((char *)s);
			}
			i++;
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char *s1 = "oh no not the empty string !";
	char *s2 = "";
	size_t max = ft_strlen(s1);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);
	printf("i1: %s\n", i1);
	printf("i2: %s\n", i2);
	if (i1 == i2)
		printf("\nSucess");
	return (0);
} */
