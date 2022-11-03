/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:58:58 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/03 21:10:40 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ddest;
	const char	*ssrc;

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
}
/*
#include <stdio.h>
int	main()
{
	char dest[] = "teste";
	char src[] = "olaaaa";
	ft_memmove(&dest, &src, 4);
	printf("%s", dest);
	return (0);
}*/