/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:45:06 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/27 14:17:55 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst)
		return ;
	while ((*lst)->next != 0)
	{
		(*del)((*lst)->content);
		tmp = (*lst)->next;
		free(*lst);
		(*lst) = tmp;
	}
	(*del)((*lst)->content);
	free(*lst);
	*lst = NULL;
}
