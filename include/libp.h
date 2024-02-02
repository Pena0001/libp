#ifndef LIBP_H
# define LIBP_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}	t_list;

int	_nbrlen(int n);
int	_min(int a, int b);
int	_max(int a, int b);

/* Math functions */
int	_abs(int n);
int	_atoi(const char *s);

/* Is functions */
int	_isalpha(int c);
int	_isdigit(int c);
int	_isalnum(int c);
int	_isascii(int c);
int	_isprint(int c);
int	_isspace(char c);

/* To functions */
int	_toupper(int c);
int	_tolower(int c);
int	_swapcase(int c);

/* Str functions */
char	*_itoa(int n);
char	*_strnew(size_t size);
void	_strdel(char **as);
size_t	_strlen(const char *s);
size_t	_strnlen(const char *s, size_t len);
char	*_strdup(const char *s);
char	*_strcpy(char *dest, const char *str);
char	*_strncpy(char *dest, const char *str, size_t n);
char	*_strcat(char *dest, const char *src);
char	*_strncat(char *dest, const char *src, size_t n);
size_t	_strlcat(char *dest, const char *src, size_t n);
char	*_strchr(const char *str, int c);
char	*_strrchr(const char *str, int c);
char	*_strstr(const char *haystack, const char *needle);
char	*_strnstr(const char *haystack, const char *needle, size_t n);
int	_strcmp(const char *s1, const char *s2);
int	_strncmp(const char *s1, const char *s2, size_t n);
void	_strclr(char *s);
void	_striter(char *s, void (*f)(char *));
void	_striteri(char *s, void (*f)(unsigned int, char *));
char	*_strmap(char const *s, char (*f)(char));
char	*_strmapi(char const *s, char (*f)(unsigned int, char));
int	_strequ(char const *s1, char const *s2);
int	_strnequ(char const *s1, char const *s2, size_t n);
char	*_strsub(char const *s, unsigned int start, size_t len);
char	*_strjoin(char const *s1, char const *s2);
char	*_strtrim(char const *s);
char	**_strsplit(char const *s, char c);

/* Str delimited functions */
size_t	_strdlen(const char *s, char c);
char	*_strddup(const char *s, char c);
char	*_strdsub(const char *s, char c);

/* Mem functions */
void	_bzero(void *s, size_t n);
void	*_calloc(size_t num, size_t size);
void	*_memalloc(size_t size);
void	*_memset(void *s, int c, size_t n);
void	*_memcpy(void *dest, const void *str, size_t n);
void	*_memccpy(void *dest, const void *src, int c, size_t n);
void	*_memmove(void *dest, const void *str, size_t n);
void	*_memchr(const void *str, int c, size_t n);
void	_memdel(void **ap);
int	_memcmp(const void *str1, const void *str2, size_t n);

/* Put functions */
void	_putchar(char c);
void	_putstr(char const *s);
void	_putendl(char const *s);
void	_putnbr(int n);
void	_putchar_fd(char c, int fd);
void	_putstr_fd(char const *s, int fd);
void	_putendl_fd(char const *s, int fd);
void	_putnbr_fd(int n, int fd);

/* List functions */
t_list	*lstnew(void const *content, size_t content_size);
void	lstdelone(t_list **alst, void (*del)(void *, size_t));
void	lstdel(t_list **alst, void (*del)(void *, size_t));
void	lstadd(t_list **alst, t_list *new);
void	lstadd_front(t_list **alst, t_list *new);
void	lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif

