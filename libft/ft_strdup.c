/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:07:09 by dashah            #+#    #+#             */
/*   Updated: 2020/02/20 15:11:39 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	len;

	len = ft_strlen(s1);
	result = (char *)malloc(sizeof(*result) * (len + 1));
	if (result == NULL)
		return (NULL);
	*((char *)ft_memcpy_at(result, s1, len)) = '\0';
	return (result);
}
