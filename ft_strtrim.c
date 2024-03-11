/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:34:59 by tecker            #+#    #+#             */
/*   Updated: 2024/03/11 14:39:14 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	end(char const *s1, char const *set)
// {
// 	int	end;
// 	int	i;

// 	end = ft_strlen(s1) - 1;
// 	i = 0;
// 	while (end > 0 && set[i])
// 	{
// 		if (s1[end] == set[i])
// 		{
// 			end--;
// 			i = 0;
// 		}
// 		else
// 			i++;
// 	}
// 	return (end);
// }

// static int	fstart(char const *s1, char const *set)
// {
// 	int	start;
// 	int	i;

// 	start = 0;
// 	i = 0;
// 	while (s1[start] && set[i])
// 	{
// 		if (s1[start] == set[i])
// 		{
// 			start++;
// 			i = 0;
// 		}
// 		else
// 			i++;
// 	}
// 	return (start);
// }
static int	ft_strwrite(int start, int end, char *ptr, char *s1)
{
	int	i;

	i = 0;
	while (start < end + 1)
	{
		ptr[i] = s1[start];
		start++;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;
	int		i;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	ptr = malloc((end + 1 - start + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = ft_strwrite(start, end, ptr, s1);
	ptr[i] = '\0';
	return (ptr);
}
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*ptr;
// 	int		start;
// 	int		i;

// 	if (!s1 || !set)
// 		return (NULL);
// 	if (s1[0] == '\0')
// 		return (ft_strdup(""));
// 	start = fstart(s1, set);
// 	i = 0;
// 	ptr = malloc(((end(s1, set) - fstart(s1, set)) + 1) * sizeof(char));
// 	if (ptr == NULL)
// 		return (NULL);
// 	while (i <= (end(s1, set) - fstart(s1, set)))
// 	{
// 		ptr[i] = s1[start];
// 		i++;
// 		start++;
// 	}
// 	ptr[i] = '\0';
// 	return (ptr);
// }
// #include <stdio.h>
// int main(void)
// {
//     char str[] = "!?HALLO?!";
//     printf("%s\n", ft_strtrim(str, "!?"));
// }