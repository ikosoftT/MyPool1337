/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:37:24 by marvin            #+#    #+#             */
/*   Updated: 2025/07/24 19:37:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int         ft_str_is_numeric(char *str) {

    while (*str) {
        if (!(*str >= '0' && *str <= '9'))
            return (0);
            str++;
    }
    return (1);
}
