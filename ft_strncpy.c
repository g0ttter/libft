/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:40:42 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/11 18:23:02 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t count)
{
	while (count-- && *src)
		*dest++ = *src++;
	while (count-- && *dest)
		*dest++ = '\0';
	return (dest);
}
