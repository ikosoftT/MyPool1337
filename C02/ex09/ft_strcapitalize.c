/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:13:38 by marvin            #+#    #+#             */
/*   Updated: 2025/07/24 21:13:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     is_alpha_numeric(char c)
{
    return (
            (c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9')
        );
}
int     is_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}
int     is_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

char    *ft_str_capitalize(char *str)
{
    int     i;
    int     flag_w;

    flag_w = 1;
    i = 0;
    while (str[i]) {
        if (is_alpha_numeric(str[i])) {
            if (is_lower(str[i]) && flag_w) 
                str[i] -= 32;
             else if (is_upper(str[i]) && !flag_w) 
                str[i] += 32;
            
            flag_w = 0;
        } else {
            flag_w = 1;
        }

        i++;
    }

    return str;
} 
