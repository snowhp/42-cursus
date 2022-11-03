/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:22:05 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/03 15:46:46 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

/*#include <string.h>
#include <stdio.h>
int   main(void)
{
	const char str[] = "TESTE123";
	printf("%lus\n", strlen(*str));
	printf("%i", ft_strlen(*str));
	return 0;		
}*/