/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 21:27:42 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/17 21:13:18 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_do_the_thing(char **result, const char *s, char c)
{
	size_t z;
	size_t i;

	z = 0;
	while (*s)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			i++;
		}
		if (i != 0)
			if (!(result[z++] = ft_strndup((char *)s - i, i)))
			{
				while (z--)
					free(result[z]);
				return (NULL);
			}
	}
	result[z] = NULL;
	return (result);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	if (!(result = (char **)malloc(sizeof(char *) * ft_wc(s, c) + 1)))
		return (NULL);
	result = ft_do_the_thing(result, s, c);
	return (result);
}
