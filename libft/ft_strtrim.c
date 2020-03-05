/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:48:28 by dashah            #+#    #+#             */
/*   Updated: 2020/02/20 16:49:09 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespacep(int c)
{
	char *whitespaces;

	whitespaces = " \t\n\0";
	while (*whitespaces)
		if (c == *whitespaces++)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t	end;
	size_t	start;
	char	*result;
	char	*head;

	if (s == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (is_whitespacep(*(s + end - 1)))
		end--;
	while (is_whitespacep(*s) && ++start)
		s++;
	if (start > end)
		start = end;
	result = malloc(sizeof(*result) * (end - start + 1));
	if (result == NULL)
		return (NULL);
	head = result;
	while (start < end && ++start)
		*result++ = *s++;
	*result = '\0';
	return (head);
}
