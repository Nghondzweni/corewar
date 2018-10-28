#include "libft.h"

void    ft_printbits_fd(unsigned char octet, int fd)
{
    int     div;

    div = 128;
    while(div != 1)
    {
        if(octet / div == 1)
            write(fd, "1", 1);
        else
            write(fd, "0", 1);
        octet = octet % div;
        div = div / 2;
    }
    if(octet == 1)
        write(fd, "1", 1);
    else
        write(fd, "0", 1);
}