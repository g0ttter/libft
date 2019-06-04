/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:54:55 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/19 12:32:56 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t i2;
	size_t i3;

	i3 = ft_strlen((char*)src);
	i = ft_strlen(dest);
	if (size < i)
		i2 = size;
	else
		i2 = i;
	while (*src && (i < size - 1) && size != 0)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (i2 + i3);
}
