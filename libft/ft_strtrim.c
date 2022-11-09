/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:22:48 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/09 22:05:38 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	e;
	char *s;
	int	a;

	i = 0;
	while (s1[i]) 
      {	
		a = 0;
		while(set[a])
		{
			if(set[a] == s1[i])
				break;
			a++;
		}
		if(set[a] != s1[i])
			break;
		i++;
	}
/* 	if(i == (int)(ft_strlen(s1) - 1))
		return (NULL); */
	e = ft_strlen(s1);
	while (e > 0) 
      {	
		a = 0;
		while(set[a])
		{
			if(set[a] == s1[e])
				break;
			a++;
		}
		if(set[a] != s1[e])
			break;
		e--;
	}
	if(i >= e)
		return (NULL);
	s = malloc((e - i + 1) * sizeof(char));
	ft_strlcpy(s, s1 + i, i - e);
	return (s);
}

/* #include <stdio.h>
int	main()
{
	char *s1;
	char *set;
	s1 = "OLA";
	set = "";
	printf("%s", ft_strtrim(s1,set));
	return (0);
} */