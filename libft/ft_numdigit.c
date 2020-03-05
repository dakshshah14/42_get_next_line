/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:41:20 by dashah            #+#    #+#             */
/*   Updated: 2020/02/25 21:36:05 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numdigit(int num)
{
	int		digit;

	digit = 0;
	if (num == 0)
		digit++;
	if (num < 0)
	{
		digit++;
		num = num * -1;
	}
	while (num != 0)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}
