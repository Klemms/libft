/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 17:10:41 by cababou           #+#    #+#             */
/*   Updated: 2018/03/03 05:36:15 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list *lst)
{
	t_list	*element;
	t_list	*tmp;

	if (lst)
	{
		tmp = ft_lstgetfirst(lst);
		element = tmp;
		while (element)
		{
			if (element->content)
				free(element->content);
			tmp = element->next ? element->next : NULL;
			free(element);
			element = tmp;
		}
	}
}
