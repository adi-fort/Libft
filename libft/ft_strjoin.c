/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:18:44 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/26 15:04:02 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	size;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	new = malloc(size);
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i] != 0)
	{
		new[i] = s1[i];
		i++;
	}
	size = 0;
	while (s2[size])
	{
		new[i] = s2[size];
		size++;
		i++;
	}
	new[i] = 0;
	return (new);
}
