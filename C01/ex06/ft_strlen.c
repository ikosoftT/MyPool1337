/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 06:22:46 by marvin            #+#    #+#             */
/*   Updated: 2025/07/23 06:22:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int         ft_strlen(char * str) 
{
    int     i;
    
    i = 0;
    while (str[i]){
        i++;
    } 
    return i;
}
