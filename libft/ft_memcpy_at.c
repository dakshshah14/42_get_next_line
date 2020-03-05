/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_at.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:12:28 by dashah            #+#    #+#             */
/*   Updated: 2020/02/20 16:13:40 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies dst into src for n bytes and returns a pointer to where it left off.
*/

void	*ft_memcpy_at(void *dst, const void *src, size_t n)
{
	unsigned char	*iter;
	int				delta;
	size_t			len;

	iter = dst;
	len = n;
	delta = 0;
	while ((n = n - delta))
		if (n >= 8 && (delta = 8))
		{
			iter[len - n + 0] = ((unsigned char *)src)[len - n + 0];
			iter[len - n + 1] = ((unsigned char *)src)[len - n + 1];
			iter[len - n + 2] = ((unsigned char *)src)[len - n + 2];
			iter[len - n + 3] = ((unsigned char *)src)[len - n + 3];
			iter[len - n + 4] = ((unsigned char *)src)[len - n + 4];
			iter[len - n + 5] = ((unsigned char *)src)[len - n + 5];
			iter[len - n + 6] = ((unsigned char *)src)[len - n + 6];
			iter[len - n + 7] = ((unsigned char *)src)[len - n + 7];
		}
		else if (n >= 1 && (delta = 1))
			iter[len - n + 0] = ((unsigned char *)src)[len - n + 0];
	return (((char *)dst + len));
}
