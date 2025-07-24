/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 08:35:31 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 08:35:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar (char c) {
    write(1, &c, 1);
}

void        ft_print_alphabet(void) {
    char c;
    c = 'a';
    
    while (c >= 'a' && c <= 'z') {
        ft_putchar(c);
        c++;
    }
}

