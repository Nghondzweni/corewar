/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 02:46:49 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/31 03:14:52 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	div;
	char	c;
	long	temp_n;

	temp_n = (long)n;
	div = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		temp_n *= -1;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	while (div <= temp_n)
		div *= 10;
	div /= 10;
	while (div != 0)
	{
		c = (temp_n / div) + 48;
		ft_putchar_fd(c, fd);
		temp_n %= div;
		div /= 10;
	}
}
