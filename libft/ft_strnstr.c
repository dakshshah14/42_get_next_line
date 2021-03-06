/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:32:36 by dashah            #+#    #+#             */
/*   Updated: 2020/02/20 16:36:18 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	fchar;
	size_t	nl;

	if (*haystack == '\0' && *needle != '\0')
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	hay = (char *)haystack;
	fchar = *needle;
	nl = ft_strlen(needle);
	while ((size_t)(hay - haystack) < len)
	{
		if ((hay = ft_strchr(hay, fchar)) == NULL)
			return (NULL);
		if (*hay == '\0' ||
			(size_t)(hay - haystack) > len || nl > len - (hay - haystack))
			break ;
		else
		{
			if (ft_memcmp(++hay, needle + 1, nl - 1) == 0)
				return (hay - 1);
		}
	}
	return (NULL);
}
