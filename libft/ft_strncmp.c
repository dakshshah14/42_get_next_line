/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:14:23 by dashah            #+#    #+#             */
/*   Updated: 2020/02/20 16:23:35 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t len;

	len = ft_min(ft_strlen(s1) + 1, ft_strlen(s2) + 1);
	len = ft_min(len, n);
	return (ft_memcmp(s1, s2, len));
}
