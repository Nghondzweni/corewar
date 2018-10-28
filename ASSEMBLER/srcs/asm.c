/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:49:10 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/12 14:49:13 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asm.h"

static t_plyrs *init_t_plyrs(int argc)
{
    t_plyrs *progs;

    progs = (t_plyrs *) malloc(sizeof(t_plyrs));
    progs->file_name = (char **) malloc(sizeof(char *) * argc - 1);
    progs->ac = argc - 1;
    return(progs);
}

static void init_content(t_content *content)
{
    content->output_fd = open("coffee.cor", O_CREAT | O_RDWR | O_TRUNC, 0644);
}

t_header   *init_header()
{
    t_header    *header;

    header = (t_header *) malloc(sizeof(t_header));
    ft_bzero(header->prog_name, sizeof(header->prog_name));
    ft_bzero(header->comment, COMMENT_LENGTH + 1);
    header->magic = COREWAR_EXEC_MAGIC;
    return(header);
}

int main(int argc, char **argv)
{   
    t_plyrs *progs;
    t_content *content;
    t_header    *header;
    int     i;
    // char *line;
    
    i = 0;
    header = init_header();
    progs = init_t_plyrs(argc);
    content = (t_content *) malloc(sizeof(t_content));
    init_content(content);
    get_p_names(progs, argv);
    if(error_check(progs))
        return(0); 
    // else
    //     ft_putstr("No Errors\n\n");
    get_file_content(content, progs);
    find_comment(header, content->file_content);
    write(content->output_fd, (char *)&header->magic, 4);
    write(content->output_fd, &header->comment, COMMENT_LENGTH + 1);
    // ft_putstr_fd(header->comment, content->output_fd);
    // ft_putstr_fd(header->comment, content->output_fd);
    // str_to_binary(content->output_fd, find_name(content->file_content));
    // str_to_binary(content->output_fd, find_comment(content->file_content));
    // ft_print_hex_fd(content->output_fd, find_name(content->file_content));
    // ft_print_hex_fd(content->output_fd, find_comment(content->file_content));
    // ft_putstr_fd(ft_itoa_base(123, 16), content->output_fd);
    // name_check();
}