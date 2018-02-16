/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 17:58:14 by cababou           #+#    #+#             */
/*   Updated: 2018/02/16 07:34:25 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	spstrlen(char const *s, int start, char until)
{
	size_t	i;

	i = 0;
	while (s[start + i] != until && s[start + i] != '\0')
	{
		i++;
	}
	return (i);
}

static size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		makeword;

	i = 0;
	count = 0;
	makeword = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			makeword = 0;
		if (s[i] != c && makeword == 0)
		{
			makeword = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	y;
	char	**table;

	if (s == NULL)
		return (NULL);
	i = 0;
	table = malloc(2 * (sizeof(char **) * (countwords(s, c) + 1)));
	if (table == NULL)
		return (NULL);
	y = 0;
	while (i < countwords(s, c))
	{
		while (s[y] == c)
			y++;
		table[i] = ft_strsub(s, y, spstrlen(s, y, c), 0);
		y += spstrlen(s, y, c);
		i++;
	}
	table[i] = NULL;
	return (table);
}
