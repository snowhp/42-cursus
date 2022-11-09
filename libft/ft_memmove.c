/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:58:58 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/09 12:03:51 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ddest;
	const char	*ssrc;
	size_t		i;

	i = 0;
	ddest = dest;
	ssrc = src;
	while (i < n)
	{
		ddest[i] = ssrc[i];
		i++;
	}
	dest = ddest;
	return (dest);
} */
/* void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
} */
/* void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int* from = (unsigned int*) src;
	unsigned int* to = (unsigned int*) dst;

	if (from == to || len == 0)
		return dst;
	if (to > from && to - from < (int)len) {
		int i;
		for(i = len - 1; i >= 0; i--)
			to[i] = from[i];
		return dst;
	}
	if (from > to && from - to < (int)len) {
		size_t i;
		for(i=0; i < len; i++)
			to[i] = from[i];
		return dst;
	}
	ft_memcpy(dst, src, len);
	return dst;
}*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest0;
	char const	*source0;

	dest0 = dst;
	source0 = src;
	if (source0 < dest0)
	{
		source0 += len;
		dest0 += len;
		while (len)
		{
			*--dest0 = *--source0;
			--len;
		}
	}
	else if (source0 != dest0)
	{
		while (len)
		{
			*dest0++ = *source0++;
			--len;
		}
	}
	return (dst);
}
/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[] = "teste";
	char src[] = "olaaaa";
	ft_memmove(&dest, &src, 4);
	printf("%s\n", dest);
	char dest1[] = "teste";
	ft_memmove(&dest1, &src, 4);
	printf("%s", dest1);
	return (0);
} */