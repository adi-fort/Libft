/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:17:27 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/27 14:16:56 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{	
	if (!lst)
		return ;
	while (lst->next != 0)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
	(*f)(lst->content);
}
