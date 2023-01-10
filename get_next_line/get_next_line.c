/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:10:20 by tde-sous          #+#    #+#             */
/*   Updated: 2023/01/10 16:43:59 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_str(int fd, char *str)
{
	char		*buf;
	char		*tmp;
	int			read_bytes;

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
		buf[read_bytes] = '\0';
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
	int		i;

	i = 0;
	if (!(*(str + i)))
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
	char	*new_str;
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (!(*(str + i)))
	{
		free(str);
		return (NULL);
	}
	new_str = ft_calloc(sizeof(char), (ft_strlen(str) - i));
	if (!new_str)
		return (NULL);
	i++;
	while ((*(str + i)) != '\0')
		*(new_str + count++) = *(str + i++);
	free(str);
	return (new_str);
}

char	*get_next_line(int fd)
{
	static char		*str;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = get_str(fd, str);
	if (!str)
		return (NULL);
	line = get_line(str);
	str = get_new_str(str);
	return (line);
}

/* #include <stdio.h>

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
} */