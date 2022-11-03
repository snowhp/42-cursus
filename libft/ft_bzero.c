/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:26:05 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/03 20:36:35 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_bzero(void *s, size_t n)
{
	size_t	i;
	char *str;
	str = s;
	i = 0;
	while(i < n && str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
	s = str;
}

#include <stdio.h>

int	main()
{
	char str[] = "teste";
	ft_bzero(&str,3);
	printf("%s", str);
}