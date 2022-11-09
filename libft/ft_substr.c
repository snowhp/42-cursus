/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:27:22 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/09 17:25:09 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	size;
	char *dest;
	int	i;
	
	if(start <= ft_strlen(s))
	{
		if (len > (ft_strlen(s) - start) + 1)
			size = (ft_strlen(s) - start) + 1;
		else
			size = len;
		dest = malloc((size + 1) * sizeof(char));
		i = 0;
		while(i < size)
		{
			dest[i] = s[start + i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	dest = malloc(1 * sizeof(char));
	dest[0] = '\0';
	return (dest);
}

/* #include <stdio.h>
int	main()
{
	char s[] = "";
	int	start = 2;
	int	len = 4;
	printf("%s", ft_substr(s, start, len));
	return (0);
} */