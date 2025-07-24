/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:11:18 by marvin            #+#    #+#             */
/*   Updated: 2025/07/22 13:11:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_print_arr(int n, int*arr) 
{
    int i = 0;
    while (i < n) {
        ft_putchar(arr[i] + 48);
        i++;
    }
    if (arr[0] != (10 - n))    
    {
        ft_putchar(',');
        ft_putchar(' ');
    }    
}
void        ft_generate_Combs(int n, int v,int indx,int *arr)
{
    int     i;
    
    if (indx == n) 
    {
        ft_print_arr(n, arr);
        return;
    }

    while (v < 10) 
    {
        arr[indx] = v;
        ft_generate_Combs(n, v + 1, indx + 1, arr);
        v++;
    }
}

void        ft_print_combn(int n) {
    int arr[10];
    ft_generate_Combs(n, 0, 0, arr);
}
