/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:15:24 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/04 13:00:21 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *substr)
{
	int i;
	int b;
	int i2;

	i2 = 0;
	if (*substr == '\0')
		return ((char*)str);
	b = ft_strlen((char *)substr) - 1;
	while (str[i2])
	{
		i = 0;
		while (str[i2 + i] == substr[i])
		{
			if (i == b)
				return ((char *)str + i2);
			i++;
		}
		i2++;
	}
	return (NULL);
}
