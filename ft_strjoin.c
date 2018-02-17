/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:13:16 by cababou           #+#    #+#             */
/*   Updated: 2018/02/16 07:39:55 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_it(char const **s1, char const **s2, size_t free_level)
{
	if (free_level == 1)
		free((char *)(*s1));
	if (free_level == 2)
		free((char *)(*s2));
	if (free_level == 3)
	{
		free((char *)(*s1));
		free((char *)(*s2));
	}
}

char	*ft_strjoin(char const *s1, char const *s2, size_t free_level)
{
	size_t	i;
	char	*nstring;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	nstring = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (nstring == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		nstring[i] = s1[i];
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		nstring[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	nstring[i] = '\0';
	free_it(&s1, &s2, free_level);
	return (nstring);
}
