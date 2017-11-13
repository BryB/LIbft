/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 16:12:27 by bbrady            #+#    #+#             */
/*   Updated: 2017/06/17 09:28:11 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_content(const int fd, char *buffer, char *s[fd])
{
	char	*tmp;
	char	*point;
	int		i;

	i = 0;
	point = NULL;
	tmp = NULL;
	while (!(point = ft_strchr(s[fd], '\n')) &&
	(i = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		point = ft_strchr(s[fd], '\n');
		buffer[i] = '\0';
		tmp = s[fd];
		s[fd] = ft_strjoin(tmp, buffer);
		ft_strdel(&tmp);
	}
	if (i == 0 && !point)
		return (0);
	return (i != -1 ? 1 : -1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*s[255 + 1];
	char		buffer[BUFF_SIZE + 1];
	char		*tmp;
	int			input;

	if (fd < 0 || !line)
		return (-1);
	if (!s[fd])
		s[fd] = ft_strnew(1);
	input = is_content(fd, buffer, &*s);
	if (input == -1)
		return (-1);
	if (input == 1)
	{
		*line = ft_strsub(s[fd], 0, ft_strchr(s[fd], '\n') - s[fd]);
		tmp = s[fd];
		s[fd] = ft_strdup(ft_strchr(s[fd], '\n') + 1);
		ft_strdel(&tmp);
		return (1);
	}
	*line = s[fd];
	s[fd] = NULL;
	return (0);
}
