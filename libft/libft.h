#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int ft_atoi(char *number);
void *ft_bzero(void *mem, size_t n);
void *ft_calloc(size_t n, size_t size);
int ft_isalpha(char c);
int ft_isalum(char c);
int ft_isascii(int c);
int ft_isdigit(char c);
int ft_isprint(char c);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void    *memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, void *src, int size);
void *ft_memset(void *mem, int x, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlen(char const *str);
int ft_strncmp(char *s1, char *s2, size_t n);
char *ft_strrchr(const char *s, char c);
int ft_topupper(int param);
int ft_topupper(int param);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);


#endif