/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 17:10:41 by cababou           #+#    #+#             */
/*   Updated: 2018/02/16 04:03:17 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **lst)
{
	t_list	*element;

	element = *ft_lstgetfirst(lst);
	while (element != NULL)
	{
		free(element->content);
		element = element->next;
		free(element);
	}
	free(element);
}
