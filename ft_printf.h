/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:07:50 by luguilla          #+#    #+#             */
/*   Updated: 2022/01/06 12:10:24 by luguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

# define HEX "0123456789abcdef"
# define CHEX "0123456789ABCDEF"

int			ft_printf(const char *input, ...);
int			isflag(char c);
int			ft_putstr(char *str);
int			ft_putchar(int c);
void		ft_putnbr(int nb);
int			ft_get_flags(char flag, va_list args);
int			nbrlen(int j);
char		*ft_itoa(unsigned long long n);
char		*ft_strrev(char *str);
int			ft_strlen(char *str);
int			ft_putuint(unsigned int nbr);
void		ft_hexa(uintptr_t num);
int			ft_putptr(unsigned long long ptr);
int			ft_ptr_len(uintptr_t num);
void		ft_puthex(unsigned int num, const char format);
int			ft_print_hex(unsigned int num, const char format);
int			ft_hex_len(unsigned int num);

#endif
