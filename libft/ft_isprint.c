/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:16:39 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/03 15:21:44 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 127)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int   main(void)
{
	char c = '~';
	printf("%i\n", isprint(c));
	printf("%i", ft_isprint(c));
	return 0;		
}*/