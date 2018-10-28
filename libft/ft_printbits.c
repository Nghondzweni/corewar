#include "libft.h"

void    ft_printbits(unsigned char octet)
{
    int     div;

    div = 128;
    while(div != 1)
    {
        if(octet / div == 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        octet = octet % div;
        div = div / 2;
    }
    if(octet == 1)
        write(1, "1", 1);
    else
        write(1, "0", 1);
}