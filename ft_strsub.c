/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:01:36 by cababou           #+#    #+#             */
/*   Updated: 2017/12/13 19:45:15 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*nstring;

	if (s == NULL)
		return (NULL);
	i = 0;
	nstring = (char *)malloc(sizeof(char) * (len + 1));
	if (nstring == NULL)
		return (NULL);
	while (i < len)
	{
		nstring[i] = s[start + i];
		i++;
	}
	nstring[i] = '\0';
	return (nstring);
}
