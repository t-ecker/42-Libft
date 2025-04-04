/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:32:41 by tecker            #+#    #+#             */
/*   Updated: 2025/03/30 16:56:35 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// checks if c is a digit

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//     char c = '1';
//     printf("%d\n", ft_isdigit(c));
//     printf("%d\n", isdigit(c));
//     return (0);
// }