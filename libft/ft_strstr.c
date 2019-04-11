/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:15:24 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/11 18:25:55 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strlen(const char *str)
{
	int count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_strstr(const char str, const char *substr)
{
	int i;
	int b;

	if (*substr == '\0')
		return ((char*)str);
	b = ft_strlen(substr);
	while (*str)
	{
		i = 0;
		while (*str++ == substr[i++])
			if (i == b)
				return ((char *)str - i);
		str++;
	}
	return (NULL);
}
