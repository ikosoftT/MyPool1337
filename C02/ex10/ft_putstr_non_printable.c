/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 06:58:09 by marvin            #+#    #+#             */
/*   Updated: 2025/07/25 06:58:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";
    ft_putchar('\\');
    ft_putchar(hex[c / 16]); 
    ft_putchar(hex[c % 16]);
}

void    ft_putstr_non_printable(char *str)
{
    int             i;
    unsigned char   c;

    i = 0;
    while ((c = (unsigned char)str[i]))
    {
        if (c < 32 || c >= 127)
            ft_print_hex(c);
        else
            ft_putchar(c);
        i++;
    }
}
