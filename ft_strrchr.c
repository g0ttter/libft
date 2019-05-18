/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 12:42:06 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/04 12:28:52 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;

	i = ft_strlen((char *)str);
	while (i > -1)
	{
		if (str[i] == (char)ch)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
