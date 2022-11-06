/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:05:59 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/05 16:11:59 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
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
}

/* #include <stdio.h>
int	main(void)
{
	const char	little[];

	const char big [] = "teste";;
	little[] = "st";
	printf("OLA \n%s\n", ft_strnstr(big, little, 4));
	return (0);
}
 */