/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 06:17:04 by marvin            #+#    #+#             */
/*   Updated: 2025/07/23 06:17:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void        ft_putchar(char c) 
{
    write(1, &c, 1);
}

void        ft_putstr(char *str)
{
    while (*str) {
        ft_putchar(*str);
        str++;
    }
    ft_putchar('\n');
}
