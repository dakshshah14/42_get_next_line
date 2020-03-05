/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dashah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:37:37 by dashah            #+#    #+#             */
/*   Updated: 2020/02/21 18:56:55 by dashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings
** (all ending with ’\0’, including the array itself) obtained by spliting s
** using the character c as a delimiter. If the allocation fails the function
** returns NULL. Example : ft_strsplit("*hello*fellow***students*", ’*’)
** returns the array ["hello", "fellow", "students"].
*/

#include "libft.h"

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static int	times_s_has_c(const char *str, char c)
{
	int	i;
	int result;

	i = 0;
	result = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			result++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (result);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		words;
	char	**w;

	i = 0;
	k = 0;
	if (!s || !(w = (char **)malloc(sizeof(*w) * (times_s_has_c(s, c) + 1))))
		return (NULL);
	words = times_s_has_c(s, c);
	while (i < words)
	{
		while (s[k] == c)
			k += 1;
		if (!(w[i] = (char *)malloc(sizeof(char) * (word_len(&s[k], c) + 1))))
			return (NULL);
		j = 0;
		while (s[k] != c && s[k])
			w[i][j++] = s[k++];
		w[i][j] = '\0';
		i += 1;
	}
	w[i] = NULL;
	return (w);
}
