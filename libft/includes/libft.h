/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 13:05:15 by fanno             #+#    #+#             */
/*   Updated: 2016/11/08 14:02:40 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <wchar.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# include "libft.h"

# define BUFF_SIZE 9999

typedef union			u_type
{
	unsigned char		hh;
	unsigned short		uh;
	short				h;
	int					d;
	long				ld;
	long long			lld;
	unsigned int		x;
	char				*s;
	char				c;
	wchar_t				wc;
	wchar_t				*ws;
	unsigned int		o;
	unsigned long int	lo;
	unsigned long long	llu;
	void				*p;
	size_t				z;
	intmax_t			im;
	uintmax_t			uim;
}						t_type;

typedef struct			s_mask
{
	unsigned int		m0;
	unsigned int		m1;
	unsigned int		m2;
	unsigned int		m3;
	unsigned char		c0;
	unsigned char		c1;
	unsigned char		c2;
	unsigned char		c3;
	signed int			binlen;
	int					res;
	unsigned int		v;
	unsigned char		octet;
}						t_mask;

typedef struct			s_form
{
	int					prec;
	int					width;
	char				left;
	char				zero;
	char				space;
	char				plus;
	char				force;
	char				percent;
	char				type;
	char				bigsmall;
	int					nega;
}						t_form;

typedef struct			s_data
{
	int					i;
	int					ib;
	int					retplusreal;
	int					nargs;
	char				type;
	char				*string;
	char				ospace;
	int					neg;
	int					bck;
	int					tmp;
}						t_data;

typedef struct			s_static
{
	int					i;
	char				buf[BUFF_SIZE + 1];
}						t_static;

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *dst, const void *src,
									int c, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
size_t					ft_strlen(const char *s);
char					*ft_strdup(const char *s1);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t n);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *s1, const char *s2);
char					*ft_strnstr(const char *s1, const char *s2, size_t n);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_atoi(const char *str);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_toupper(int c);
int						ft_tolower(int c);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s, char
									(*f)(unsigned int, char));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strsub(char const *s, unsigned int start,
									size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);
char					*ft_itoa(int n);
void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putendl(char const *s);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);

t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **alst, void
									(*del)(void *, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_lstnew_wom(void *content, size_t content_size);
char					*ft_mallocncopy(const char *str, size_t size);
int						ft_cut_str(char **str, char c);
void					ft_lstpush(t_list **alst, t_list *new);
void					ft_strpush(char **str, char c);
int						ft_lstcount(t_list *lst);
void					ft_lstprint(t_list *lst);
t_list					*ft_lststrsplit(char *str, char c);
void					ft_pushlstnb(t_list **lst, int nb);
char					*ft_itoa_base(int n, int base);

int						get_next_line(const int fd, char **line);

int						ft_printf(const char *restrict format, ...);
int						do_va(va_list *now, t_data *d, t_type *var, t_form *i);
int						read_until(const char *restrict f, char *r, t_data *d);
int						reinit_form(t_form **form);
int						init_data(t_data **d);
int						modify_f(t_form *c, const char *restrict f, t_data *d);
int						isnum(char c);
int						isvalid(char c);
int						iscon(char c);
int						binlen(int n);
int						check_prec(const char *restrict format);
char					*itoabase(long long n, int base, char caps);
char					*itoabaseu(uintmax_t n, int base, char caps);
char					*itoabasex(t_form *info, size_t n, int base, char caps);
char					*itoabaseo(t_form *info, size_t n, int base);
char					*itoabasep(t_form *info, size_t n, int base, char caps);
int						print_str(t_form *info, t_data *d, int ret);
int						print_wstr(t_form *info, int ret, wchar_t *str);
int						print_long(t_form *info, t_data *d, int ret);
int						print_unsigned(t_form *i, t_data *d, int ret);
int						print_char(t_form *info, t_data *d, int ret);
int						print_short(t_form *info, t_data *d, int ret);
int						print_nocon(t_form *info, int ret);
int						han_int(va_list *now, t_data *d, t_type *v, t_form *i);
void					han_int2(va_list *now, t_data *d, t_type *v, t_form *i);
int						han_oct(va_list *now, t_data *d, t_type *v, t_form *i);
void					han_oct2(va_list *now, t_data *d, t_type *v, t_form *i);
int						han_hex(va_list *now, t_data *d, t_type *v, t_form *i);
void					han_hex2(va_list *now, t_data *d, t_type *v, t_form *i);
int						han_nsg(va_list *now, t_data *d, t_type *v, t_form *i);
void					han_nsg2(va_list *now, t_data *d, t_type *v, t_form *i);
void					decide_force(t_form *info, t_data *d);
void					decide_force_left(t_form *info, t_data *d);
int						do_binlen7(t_mask n, t_form *i, int *ret, wchar_t *str);
int						do_binlen11(t_mask n, t_form *i, int *ret);
int						do_binlen16(t_mask n, t_form *i, int *ret);
int						do_others(t_mask n, t_form *i, int *ret);
void					forceretcaps(char *str, int caps);
int						test_chr(t_mask n, t_form *i, int *ret, wchar_t *str);
int						ft_det_zeroes(int len, t_form *info, int sign);
int						ft_det_zeroes_ptr(int len, t_form *info, int sign);
int						ft_putcharstr(char c, char **into, t_form *info);
int						ft_putwidechar(wchar_t *chr);
int						ft_putwidestr(wchar_t *chr, t_form *i);
int						get_wstrlen(wchar_t *chr, t_form *i);
char					*ft_putstrstr(char *input, t_form *info);
int						get_wstrlen(wchar_t *str, t_form *i);
int						ft_atoi(const char *str);
char					*ft_strcpy(char *src, const char *dst);
char					*ft_strncpy(char *src, const char *dst, size_t n);
void					ft_putstr(char const *s);
void					ft_putnbr(int n);
void					ft_putchar(char c);
void					*ft_memset(void *b, int c, size_t n);
size_t					ft_strlen(const char *str);

#endif
