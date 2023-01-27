/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:50:17 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/27 15:51:44 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_howlong(int c)
{
	int	count;
	
	count = 0;
	if (c < 0)
	{
		c *= -c;
		count++;
	}
	while (c  == 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int	i;
	char	*new;

	new = malloc((ft_howlong(n)) * sizeof(char));
	if (!new)
		return (NULL);
	if (n == 0)
		new[0] = '0';
	if (n < 0)
		new[0] = '-';
	i = 0;
	if (n > 9)
	{
		while (ft_howlong(n) != 0)
		{
			new[i] = n % 10 + 48;
			i++;
			n = n / 10;
		}
	}
	return (new);
}
