/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:48:40 by marvin            #+#    #+#             */
/*   Updated: 2025/07/24 19:48:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char        *ft_str_is_uppercase(char *str)
{
    while (*str) 
    {
        if (!(*str >= 'A' && *str <= 'Z'))
            return (0);
    }
    return (1);
}
