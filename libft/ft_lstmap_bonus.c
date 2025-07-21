/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:07:36 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/21 15:20:28 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;
	int		tmp;

	head = 0;
	while (lst)
	{
		tmp = f(lst->content);
		temp = ft_lstnew(tmp);
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}
