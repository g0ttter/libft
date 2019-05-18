/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:24:48 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/18 17:54:04 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t count)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	while (count-- && *src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
