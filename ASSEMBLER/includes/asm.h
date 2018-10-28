/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:35:38 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/12 14:35:40 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
# define ASM_H

#include "../../includes/op.h"

typedef struct  s_file_name
{
    char    **file_name;
    int     ac;
}               t_plyrs;

typedef struct  s_content
{
    char    **file_content;
    int     output_fd;

}                t_content;



/*
typedef struct  s_prog
{
    char    *prog_name;
    char	*comment;
    t_op    *instruct;
    t_prog  *next;
}               t_prog;
*/

/*
 ** Error Check
 */

int     print_error_msg(int error_num);
int     check_extensions(t_plyrs *progs);
int     error_check(t_plyrs *progs);
int     name_check(void);
int     compare(char *line);
void    get_file_content(t_content *content, t_plyrs *progs);
void    create_cor_file(t_content *content, t_plyrs *progs);
void    str_to_binary(int fd, char *str);
// char    *find_name(t_content *content, char **file);
void    find_comment(t_header *header, char **file);
void    ft_print_hex_fd(int fd, char *str);


/*
 ** Reading
 */

void    get_p_names(t_plyrs *progs, char **argv);
// int     *compare(char *line);
#endif