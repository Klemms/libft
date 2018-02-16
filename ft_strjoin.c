/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:13:16 by cababou           #+#    #+#             */
/*   Updated: 2017/12/13 18:36:24 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
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
	return (nstring);
}
