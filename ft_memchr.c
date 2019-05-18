/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 21:34:11 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/17 21:56:54 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	unsigned const char *pptr;

	pptr = ptr;
	while (count--)
	{
		if (*pptr == (unsigned char)ch)
			return ((void *)pptr);
		pptr++;
	}
	return (NULL);
}
