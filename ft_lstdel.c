/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 17:10:41 by cababou           #+#    #+#             */
/*   Updated: 2018/03/03 05:10:21 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list *lst)
{
	t_list	*element;

	if (lst)
	{
		element = ft_lstgetfirst(lst);
		while (element)
		{
			if (element->content)
				free(element->content);
			element = element->next;
			free(element);
		}
		free(element);
	}
}
