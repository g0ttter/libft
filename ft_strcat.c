/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 18:55:59 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/05 17:05:48 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy_from_i(char *dest, const char *src, int i)
{
	while ((dest[i] = *src++))
		i++;
	return (dest);
}

char		*ft_strcat(char *dest, const char *src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest = ft_strcpy_from_i(dest, src, i);
	return (dest);
}
