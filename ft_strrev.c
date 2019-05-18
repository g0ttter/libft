/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 17:19:07 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/17 17:20:20 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*result;
	size_t	len;
	size_t	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	result = ft_strdup(str);
	if (result == NULL)
		return (NULL);
	while (len--)
		result[i++] = str[len];
	return (result);
}
