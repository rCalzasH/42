/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:53:45 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/16 10:36:28 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int	ft_atoi(char *number);
void	*ft_bzero(void *mem, size_t n);
void	*ft_calloc(size_t n, size_t size);
int	ft_isalpha(char c);
int	ft_isalum(char c);
int	ft_isascii(int c);
int	ft_isdigit(char c);
int	ft_isprint(char c);
void	*memchr(const void *s, int c, size_t n);
int	memcmp(const void *s1, const void *s2, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, void *src, int size);
void	*ft_memset(void *mem, int x, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(char const *str);
int	ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strrchr(const char *s, char c);
int	ft_topupper(int param);
int	ft_topupper(int param);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
unsigned int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
#endif
