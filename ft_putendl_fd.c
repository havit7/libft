/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:22:51 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/09 21:22:53 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	a;

	a = 0;
	if (!s)
		return ;
	while (s[a] != '\0')
	{
		write(fd, &s[a], 1);
		a++;
	}
	write(fd, "\n", 1);
}
