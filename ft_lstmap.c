/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:43:33 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 18:44:31 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*newli;

	(void)(*del);
	if (!lst || !f)
		return (0);
	newli = ft_lstnew(f(lst->content));
	if (!newli)
		return (0);
	lst2 = newli;
	while (lst->next)
	{
		lst = lst->next;
		newli->next = ft_lstnew(f(lst->content));
		if (!newli->next)
			return (0);
		newli = newli->next;
	}
	return (lst2);
}
