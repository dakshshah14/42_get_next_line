/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:05:24 by dashah            #+#    #+#             */
/*   Updated: 2020/02/25 16:12:53 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = -1;
	while (++i < n)
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + (int)i);
	return (NULL);
}
