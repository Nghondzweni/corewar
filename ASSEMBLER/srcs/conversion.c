/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 09:52:56 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/23 09:52:58 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asm.h"

void    str_to_binary(int fd, char *str)
{
    // int bin;
    int len;

    // bin = 0;

    str = strchr(str, '\"');
    str++;
    len = ft_strlen(str);
    while(len >= 2)
    {
        ft_printbits_fd(*str, fd);
        ft_putchar_fd(' ', fd);
        len--;
        str++;
    }
    /*while(len >= 1)
    {
       bin = (int)str[len - 2];
       ft_putnbr(bin);
       while(bin)
       {
           bin % 2 ? ft_putchar_fd('1', fd) : ft_putchar_fd('0', fd);
           bin /= 2;
       }
       ft_putchar_fd(' ', fd);
       len--;
    }
    */
}

void    ft_print_hex_fd(int fd, char *str)
{
    int len;

    str = strchr(str, '\"');
    str++;
    len = ft_strlen(str);
    while(len >= 2)
    {
        ft_putstr_fd(ft_itoa_base(*str, 16), fd);
        ft_putchar_fd(' ', fd);
        len--;
        str++;
    }
}