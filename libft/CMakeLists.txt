cmake_minimum_required(VERSION 3.13)
project(libft C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(libft
		ft_bzero.c
		ft_isascii.c
		ft_isprint.c
		ft_memset.c
		ft_strlen.c
		ft_strstr.c
		ft_tolower.c
		ft_toupper.c
		libft.h
		memcpy.c)
