/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 18:11:36 by tnghondz          #+#    #+#             */
/*   Updated: 2018/06/02 19:03:31 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_strlen(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	tmp_n;

	tmp_n = n;
	len = get_strlen(n);
	if (n < 0)
	{
		tmp_n = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = tmp_n % 10 + '0';
	while (tmp_n /= 10)
		str[--len] = tmp_n % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
