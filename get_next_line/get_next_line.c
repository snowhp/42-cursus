/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:10:20 by tde-sous          #+#    #+#             */
/*   Updated: 2023/01/06 15:41:32 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_str(int fd, char *str)
{
	char	*buf;
	int		read_bytes;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	read_bytes = 1;
	while (read_bytes > 0 && !ft_strrchr(buf, '\n'))
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes < 0)
		{
			free(buf);
			return (NULL);
		}
		buf[read_bytes] = '\0'; // colocar /0 no final
		str = ft_strjoin(str, buf);
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

	while(str[i] != '\n' && str[i] != '\0')
		i++;
	result = malloc(sizeof(char) * (i + 1));
	i = 0;
	while(str[i] != '\n' && str[i] != '\0')
	{
		str[i] = result[i];
		i++;
	}
	result[++i] = '\n';
	return (result);
}

char	*get_new_str(char *str)
{
	char	*tmp;
	char	*new_line;
	int	count;
	int	i;

	count = 0;
	tmp = str;
	while (tmp[count] && tmp[count] != '\n')
		count++;
	// "abc\ndef" ft_strlen() => 7
	// while => 4

	// count of symbols after \n => 3 "def"
	count = ft_strlen(str) - count;
	new_line = malloc(sizeof(char) * (count + 1));
	// find index of first character after \n (index of 'd' = 4)
	count = ft_strlen(str) - count;
	i = 0;
	while (str[count] != '\0')
	{
		new_line[i] = str[count];
		count++;
		i++;
	}
	free(str);
	new_line[i] = '\0';
	return (new_line);
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

	fd = open("./fd2.txt", O_RDONLY);
	if(fd == -1)
	{
		printf("ERROR ON FILE");
		return (0);
	}
	i = 0;
	while (i < 10)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
	return (0);
}