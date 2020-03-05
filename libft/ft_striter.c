/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:14:00 by dashah            #+#    #+#             */
/*   Updated: 2020/02/21 18:43:30 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string passed as argument.
** Each character is passed by address to f to be modified if necessary.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
			f(&s[i++]);
	}
}
