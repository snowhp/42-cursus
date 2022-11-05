/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:04:30 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/04 22:11:11 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;
	char	ch;

	save = (char *) 0;
	while ((ch = *s))
	{
		if (ch == c)
			save = (char *) s;
		s++;
	}
	return (save);
}

/* #include <string.h>
#include <stdio.h>
int	main()
{
	const char s[] = "testeeessss";
	printf("%s\n", ft_strrchr(s, 'e'));
	const char t[] = "testeeessss";
	printf("%s\n", strrchr(t, 'e'));
	return (0);
} */