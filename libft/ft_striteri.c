/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:52:33 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/30 22:05:28 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!str || !f)
		return ;
	while (*str)
	{
		f(i++, str++);
	}
}
