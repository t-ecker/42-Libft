/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:33:50 by tecker            #+#    #+#             */
/*   Updated: 2024/03/11 15:47:00 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int	len(const char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
			len++;
		i++;
	}
	return (len);
}

int	num_splits(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	*ft_free(int a1, char **str)
{
	while (a1 > 0)
	{
		free(str[a1 - 1]);
		a1--;
	}
	free(str);
	return (NULL);
}

static void	*split2(int a1, const char *s, char c, char **str)
{
	int	j;
	int	a2;

	j = 0;
	while (s[j] == c)
		j++;
	while (a1 < num_splits(s, c))
	{
		a2 = 0;
		while (s[j] == c)
			j++;
		str[a1] = malloc(sizeof(char) * (len(s + j, c) + 1));
		if (str[a1] == NULL)
			return (ft_free(a1, str));
		while (s[j] != c && s[j])
		{
			str[a1][a2] = s[j];
			a2++;
			j++;
		}
		str[a1][a2] = 0;
		a1++;
	}
	str[num_splits(s, c)] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		a1;
	int		a2;
	int		j;

	a1 = 0;
	a2 = 0;
	j = 0;
	str = malloc(sizeof(char *) * (num_splits(s, c) + 1));
	if (str == NULL)
		return (NULL);
	return (split2(a1, s, c, str));
}

// #include <stdio.h>
// int main(void)
// {
//     char d = '!';
//     char str[] = "!!Hallo!!Welt!#!asd";
//     printf("%i\n", len(str, d));
//     printf("%i\n", num_splits(str, d));
//     int i = 0;
//     char **result = ft_split(str, d);
//     while (i < num_splits(str, d))
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }
//     free(result);
//     return (0);
// }