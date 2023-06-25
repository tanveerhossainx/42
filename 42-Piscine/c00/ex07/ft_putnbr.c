/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:29:35 by thossain          #+#    #+#             */
/*   Updated: 2023/03/08 14:54:04 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

int	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar();
	}
	else
		ft_putchar();
}