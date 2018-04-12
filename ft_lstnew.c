/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 20:10:57 by cababou           #+#    #+#             */
/*   Updated: 2018/04/07 00:56:13 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*liste;

	if ((liste = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	liste->prev = NULL;
	liste->next = NULL;
	liste->index = 0;
	if (content == NULL || content_size == 0)
	{
		liste->content = NULL;
		liste->content_size = 0;
		return (liste);
	}
	liste->content = content;
	liste->content_size = content_size;
	return (liste);
}
