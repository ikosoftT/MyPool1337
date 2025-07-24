/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 06:35:13 by marvin            #+#    #+#             */
/*   Updated: 2025/07/23 06:35:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void        ft_sort_int_tab(int*tab,int size)
{
    int     a;
    int     b;
    a = 0;
    while (a < size) {
        b = a + 1;
        while (b < size ) {
            if (tab[a] > tab[b]) {
                int t = tab[a];
                tab[a] = tab[b];
                tab[b] = t;
            }
            b++;
            }
            a++;
    }
}

// testing 
int main () {
    int tab[] = {14, 54, 87, 6, 1, 3, 40, 5};
    ft_sort_int_tab(tab, 8);
    for (int i = 0; i < 8; i++)
        printf("%d ", tab[i]);// 1,3,5,6,14,40,54,87
}