/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:31:30 by marvin            #+#    #+#             */
/*   Updated: 2025/07/24 19:31:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char        *ft_strncpy(char *dest,char *src,unsigned int n) 
{
    unsigned int i = 0;
    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
