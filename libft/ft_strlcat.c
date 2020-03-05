/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:45:40 by dashah            #+#    #+#             */
/*   Updated: 2020/02/20 15:54:18 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*head;

	head = dst;
	i = ft_strlen(src);
	dst = (char *)ft_fast_find(dst, dstsize, '\0');
	if ((size_t)(dst - head) == dstsize)
		return (dstsize + i);
	else
	{
		if (dstsize - (dst - head) <= i)
			*(char *)(ft_memcpy_at(dst, src,
						dstsize - (dst - head) - 1)) = '\0';
		else
			*(char *)(ft_memcpy_at(dst, src, i)) = '\0';
		return (dst - head + i);
	}
}
