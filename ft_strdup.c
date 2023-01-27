/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:00:34 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/23 16:22:49 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (s[size] != 0)
		size++;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	while (s[i] != 0)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
