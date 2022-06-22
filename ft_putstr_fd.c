/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:23:20 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/09 21:24:51 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
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
}
