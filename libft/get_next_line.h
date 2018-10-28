/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 17:14:17 by tnghondz          #+#    #+#             */
/*   Updated: 2018/06/09 14:00:30 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 8

# include <fcntl.h>

int		find_nl(char **save_buff, char **line);
int		get_next_line(int const fd, char **line);
char	*join(char *s1, char *s2);

#endif
