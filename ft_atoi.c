/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:00:26 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/16 18:30:08 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	b = 1;
	c = 0;
	while (str[a] == '\n' || str[a] == '\t' || str[a] == '\v'
		|| str[a] == '\f' || str[a] == '\r' || str[a] == ' ')
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
		c = (c * 10) + (str[a++] - 48);
	return (c * b);
}
