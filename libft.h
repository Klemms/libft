/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cababou <cababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:21:05 by cababou           #+#    #+#             */
/*   Updated: 2018/02/16 07:26:58 by cababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>

void				*ft_memset(void *b, int c, size_t len);

void				*ft_memcpy(void *dst, const void *src, size_t n);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

void				ft_bzero(void *s, size_t n);

size_t				ft_strlen(const char *s);

char				*ft_strdup(const char *s1);

char				*ft_strcpy(char *dst, const char *src);

char				*ft_strncpy(char *dst, const char *src, size_t len);

char				*ft_strcat(char *s1, const char *s2);

char				*ft_strncat(char *s1, const char *s2, size_t n);

int					ft_strcmp(const char *s1, const char *s2);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_isalpha(int c);

int					ft_atoi(const char *str);

int					ft_isdigit(int c);

int					ft_isascii(int c);

int					ft_isprint(int c);

int					ft_toupper(int c);

int					ft_tolower(int c);

char				*ft_strstr(const char *haystack, const char *needle);

char				*ft_strnstr(const char *hs, const char *nl, size_t len);

char				*ft_strchr(const char *s, int c);

char				*ft_strrchr(const char *s, int c);

size_t				ft_strlcat(char *s1, const char *s2, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

void				*ft_memmove(void *dst, const void *src, size_t len);

int					ft_isalnum(int c);

void				*ft_memalloc(size_t size);

void				ft_memdel(void **ap);

char				*ft_strnew(size_t size);

void				ft_strdel(char **as);

void				ft_strclr(char *s);

void				ft_striter(char *s, void (*f)(char *));

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

char				*ft_strmap(char const *s, char (*f)(char));

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_strequ(char const *s1, char const *s2);

int					ft_strnequ(char const *s1, char const *s2, size_t n);

char				*ft_strsub(char const *s, size_t t, size_t l, size_t f);

char				*ft_strjoin(char const *s1, char const *s2, size_t freelv);

char				*ft_strrev(char const *s1);

char				*ft_strtrim(char const *s);

void				ft_putchar(char c);

void				ft_putstr(char const *s);

char				**ft_strsplit(char const *s, char c);

size_t				ft_countchars(char const *s, char c);

char				*ft_itoa(int n);

void				ft_putnbr(int n);

void				ft_putendl(char const *s);

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char const *s, int fd);

void				ft_putendl_fd(char const *s, int fd);

void				ft_putnbr_fd(int n, int fd);

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	size_t			index;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);

t_list				**ft_lstgetfirst(t_list **lst);

t_list				**ft_lstgetlast(t_list **lst);

void				ft_lstadd(t_list **listelement, t_list *newelement);

void				ft_lstdelone(t_list *elementlist);

void				ft_lstdel(t_list **lst);

void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

void				*ft_lstget(size_t index, t_list *anyelement);

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
