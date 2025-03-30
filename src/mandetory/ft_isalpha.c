/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:32:32 by tecker            #+#    #+#             */
/*   Updated: 2025/03/30 16:34:11 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//     int i = ft_isalpha(64);
//     printf("%d\n", i);
//     printf("%d\n", isalpha(64));
//     return (0);
// }