/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:37:34 by dashah            #+#    #+#             */
/*   Updated: 2020/02/21 18:41:40 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		num = -1 * nb;
	}
	else
		num = nb;
	if (num < 10 && (num = num + '0'))
		ft_putchar_fd(num, fd);
	else
	{
		ft_putnbr_fd(num / 10, fd);
		num = (num % 10) + '0';
		ft_putchar_fd(num, fd);
	}
}
