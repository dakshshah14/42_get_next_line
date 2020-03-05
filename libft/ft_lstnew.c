/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:56:05 by dashah            #+#    #+#             */
/*   Updated: 2020/02/25 17:05:30 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	if (content)
	{
		element->content = malloc(content_size);
		if (element->content)
		{
			ft_memcpy(element->content, content, content_size);
			element->content_size = content_size;
		}
		else
			return (NULL);
	}
	else
	{
		element->content = NULL;
		element->content_size = 0;
	}
	element->next = NULL;
	return (element);
}
