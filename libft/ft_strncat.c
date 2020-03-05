/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:10:39 by dashah            #+#    #+#             */
/*   Updated: 2020/02/20 16:11:53 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*head;

	head = s1;
	s1 = ft_str_go_to_end(s1);
	*((char *)ft_memcpy_at(s1, s2,
			ft_fast_find(s2, n, '\0') - s2)) = '\0';
	return (head);
}
