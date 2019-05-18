/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 13:21:02 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/04 14:21:16 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_itoa(int n)
{
	char		*str;
	size_t		i;
	size_t		sign;
	long int	nice;

	nice = n;
	i = 0;
	sign = 0;
	str = ft_strnew(12);
	if (str == NULL)
		return (NULL);
	if (nice < 0)
	{
		sign = 1;
		nice = nice * -1;
	}
	str[i++] = (nice % 10) + '0';
	while ((nice = nice / 10))
	{
		str[i] = (nice % 10) + '0';
		i++;
	}
	if (sign)
		str[i] = '-';
	return (ft_strrev(str));
}
