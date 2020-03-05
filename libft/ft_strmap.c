/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:00:18 by dashah            #+#    #+#             */
/*   Updated: 2020/02/24 15:00:21 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	s_len;
	char	*result;
	char	*head;

	if (!(s) || !(f))
		return (NULL);
	s_len = ft_strlen(s);
	result = malloc(sizeof(*result) * (s_len + 1));
	if (result == NULL)
		return (NULL);
	head = result;
	while (*s)
	{
		*result = f(*s);
		s++;
		result++;
	}
	*result = '\0';
	return (head);
}
