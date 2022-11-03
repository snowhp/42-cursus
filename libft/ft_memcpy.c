/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:48:22 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/03 20:58:45 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*sdest;
	const char	*ssrc;

	sdest = dest;
	ssrc = src;
	i = 0;
	while (i < n)
	{
		sdest[i] = ssrc[i];
		i++;
	}
	dest = sdest;
	return (dest);
}

/*#include "libft.h"
int	main()
{
	char dest[] = "OLAaa";
	char src[] = "FT_teste";
	ft_memcpy(&dest, &src, 2);
	printf("%s", dest);
	return (0);
}*/
