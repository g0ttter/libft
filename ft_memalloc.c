/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:07:32 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/23 17:43:41 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memoryarea;

	memoryarea = (void *)malloc(sizeof(void *) * size);
	if (memoryarea == NULL)
		return (NULL);
	ft_bzero(memoryarea, size);
	return (memoryarea);
}
