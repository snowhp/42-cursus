/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:05:59 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/09 12:15:28 by tde-sous         ###   ########.fr       */
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

char	*ft_strnstr(const char *s, const char *find, size_t slen)
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
					return (NULL);
			}
			if (len > slen)
				return (NULL);
		}
		s--;
	}
	return ((char *)s);
}

/* #include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = ft_strlen(s2);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

	if (i1 == i2)
		printf("Sucess");
	return (0);
}
 */