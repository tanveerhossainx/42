/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:54:11 by thossain          #+#    #+#             */
/*   Updated: 2023/12/07 19:27:30 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Standard C Libraries
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
// Protoypes
void    ft_print_char(char c);
int	ft_print_str(char *str);

#endif