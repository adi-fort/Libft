/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:51:06 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/27 11:07:31 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;
	unsigned int	j;

	new = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		new[j] = (*f)(i, (s[i]));
		i++;
		j++;
	}
	new[j] = 0;
	return (new);
}
