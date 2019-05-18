/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:03:29 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/17 22:12:08 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *lhs, const void *rhs, size_t count)
{
	unsigned char const *llhs;
	unsigned char const *rrhs;

	llhs = lhs;
	rrhs = rhs;
	while (count--)
	{
		if (*llhs != *rrhs)
		{
			return (*llhs - *rrhs);
		}
		llhs++;
		rrhs++;
	}
	return (0);
}
