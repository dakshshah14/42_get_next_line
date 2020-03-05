/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:00:30 by dashah            #+#    #+#             */
/*   Updated: 2020/02/25 15:12:52 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*dst_ptr;

	i = 0;
	dst_ptr = dst;
	while (i < n)
	{
		dst_ptr[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
