/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:20:13 by hsalah            #+#    #+#             */
/*   Updated: 2023/09/09 19:06:52 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include <unistd.h>

void    rush(int x, int y)
{
    int i;
    int j;
    int n;
    int s;
    ft_putchar('A');
        while (i <= x-2 )
        {
            ft_putchar('B');
            i++;
        } 
            ft_putchar('C');
                write(1, "\n", 1);
     
                while(j <= y-2)
                {
                     {   
                        ft_putchar('B');
                        while (s <= x-2 )
                        {
                            ft_putchar(' ');
                            s++;
                        } 
                             ft_putchar('B');
                     }
                             write(1, "\n", 1);
                    
                    j++;
                    
                }
                    ft_putchar('A');
                    while (n <= x-2 )
                    {
                        ft_putchar('B');
                        n++;
                    } 
    ft_putchar('C');
                    
}