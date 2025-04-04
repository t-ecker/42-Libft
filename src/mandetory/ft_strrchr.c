/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:34:53 by tecker            #+#    #+#             */
/*   Updated: 2025/03/30 17:19:42 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// locates last occurrence of c in src

char	*ft_strrchr(const char *src, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == uc)
		{
			return ((char *)&src[i]);
		}
		i--;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     char src[] = "Halllo";
//     printf("%s\n", ft_strrchr(src, '\0'));
//     printf("%s\n", strrchr(src, '\0'));
// }