/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:42:49 by dashah            #+#    #+#             */
/*   Updated: 2020/02/25 17:48:50 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*f_list;
	t_list	*fut_list;
	t_list	*head;

	if (lst == NULL || !(f_list = ft_lstnew(NULL, 0)))
		return (NULL);
	f_list = f(lst);
	head = f_list;
	while (lst->next)
	{
		lst = lst->next;
		fut_list = f(lst);
		f_list->next = fut_list;
		f_list = fut_list;
	}
	return (head);
}
