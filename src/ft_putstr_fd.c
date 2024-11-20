/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:33:46 by tecker            #+#    #+#             */
/*   Updated: 2024/11/20 00:40:29 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
// #include <fcntl.h>
// #include <stdio.h>
// int main(void)
// {
//     int fd;
//     char str[] = "Hallo";
//     fd = open("text.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     ft_putstr_fd(str, fd);
//     close (fd);
//     return (0);
// }