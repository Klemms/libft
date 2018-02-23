/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcontainer_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 05:32:52 by cababou           #+#    #+#             */
/*   Updated: 2018/02/23 22:14:51 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lstcontainer	*lstcontainer_new(void)
{
	t_lstcontainer	*newcontainer;

	newcontainer = malloc(sizeof(t_lstcontainer));
	newcontainer->add = lstcontainer_add;
	newcontainer->remove = lstcontainer_remove;
	newcontainer->size = lstcontainer_size;
	newcontainer->firstelement = NULL;
	return (newcontainer);
}
