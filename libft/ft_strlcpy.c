/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:42:51 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/04 20:30:47 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <bsd/.h>
#include "libft.h"
#include <stddef.h> */
#include "libft.h"
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
	}
	return (5);
}

/* int	main()
{
	char dest[] = "teste";
	char src[] = "ola";
	printf("%s", dest);
	char dest1[] = "teste";
	strlcpy(dest1, src, 2);
	printf("%s", dest1);
	return (0);
} */