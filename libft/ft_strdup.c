/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:10:58 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/07 16:22:49 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char *src;
	src = (char*) s;
	char *dst;
	dst = malloc(ft_strlen(s) * sizeof(char));
	ft_strlcpy(dst, src, ft_strlen(s));
	return (dst);
} 

/* #include <string.h>
#include <stdio.h>
int	main(void)
{
	char *teste;
	char dup[] = "teste";
	teste = ft_strdup(dup);
	printf("%s\n", teste);
	char *teste1;
	char dup1[] = "teste1";
	teste1 = strdup(dup1);
	printf("%s\n", teste1);
	return (0);
} */