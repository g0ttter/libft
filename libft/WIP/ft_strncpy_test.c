/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:07:06 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/11 18:11:17 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char dest[4];
	
	strncpy(dest, "Hello", 4);
	printf("Should be = %s\n", dest);
	return (0);
}
