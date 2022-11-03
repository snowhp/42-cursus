/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:26:43 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/03 14:27:07 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>
int main(void)
{
	char c = '0';
	printf("%i\n", isalnum(c));
	printf("%i", ft_isalnum(c));
	return 0;		
}