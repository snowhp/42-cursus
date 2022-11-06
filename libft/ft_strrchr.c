/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:04:30 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/05 16:17:47 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;

	save = (char *)0;
	while (*s != '\0')
	{
		if (*s == c)
			save = (char *)s;
		s++;
	}
	return (save);
}

/* #include <string.h>
#include <stdio.h>
int	main(void)
{
	const char s[] = "testeeessss";
	printf("%s\n", ft_strrchr(s, 'e'));
	const char t[] = "testeeessss";
	printf("%s\n", strrchr(t, 'e'));
	return (0);
} */