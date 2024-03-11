/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:34:18 by tecker            #+#    #+#             */
/*   Updated: 2024/03/10 15:49:21 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t destsize)
{
	int	j;
	int	dlen;
	int	slen;
	int	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	while (src[i] && j < (int)destsize - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (dlen >= destsize)
		dlen = destsize;
	return (dlen + slen);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char dest1[5] = "aaaa";
//     char dest2[5] = "aaaa";
// 	int c = 0;

//     char *src = "be";
//     printf("%zu\n", ft_strlcat(dest1, src, c));
//     printf("%lu\n", strlcat(dest2, src, c));
//     printf("%s\n", dest1);
//     printf("%s\n", dest2);

// }