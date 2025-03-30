/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:34:06 by tecker            #+#    #+#             */
/*   Updated: 2025/03/30 17:09:12 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// uses function f on each character of s


// void ft_toupperr(unsigned int i, char *c)
// {
//     int b;

//     b = 0;

//     while (b < ft_strlen(c))
//     {
//         if (c[b] >= 'a' && c[b] <= 'z')
//         c[b] -= 32;
//         b++;
//     }    
// }


void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
//     char str[] = "asda";
//     ft_striteri(str, ft_toupperr);
//     printf("%s\n", str);
// }