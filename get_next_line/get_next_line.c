/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:10:20 by tde-sous          #+#    #+#             */
/*   Updated: 2023/01/09 17:33:06 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_str(int fd, char *str)
{
	char		*buf;
	int		read_bytes;
	char 		*tmp;

	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	read_bytes = 1;
	while (read_bytes > 0 && !ft_strchr(buf, '\n'))
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes < 0)
		{
			if (str)
				free(str);
			free(buf);
			return (NULL);
		}
		buf[read_bytes] = '\0'; // colocar /0 no final
		tmp = ft_strjoin(str, buf);
		free(str);
		str = tmp;
	}
	free(buf);
	return (str);
}

char	*get_line(char *str)
{
	char	*result;
	// copy symbols before \n and \n
	// abc\ndef
	// result = "abc\n";
	int	i = 0;

	if(!(*(str + i)))
		return (NULL);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	result = ft_calloc(sizeof(char), (i + 2));
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = str[i];
	i++;
	result[i] = '\0';
	return (result);
}

char	*get_new_str(char *str)
{
	//str received = abc/ndef/0
	// strlen() = 7
	// index (/n) = 4
	// def = strlen()[7] - index (/n)[4]
	int	i;
	int	count;
	char *new_str;

	//find /n
	i = 0;
	count = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (!(*(str + i)))
	{
		free(str);
		return(NULL);
	}
	//find index of next char next to /n and malloc to the end of the str
	new_str = ft_calloc(sizeof(char), (ft_strlen(str) - i));
	if(!new_str)
		return(NULL);
	//copy new str
	//null byte at end of new str
	i++;
	while ((*(str + i)) != '\0')
		*(new_str + count++) = *(str + i++);
	//free str
	free(str);
	//return new str
	return(new_str);
}

char	*get_next_line(int fd)
{
	static char		*str;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = get_str(fd, str);// Obter a linha
	if (!str)
		return (NULL);
	line = get_line(str); //Limpar a linha 
	str = get_new_str(str);//Guardar o resto da linha sssss\nkkkkk
	return (line);//Devolver
}

#include <stdio.h>

int	main(void)
{
	int	i;
	int	fd;

	fd = open("fd3.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("ERROR ON FILE");
		return (0);
	}
	i = 0;
	while (i < 1)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
	return (0);
}