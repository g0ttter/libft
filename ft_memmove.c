/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:42:26 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/10 20:27:20 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	if (src == NULL && dest == NULL)
		return (NULL);
	if (src > dest)
		return (ft_memcpy(dest, src, count));
	else
		return (ft_memcpy_backwards(dest, src, count));
}
