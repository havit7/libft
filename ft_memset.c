/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:57:35 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 19:31:44 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	a;

	a = 0;
	while (a < len)
		((unsigned char *)b)[a++] = (unsigned char )c;
	return (b);
}
