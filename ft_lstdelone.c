/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 20:09:47 by cababou           #+#    #+#             */
/*   Updated: 2018/02/16 04:14:50 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *elementlist)
{
	t_list	*tmpelement;

	elementlist->prev->next = NULL;
	if (elementlist->next != NULL)
	{
		elementlist->prev->next = elementlist->next;
		elementlist->next->prev = elementlist->prev;
		tmpelement = elementlist->next;
		while (tmpelement != NULL)
		{
			tmpelement->index--;
			tmpelement = tmpelement->next;
		}
	}
	free(elementlist->content);
	free(elementlist);
}
