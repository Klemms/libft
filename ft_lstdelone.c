/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 20:09:47 by cababou           #+#    #+#             */
/*   Updated: 2018/03/03 01:33:15 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *elementlist)
{
	t_list	*tmpelement;

	if (elementlist)
	{
		if (elementlist->prev)
			elementlist->prev->next = NULL;
		if (elementlist->next)
		{
			elementlist->prev->next = elementlist->next;
			elementlist->next->prev = elementlist->prev;
			tmpelement = elementlist->next;
			while (tmpelement)
			{
				tmpelement->index--;
				tmpelement = tmpelement->next;
			}
		}
		if (elementlist->content)
			free(elementlist->content);
		free(elementlist);
	}
}
