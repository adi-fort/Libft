/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:52:41 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/23 16:55:04 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	if ((char *)src == '\0' && (char *)dest == '\0')
		return (NULL);
	s1 = (char *)dest;
	s2 = (char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{	
			s1[i] = s2[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			s1[n] = s2[n];
	}
	return (dest);
}
