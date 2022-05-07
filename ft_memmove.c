/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:51:43 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/02 19:29:19 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char *dst2;
	unsigned char *src2;

	if (dst == 0 && src == 0)
		return (0);

	dst2 = (unsigned char *) dst;
	src2 = (unsigned char *) src;
	if (src2 > dst2)
	{
		while (dst2 < ((unsigned char *) dst + len))
			*dst2++ = *src2++;
	}
	else
	{
		dst2 = dst2 + len - 1;
		src2 = src2 + len - 1;
		while (dst2 >= (unsigned char *) dst)
			*dst2-- = *src2--;
	}
	return (dst);
}
