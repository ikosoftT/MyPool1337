/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 08:47:16 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 08:47:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c) 
{
    write(1, &c, 1);
}

void        ft_print_reverse_alphabet(void) 
{
    char        c;
    c = 'z';
    while (c >= 'a') {
        ft_putchar(c);
        c--;
    }
}
