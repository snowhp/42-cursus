/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:10:20 by tde-sous          #+#    #+#             */
/*   Updated: 2022/12/05 15:39:21 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char	get_str(int fd, char *str)
{
	char	*buf;
	int	read_bytes;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))
	if(!buf)
		return (NULL);
	read_bytes = 1;
	while(read_bytes > 0 && !ft_strrchr(buf, '\n'))
	{
		
	}
}

char	*get_next_line(int fd)
{
	static char 	*str;
	
	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = get_str(fd, str);// Obter a linha
	if(!str)
		return (NULL);
	line = get_line(str);//Limpar a linha
	str = get_new_str(str);//Guardar o resto da linha
	return (line);//Devolver
}

int	main(void)
{
	int fd = open("FILE", O_RDONLY);
	while (i < 10)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
	return (0);
}