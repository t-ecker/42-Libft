/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:34:18 by tecker            #+#    #+#             */
/*   Updated: 2025/03/30 17:14:37 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// adds characters from src to dest, until there is no space left
// returns length of concatenated string

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	j;
	size_t	dlen;
	size_t	i;

	dlen = 0;
	i = 0;
	j = 0;
	while (dest[dlen] && dlen < destsize)
		dlen++;
	j = dlen;
	if (dlen < destsize)
	{
		while (src[i] && j < destsize - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	return (dlen + ft_strlen(src));
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char dest1[30] = "aaaa";
//     char dest2[30] = "aaaa";
// 	int c = 0;

//     char * src = (char *)"AAAAAAAAA";
//     printf("%zu\n", ft_strlcat(dest1, src, c));
//     printf("%lu\n", strlcat(dest2, src, c));
//     printf("%s\n", dest1);
//     printf("%s\n", dest2);

// }