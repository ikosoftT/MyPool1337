/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:31:51 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 09:31:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar (char c) {
    write(1, &c, 1);
}
void        ft_is_negative(int n) {
    if (n>=0)
        ft_putchar('P');
    else
        ft_putchar('N');
}

