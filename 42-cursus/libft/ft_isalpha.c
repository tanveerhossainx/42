/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:30:32 by thossain          #+#    #+#             */
/*   Updated: 2023/10/30 17:00:16 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * #include <stdio.h>
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("%d", ft_isalpha(c));
	return (0);
}
*/
