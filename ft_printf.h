#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int				ft_printf(const char *format, ...);
int				ft_putstr(char *s);
int				ft_put_unsigned_int(unsigned int n);
int				ft_putchar(int c);
int				ft_puthex(unsigned long n, char format);
int				ft_putnbr(int n);
unsigned long	ft_putaddress(void *p);

#endif
