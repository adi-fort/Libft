/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:34:16 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/30 17:46:11 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	new = (char *) malloc((len + 1) * sizeof(char));
	if (!new)
		return (0);
	if ((size_t) start >= ft_strlen(s)
		|| !(ft_strlcpy(new, s + start, len + 1)))
	new[0] = 0;
	return (new);
}
