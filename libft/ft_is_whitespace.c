/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_Whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:51:05 by dashah            #+#    #+#             */
/*   Updated: 2020/02/20 16:51:24 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_whitespace(int c)
{
	char *whitespaces;

	whitespaces = " \t\n\v\f\r\0";
	while (*whitespaces)
		if (c == *whitespaces++)
			return (1);
	return (0);
}
