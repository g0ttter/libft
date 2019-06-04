/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:57:52 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/05 17:08:51 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	while (n--)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}
