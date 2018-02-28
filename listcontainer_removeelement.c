/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcontainer_removeelement.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 05:26:45 by cababou           #+#    #+#             */
/*   Updated: 2018/02/28 19:16:27 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstcontainer_remove(t_list *element)
{
	ft_lstdelone(element);
}
