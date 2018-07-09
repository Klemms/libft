/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcontainer_removeelement.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 05:26:45 by cababou           #+#    #+#             */
/*   Updated: 2018/07/09 03:10:02 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstcontainer_remove(t_lstcontainer *liste, t_list *element)
{
	if (element->prev == NULL && element->next == NULL)
		liste->firstelement = NULL;
	ft_lstdelone(element);
}
