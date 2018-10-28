#include "../includes/asm.h"

int     compare(char *line)
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