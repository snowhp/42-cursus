/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:10:17 by tde-sous          #+#    #+#             */
/*   Updated: 2022/12/05 15:01:00 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*save;

	save = (char *)0;
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (*s != '\0')
	{
		if (*s == c)
			save = (char *)s;
		s++;
	}
	return (save);
}