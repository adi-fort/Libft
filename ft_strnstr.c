/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:42:54 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/24 16:49:18 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*s1;
	char	*s2;
	size_t	lenght;

	if (!*little)
		return ((char *)big);
	if (!big && !len)
		return (0);
	s1 = (char *)big;
	s2 = (char *)little;
	i = 0;
	lenght = ft_strlen(s2);
	while (s1[i] != 0 && (i + lenght) <= len)
	{
		if (ft_strncmp((s1 + i), s2, lenght) == 0)
		{
			return (s1 + i);
		}
		i++;
	}
	return (NULL);
}
