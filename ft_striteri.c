/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:34:06 by tecker            #+#    #+#             */
/*   Updated: 2024/03/10 11:43:51 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
	int	i;

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