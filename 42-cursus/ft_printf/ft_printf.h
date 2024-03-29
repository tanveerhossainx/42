/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:54:11 by thossain          #+#    #+#             */
/*   Updated: 2024/01/18 18:53:44 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
// Standard C Libraries
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
// Protoypes
int			ft_printf(const char *string, ...);
void		ft_putcharacter_length(char character, int *length);
void		ft_hexadecimal(unsigned int x, int *length, char x_or_x);
void		ft_print_number(int number, int *length);
void		ft_pointer(unsigned long pointer, int *length);
void		ft_string(char *args, int *length);
void		ft_unsigned_int(unsigned int u, int *length);
#endif
