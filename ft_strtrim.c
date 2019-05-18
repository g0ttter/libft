/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:06:27 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/27 04:40:23 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strcmp((char *)s, "") == 0)
		return ("");
	while ((*s == ' ' || *s == '\t' || *s == '\n') && *s)
	{
		s++;
		i++;
	}
	while (s[i] != '\0')
		i++;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\0')
		i--;
	i++;
	return (ft_strndup((char*)s, i));
}
