/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:13:46 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/09 20:40:00 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = s;
	while (n--)
	{
		*ptr++  = (unsigned char)c;
	}
	return (s);
}

int		main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks."; 

		printf("\nBefore memset(): %s\n", str); 
	memset(str + 13, '.', 8*sizeof(char)); 
		printf("After memset():  %s\n", str); 
	ft_memset(str + 13, '.', 8*sizeof(char)); 
		printf("After ft_memset(): %s", str);
	return (0);
}

