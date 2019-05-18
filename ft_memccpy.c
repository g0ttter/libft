/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:40:24 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/17 20:41:56 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*pdst;
	const unsigned char	*psrc;

	pdst = dst;
	psrc = src;
	while (n--)
	{
		if (*psrc == (unsigned char)c)
		{
			*pdst++ = *psrc++;
			return (pdst);
		}
		*pdst++ = *psrc++;
	}
	return (NULL);
}
