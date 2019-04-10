/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:48:29 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/10 12:37:13 by lvelimir         ###   ########.fr       */
B
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;

	ptr = s;
	while (n—)
		*ptr++ = '\0';

}

int        main(void)
{
	    char str[50] = "GeeksForGeeks is for programming geeks."; 

		 printf("\nBefore memset(): %s\n", str); 
			 bzero(str + 13, 8*sizeof(char)); 
		printf("After memset():  %s\n", str); 
			ft_bzero(str + 13, 8*sizeof(char)); 
		printf("After ft_memset(): %s", str);
			return (0);
}

