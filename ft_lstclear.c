/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:21:28 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 19:38:39 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst2;
	t_list	*next;

	lst2 = *lst;
	if (lst2)
	{
		while (lst2)
		{
			next = lst2->next;
			del(lst2->content);
			free(lst2);
			lst2 = next;
		}
		*lst = NULL;
	}
}
