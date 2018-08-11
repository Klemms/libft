/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcontainer_addelement.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 05:13:38 by cababou           #+#    #+#             */
/*   Updated: 2018/08/11 04:51:22 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lstcontainer_add(t_lstcontainer *container, void *content)
{
	if (container == NULL)
		container = lstcontainer_new();
	if (container->firstelement == NULL)
		container->firstelement = ft_lstnew(content);
	else
		ft_lstadd(ft_lstgetlast(container->firstelement),
				ft_lstnew(content));
	return (ft_lstgetlast(container->firstelement));
}
