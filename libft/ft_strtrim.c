/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:22:48 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/18 18:54:36 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		e;
	char	*s;
	int		a;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i])
	{	
		a = 0;
		while (set[a])
		{
			if (set[a] == s1[i])
				break ;
			a++;
		}
		if (set[a] != s1[i])
			break ;
		i++;
	}
	e = ft_strlen(s1) - 1;
	while (e > 0 && i < e)
	{	
		a = 0;
		while (set[a])
		{
			if (set[a] == s1[e])
				break ;
			a++;
		}
		if (set[a] != s1[e])
			break ;
		e--;
	}
	s = (char *)malloc((e - i + 2) * sizeof(char));
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1 + i, e - i + 2);
	return (s);
}

/* #include <stdio.h>
int	main()
{
	char *s1;
	char *set;
	s1 = "  \t \t \n   \n\n\n\t";
	set = " \n\t";
	printf("%s", ft_strtrim(s1,set));
	return (0);
} */