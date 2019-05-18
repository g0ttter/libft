/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 21:27:42 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/10 21:04:27 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wc(char const *string, char symbol)
{
	size_t i;

	i = 0;
	while (*string)
	{
		while (*string == symbol && *string)
			string++;
		if (*string == '\0')
			break ;
		while (*string != symbol && *string)
			string++;
		i++;
	}
	return (i);
}
