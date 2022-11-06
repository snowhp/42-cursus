/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:42:51 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/05 11:39:17 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size >= ft_strlen(src))
	{
		while (i < size)
		{
			dest[i + ft_strlen(dest)] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/* #include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[] = "teste";
	char src[] = "ola";
	printf("%s", dest);
	char dest1[] = "teste";
	strlcpy(dest1, src, 2);
	printf("%s", dest1);
	return (0);
} */