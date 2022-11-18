/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:50:28 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/18 18:54:14 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_wdifill(const char *s, char c)
{
	int		i;
	int		l;
	char	*result;

	l = 0;
	i = 0;
	while (s[l] != '\0' && s[l] != c && s[l] != '\t' && s[l] != '\t')
		++l;
	result = malloc(sizeof(char) * (l + 1));
	if (!result)
		return (NULL);
	result[l] = '\0';
	while (i < l)
	{
		result[i] = s[i];
		i++;
	}
	return (result);
}

static void	ft_wdfill(char **astr, const char *s, char c)
{
	int	wi;
	int	i;

	wi = 0;
	i = 0;
	while ((s[i] == c || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	while (s[i])
	{
		astr[wi] = ft_wdifill(s + i, c);
		++wi;
		while (s[i] != c && s[i] != '\t' && s[i] != '\n')
			i++;
		while (s[i] == c || s[i] == '\t' || s[i] == '\n')
			i++;
	}	
}

static int	ft_wdcount(char const *s, char c)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	if (s[0] == '\0')
		return (0);
	while (s[i] == c || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i])
	{
		++wc;
		while (s[i] != c && s[i] != '\t' && s[i] != '\n')
			i++;
		while (s[i] == c || s[i] == '\t' || s[i] == '\n')
			i++;
	}	
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	char	**astr;

	if (!s)
		return (NULL);
	wordcount = ft_wdcount(s, c);
	astr = malloc(sizeof(char *) * (wordcount + 1));
	if (!astr)
		return (NULL);
	astr[wordcount] = '\0';
	ft_wdfill(astr, s, c);
	return (astr);
}

/* #include <stdio.h>
int	main()
{
	char	*s;
	char	c;
	
	s = "\0aa\0bbb";
	c = '\0' ;

	char **arr = ft_split(s, c);
	int i = 0;
	while (arr[i] != 0)
	{
		printf("[%s]\n", arr[i]);      
		i++;
	}
	return (0);
} */