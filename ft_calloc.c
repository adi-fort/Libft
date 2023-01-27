/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:55:13 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/26 17:10:49 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (num * size));
	return (ptr);
}
