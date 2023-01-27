/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:01:18 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/24 17:02:02 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != 0 && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}		
	return (j);
}
