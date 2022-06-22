/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:20:14 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/16 18:37:39 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)&s[i] == (unsigned char)c)
			return ((void *) &s[i]);
	i++;
	}
	return (0);
}
