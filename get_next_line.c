/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:46:37 by dashah            #+#    #+#             */
/*   Updated: 2020/03/04 14:54:04 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*check_remainder(char **line, char *remainder)
{
	char	*p_n;

	p_n = NULL;
	if (remainder)
	{
		if ((p_n = ft_strchr(remainder, '\n')))
		{
			*p_n = '\0';
			*line = ft_strdup(remainder);
			p_n++;
			ft_strcpy(remainder, p_n);
		}
		else
		{
			*line = ft_strdup(remainder);
			ft_strclr(remainder);
		}
	}
	else
	{
		*line = ft_strnew(1);
	}
	return (p_n);
}

int		get_line(const int fd, char **line, char **remainder)
{
	int		ret;
	char	*temp;
	char	*p_t_n;
	char	buf[BUFF_SIZE + 1];

	p_t_n = check_remainder(line, *remainder);
	while (!p_t_n && (ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if ((p_t_n = ft_strchr(buf, '\n')))
		{
			*p_t_n = '\0';
			p_t_n++;
			*remainder = ft_strdup(p_t_n);
		}
		temp = *line;
		*line = ft_strjoin(*line, buf);
		free(temp);
	}
	return (ret || ft_strlen(*line) ? 1 : 0);
}

t_gnl	*create_new_gnl(int fd)
{
	t_gnl	*new;

	new = (t_gnl*)malloc(sizeof(t_gnl));
	new->fd = fd;
	new->remainder = NULL;
	new->next = NULL;
	return (new);
}

int		get_next_line(const int fd, char **line)
{
	static t_gnl	*head;
	t_gnl			*temp;
	char			buf[BUFF_SIZE + 1];

	if (!line || read(fd, buf, 0) < 0)
		return (-1);
	if (head == NULL)
		head = create_new_gnl(fd);
	temp = head;
	while (temp->fd != fd)
	{
		if (temp->next == NULL)
			temp->next = create_new_gnl(fd);
		temp = temp->next;
	}
	return (get_line(temp->fd, line, &temp->remainder));
}

int		main(void)
{
	int		fd;
	int		fd2;
	int		ret;
	char	*line;

	fd = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	if (fd == -1 || fd2 == -1)
	{
		printf("open() error");
		return (1);
	}
	ret = get_next_line(fd2, &line);
	printf("->%s\n\n", line);
	ret = get_next_line(fd, &line);
	printf("->%s\n\n", line);
	ret = get_next_line(fd2, &line);
	printf("->%s\n\n", line);
	ret = get_next_line(fd, &line);
	printf("->%s\n\n", line);
	return (0);
}
