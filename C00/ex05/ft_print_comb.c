/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:39:16 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 09:39:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c) {
    write(1, &c, 1);
}
void        ft_print_comb(void) {
    char    a;
    char    b;
    char    c;
    a = '0';
    while (a <= '7') {
        b = a + 1;
        while (b <= '8') {
            c = b + 1;
            while (c <= '9')  {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                if (!(a == '7'&& b== '8' && c == '9')) {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
