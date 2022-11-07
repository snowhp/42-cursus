/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:04:12 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/07 15:07:39 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>


int	main(void)
{
	printf("-----------------------------------------");
	char str = 't'; // <---- Valor de teste !
	printf("\n\t|||||ft_isalpha|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",ft_isalpha(str));
	printf("\n\t|||||isalpha|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",isalpha(str));
	printf("-----------------------------------------\n");

	str = '0'; // <---- Valor de teste !
	printf("\n\t|||||ft_isdigit|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",ft_isdigit(str));
	printf("\n\t|||||isdigit|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",isdigit(str));
	printf("-----------------------------------------\n");

	str = 'C'; // <---- Valor de teste !
	printf("\n\t|||||ft_isalnum|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",ft_isalnum(str));
	printf("\n\t|||||isalnum|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",isalnum(str));
	printf("-----------------------------------------\n");

	str = '~'; // <---- Valor de teste !
	printf("\n\t|||||ft_isascii|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",ft_isascii(str));
	printf("\n\t|||||isascii|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",isascii(str));
	printf("-----------------------------------------\n");

	str = '\t'; // <---- Valor de teste !
	printf("\n\t|||||ft_isprint|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",ft_isprint(str));
	printf("\n\t|||||isprint|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",isprint(str));
	printf("-----------------------------------------\n");

	str = '\t'; // <---- Valor de teste !
	printf("\n\t|||||ft_isprint|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",ft_isprint(str));
	printf("\n\t|||||isprint|||||\n0 - Nao corresponde || 1 - Corresponde \n\t---->%i<----\n",isprint(str));
	printf("-----------------------------------------\n");

	char dst[] = "ola";
	char src[] = "123";
	printf("%zu",ft_strlcat(dst, src, 2));
	printf("%s", dst);
	return (0);
}