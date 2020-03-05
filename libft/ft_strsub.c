/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:47:19 by dashah            #+#    #+#             */
/*   Updated: 2020/02/20 16:48:04 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	char	*head;

	if (s == NULL)
		return (NULL);
	result = malloc(sizeof(*result) * (len + 1));
	if (result == NULL)
		return (NULL);
	head = result;
	while (start-- > 0)
		s++;
	while (len-- > 0)
	{
		*result = *s;
		s++;
		result++;
	}
	*result = '\0';
	return (head);
}
