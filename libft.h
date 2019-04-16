/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:29:26 by lvelimir          #+#    #+#             */
/*   Updated: 2019/04/11 18:43:41 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

int	ft_strlen(char *str);
void	ft_bzero(void *s, size_t n);
int	ft_isprint(char c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	ft_toupper(char c);
char	ft_tolower(char c);
char	*ft_strncpy(char *dest, char *src, size_t count);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);

#endif


