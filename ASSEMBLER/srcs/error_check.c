/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:20:30 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/12 14:20:32 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asm.h"

static char *error_msgs[2] = 
{
    "Bad Program. Please use an assembly program \"filename.s\"",
    "Usage: ./asm [filename.s]"
};

int print_error_msg(int error_num)
{
    ft_putstr("Error\n");
    ft_putstr(error_msgs[error_num]);
    return(1);
}

int check_extensions(t_plyrs *progs)
{
    int     i;
    int     len;

    i = 0;
    while(i < (progs->ac))
    {
        len = ft_strlen(progs->file_name[i]);
        if(progs->file_name[i][len - 1] != 's' || progs->file_name[i][len - 2] != '.' || len < 3)
            return(1);
        else
            i++;
    }
    return(0);
}

int check_args(t_plyrs *progs)
{
    if(progs->ac < 1)
        return(1);
    else
        return(0);    
}

int error_check(t_plyrs *progs)
{
    if(check_args(progs))
        return(print_error_msg(1));
    else if(check_extensions(progs))
        return(print_error_msg(0));
    else
        return(0);
}

int	name_check(void)
{
	int flag;
	int len;
	char *line;

	flag = 0;
	len = 0;
	while (get_next_line(0, &line))
	{
		len = ft_strlen(line) - 1;
		if((!ft_strncmp(line, ".name \"", 7)) && flag == 0 && line[len] == '\"')  
			flag++;
		else if((!ft_strncmp(line, ".comment \"", 10)) && flag == 1 && line[len] == '\"')
			flag++;
		if (flag == 2)
		{
			free(line);
			return (0);
		}
	}
	if (flag != 2)
		return (1);
	return (0);
}

/*
int     *compare(char *line)
{
    while (get_next_line(0, line))
    {
        if (ft_strcmp(line, "live") == 0)
            return (1);
        else if (ft_strcmp(line, "ld") == 0)
            return (1);
        else if (ft_strcmp(line, "st") == 0)
            return (1);
        else if (ft_strcmp(line, "add") == 0)
            return (1);
        else if (ft_strcmp(line, "sub") == 0)
            return (1);
        else if (ft_strcmp(line, "and") == 0)
            return (1);
        else if (ft_strcmp(line, "or") == 0)
            return (1);
        else if (ft_strcmp(line, "zjmp") == 0)
            return (1);
        else if (ft_strcmp(line, "ldi") == 0)
            return (1);
        else if (ft_strcmp(line, "sti") == 0)
            return (1);
        else if (ft_strcmp(line, "fork") == 0)
            return (1);
        else if (ft_strcmp(line, "lld") == 0)
            return (1);
        else if (ft_strcmp(line, "lldi") == 0)
            return (1);
        else if (ft_strcmp(line, "lfork") == 0)
            return (1);
        else if (ft_strcmp(line, "aff") == 0)
            return (1);
        else
            return (0);
    }
}
*/