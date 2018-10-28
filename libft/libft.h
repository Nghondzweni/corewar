/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 04:37:33 by tnghondz          #+#    #+#             */
/*   Updated: 2018/07/23 10:19:32 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t n);
void	*ft_memcpy(void *dst, void const *src, size_t n);
void	*ft_memccpy(void *dst, void const *src, int c, size_t n);
void	*ft_memmove(void *dst, void const *src, size_t n);
void	*ft_memchr(void const *s, int c, size_t n);
int		ft_memcmp(void const *s1, void const *s2, size_t n);

size_t	ft_strlen(char const *str);
char	*ft_strdup(char const *s1);
char	*ft_strcpy(char *dest, char const *src);
char	*ft_strncpy(char *dest, char const *src, size_t n);
char	*ft_strcat(char *dest, char const *src);
char	*ft_strncat(char *dest, char const *src, size_t n);
size_t	ft_strlcat(char *dest, char const *src, size_t n);
char	*ft_strchr(char const *str, int c);
char	*ft_strrchr(char const *str, int c);
char	*ft_strstr(char const *str, char const *to_find);
char	*ft_strnstr(char const *str, char const *to_find, size_t n);
int		ft_strcmp(char const *s1, char const *s2);
int		ft_strncmp(char const *s1, char const *s2, size_t n);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_isupper(int c);
int		ft_islower(int c);
char	*ft_itoa_base(int value, int base);


void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		get_next_line(int fd, char **line);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void    ft_printbits(unsigned char octet);
void    ft_printbits_fd(unsigned char octet, int fd);
#endif
