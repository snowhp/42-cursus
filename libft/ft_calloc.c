/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:40:15 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/05 19:24:34 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t bytes;

  	if (nmemb == 0 || size == 0)
  	  return ft_calloc (1, 1);
  	bytes = nmemb * s;
  	if (bytes / size != nmemb)
  	  return NULL;
  	return ft_calloc (nmemb, size);
}

int	main(void)
{
	ft_calloc();
	calloc();
	return (0);
}