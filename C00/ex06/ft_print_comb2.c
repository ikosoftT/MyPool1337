/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:52:20 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 09:52:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c) {
    write(1, &c, 1);
}
void        ft_convert(int n) {
    char    a;
    char    b;
    if (n < 10) {
        ft_putchar('0');
        ft_putchar(7 + 48);
    } else {
        a = (n / 10) + 48;
        b = (n % 10) + 48;
        ft_putchar(a);
        ft_putchar(b);
    }

}
void        ft_print_comb2(void) {
    int     a;
    int     b;
    a = 0;
    while ( a < 99) {
        b = a + 1;
        while (b < 100) {
            ft_convert(a);
            ft_putchar(' ');
            ft_convert(b);
            if (!(a == 98 && b == 99 )) {
                ft_putchar(',');
                ft_putchar(' ');
            }
            b++;
        }
        a++;
    }
}
