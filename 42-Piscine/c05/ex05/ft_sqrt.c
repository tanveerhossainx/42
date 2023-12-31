/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:41:07 by thossain          #+#    #+#             */
/*   Updated: 2023/03/22 14:18:31 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;
	int	int_overflow;

	i = 1;
	int_overflow = 46340;
	while ((i * i) <= nb && i <= int_overflow)
	{
		if ((i * i) == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
