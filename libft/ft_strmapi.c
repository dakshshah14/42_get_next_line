/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:07:07 by dashah            #+#    #+#             */
/*   Updated: 2020/02/24 15:02:40 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	char	*head;

	if (!(s) || !(f))
		return (NULL);
	result = malloc(sizeof(*result) * (ft_strlen(s) + 1));
	head = result;
	if (result == NULL)
		return (NULL);
	while (*s)
	{
		*result = f((result - head), *s);
		result++;
		s++;
	}
	*result = '\0';
	return (head);
}
