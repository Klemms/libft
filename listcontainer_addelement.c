/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcontainer_addelement.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 05:13:38 by cababou           #+#    #+#             */
/*   Updated: 2018/02/26 02:53:16 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lstcontainer_add(t_lstcontainer *container, void *content, size_t size)
{
	if (container->firstelement == NULL)
		container->firstelement = ft_lstnew(content, size);
	else
		ft_lstadd(ft_lstgetlast(container->firstelement),
				ft_lstnew(content, size));
	return (ft_lstgetlast(container->firstelement));
}
