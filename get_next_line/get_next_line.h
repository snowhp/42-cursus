/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:10:22 by tde-sous          #+#    #+#             */
/*   Updated: 2023/01/04 14:49:35 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# ifndef ARRAY_MAX_SIZE
#  define ARRAY_MAX_SIZE 4096
# endif

char	*get_next_line(int fd);
/* 	UTILS FT */
char	*ft_strrchr(const char *s, int c);
int	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
#endif