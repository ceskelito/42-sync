/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:26:50 by rceschel          #+#    #+#             */
/*   Updated: 2024/12/16 15:30:01 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

void			*ft_memset(void *s, int c, unsigned long n);
void			*ft_bzero(void *s, unsigned long n);
void			*ft_memcpy(void *dest, const void *src, size_t n);

size_t			ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlcat(char *dest, char *src, size_t size);

int				ft_toupper(int c);
int				ft_tolower(int c);

char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);

int				ft_strncmp(char *s1, char *s2, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void    		*ft_memmove(void *dest, const void *src, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);

int				ft_strlen(const char *s);
int				ft_atoi(char *str);

void 			*ft_calloc(size_t nmemb, size_t size);
char 			*ft_strdup(const char *s);
