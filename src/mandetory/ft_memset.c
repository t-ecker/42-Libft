/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:33:25 by tecker            #+#    #+#             */
/*   Updated: 2025/03/30 16:51:14 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// writes len bytes of value c to the string str

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str1[30];
//     char str2[30];

//     ft_memset(str1, 'A', 3);
//     printf("%s\n", str1);

//     memset(str2, 'A', 3);
//     printf("%s\n", str2);
//     return (0);
// }