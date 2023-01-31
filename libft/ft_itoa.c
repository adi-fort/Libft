/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:50:17 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/30 14:39:33 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_howlong(long int c)
{
	int	count;

	if (c == 0)
		return (1);
	count = 0;
	if (c < 0)
	{
		++count;
		c = c * -1;
	}
	while (c != 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	i;
	char		*new;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_howlong(n);
	new = (char *)malloc((i + 1) * sizeof(char));
	if (!new)
		return (0);
	if (n < 0)
	{
		new[0] = '-';
		n *= -1;
	}
	new[i] = 0;
	while (n != 0)
	{
			new[--i] = n % 10 + 48;
			n = n / 10;
	}
	return (new);
}
