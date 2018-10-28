/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:21:57 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/12 14:22:45 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asm.h"

void    get_p_names(t_plyrs *progs, char **argv)
{
    int     i;
    int     j;

    i = 1;
    j = 0;
    while(i <= progs->ac)
    {
        progs->file_name[j++] = ft_strdup(argv[i++]);
    }
}

static int get_lines(t_plyrs *progs)
{
    char *line;
    int     i = 0;
    int     fd;
        fd = open(progs->file_name[0], O_RDONLY);
    while(get_next_line(fd, &line))
        i++;
    return(i);
    close(fd);
}

void    get_file_content(t_content *content, t_plyrs *progs)
{
    int     fd;
    int     lines;
    int     i;
    char    *line;

    i = 0;
    fd = open(progs->file_name[0], O_RDONLY);
    lines = get_lines(progs);
    content->file_content = (char **) malloc (sizeof(char *) * lines);
    while(i < lines)
    {
        get_next_line(fd, &line);
        content->file_content[i++] = ft_strdup(line);
    }
    close(fd);
}
/*
char *find_name(t_content *content, char **file)
{
    int i;
    int len;
    char *str;
    
    i = 0;
    while(file[i])
    {
        if(ft_strncmp(".name", file[i], 5))
            i++;
        else
            break;
            str = strchr(str, '\"');
            str++;
            len = ft_strlen(str);   
    }
    return(file[i]);
}
*/
void    find_comment(t_header *header, char **file)
{
    int i;
    int len;
    int j = 0;
    
    i = 0;
    while(file[i])
    {
        ft_putstr(file[i]);
        if(ft_strncmp(".comment", file[i], 8))
            i++;
        else
        {
            file[i] = (strchr(file[i], '\"') + 1);
            len = (ft_strlen(file[i]) - 1);
            ft_putchar('\n');
            ft_putstr(file[i]);
            while(j < len)
            {
                header->comment[j] = file[i][j];
                j++;
            }
            break;
        }
    }
}

