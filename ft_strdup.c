/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:34:05 by cababou           #+#    #+#             */
/*   Updated: 2017/12/13 20:29:41 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*scopy;
	int		i;

	scopy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (scopy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		scopy[i] = s1[i];
		i++;
	}
	scopy[i] = '\0';
	return (scopy);
}
