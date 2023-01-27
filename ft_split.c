/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:48:36 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/27 15:45:19 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_how_many(char	*s, int c)
{
	char	**array_array;

	array_array[0] = s;
	if (!ft_strchr(s, c))
			return (array_array);
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != c)
		{	
			if (s[i] == c)
			count += 1;
			i++;
		}	
		while (s[i] == c)
			i++;
	}
	return (count + 1);
	
	//restituire X = numero di stringhe da allocare dopo il cut
}


char	**ft_split(char const *s, char c)
{

	//Alloco (X * sizeof(char *))
}
