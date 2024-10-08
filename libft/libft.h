/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:03:46 by tzanchi           #+#    #+#             */
/*   Updated: 2023/11/21 12:46:24 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# ifndef __USE_MISC
#  define __USE_MISC
# endif
# include <math.h>

# define DEC_BASE "0123456789"
# define HEX_BASE_LOW "0123456789abcdef"
# define HEX_BASE_UP "0123456789ABCDEF"
# define POINTER_PREFIX "0x"
# define NULL_DISPLAY "(null)"
# define NIL_DISPLAY "(nil)"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_atoi(const char *nptr);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
int				ft_printf(const char *s, ...);
size_t			putchar_count(int c);
size_t			putstr_count(char *s);
size_t			putnbr_base_count(int nbr, char *base);
size_t			putunbr_base_count(unsigned int nbr, char *base);
size_t			putptr_base_count(void *ptr, char *base, int first_loop_flag);
char			*get_next_line(int fd);
int				ft_min(int a, int b);
int				ft_max(int a, int b);
float			ft_rad(float theta_deg);
float			ft_deg(float theta_rad);
float			ft_min_float(float a, float b);
float			ft_max_float(float a, float b);
void			ft_swap(int *a, int *b);
unsigned int	ft_strtoui(char *str, int base);
int				ft_printf_colour(char *colour, const char *s, ...);
int				ft_isnumeric(char *str);
size_t			get_char_arr_length(char **arr);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_concat(size_t n, ...);
void			free_and_set_to_null(size_t n, ...);

#endif
