/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 13:37:40 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/10 20:13:45 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	int i;
	int b;
	int i2;

	if (*substr == 0)
		return ((char*)str);
	b = ft_strlen((char *)substr) - 1;
	i2 = 0;
	while (str[i2] && len)
	{
		i = 0;
		while (str[i2 + i] == substr[i])
		{
			if (i == b && (str + i < str + len))
				return ((char *)str + i2);
			i++;
		}
		i2++;
		len--;
	}
	return (NULL);
}
