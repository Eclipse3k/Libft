#ifndef LIBFT_H	
int		ft_isalpha(int c);
#define LIBFT_H

int		ft_isdigit(int c);
int		isalnum(int c);
int 	isascii(int c);
int		isprint(int c);
int		strlen(const char *str);
void	*memset(void *str, int c, int n);
void	bzero(void *s, int n);
void	*memcpy(void *dest, const void *src, int n);
void	*memmove(void *str1, const void *str2, int n);
int		strlcpy(char *dst, const char *src, int size);
int		strlcat(char *destination, const char *source, int size);
int		toupper(int c);
int		tolower(int c);
char	*strchr(const char *str, int c);
char	*strrchr(const char *str, int c);
int		strncmp(const char *str1, const char *str2, int n);
void	*memchr(const void *str, int c, int n);
int		memcmp(const void *str1, const void *str2, int n);
char 	strnstr (const char *big, const char *little, int len);
int		atoi(const char *str);
void	*calloc(int nitems, int size);
char	*strdup( const char *str1 );

#endif