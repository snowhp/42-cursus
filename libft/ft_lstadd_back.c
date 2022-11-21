/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:04:58 by tde-sous          #+#    #+#             */
/*   Updated: 2022/11/21 19:07:33 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (lst)
	{
		if (!lst->next)
			break;
		lst = lst->next;
	}
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}