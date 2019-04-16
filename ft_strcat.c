/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 18:55:59 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/10 19:46:01 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy_const(char *dest, const char *src)
{
	int i;

	i = 0;
	while ((dest[i] = src[i]))
		i++;
	return (dest);
}

char	*ft_strcat(char *dest, const char *src)
{
	while (*dest != '\0')
		dest++;
	return (ft_strcpy_const(dest,src));
}


//* int		main(void)
//{
//	char str[50] = "Hello ";
//	char str2[50] = "World!";
//	strcat(str, str2);
// strcat(str, " ...");
//	strcat(str, " Goodbye World!");
//	printf("Kak nado - %s\n", str);
//	char str3[50] = "Hello ";
//	ft_strcat(str3, str2);
//	ft_strcat(str3, " ...");
//	ft_strcat(str3, " Goodbye World!");
//	printf("Kak delayu ya – %s", str3);
//	return (0);
//} 

