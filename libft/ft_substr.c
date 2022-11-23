/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:27:22 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/18 18:30:13 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		size;
	int		i;
	char	*dest;

	if (!s)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		if (len > (ft_strlen(s) - start) + 1)
			size = (ft_strlen(s) - start) + 1;
		else
			size = len;
		dest = malloc((size + 1) * sizeof(char));
		if (!dest)
			return (NULL);
		i = 0;
		while (i < size)
		{
			dest[i] = s[start + i];
			i++;
		}
		dest[i] = '\0';
	}
	else
	{
		dest = malloc(1 * sizeof(char));
		if (!dest)
			return (NULL);
		dest[0] = '\0';
	}
	return (dest);
}

/* Testar
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		size;
	int		i;
	char	*dest;

	if (!s)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		if (len > (ft_strlen(s) - start) + 1)
			size = (ft_strlen(s) - start) + 1;
		else
			size = len;
		dest = malloc((size + 1) * sizeof(char));
		if (!dest)
			return (NULL);
		i = -1;
		while (i++ < size)
			dest[i] = s[start + i];
		dest[i] = '\0';
		return (dest);
	}
	dest = malloc(1 * sizeof(char));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	return (dest);
}*/

/* #include <stdio.h>
int	main()
{
	char s[] = "";
	int	start = 2;
	int	len = 4;
	printf("%s", ft_substr(s, start, len));
	return (0);
} */