/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:06:30 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/24 11:40:26 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_list	*ft_who_is_non_id(t_list *stack)
{
	while (stack)
	{
		if (stack->id == -1)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	ft_number_stack(t_list *stack)
{
	t_list	*temp;
	t_list	*min;
	long	id;

	id = 0;
	while (ft_who_is_non_id(stack))
	{
		temp = stack;
		min = ft_who_is_non_id(stack);
		while (temp)
		{
			if (temp->id == -1 && temp->content <= min->content)
				min = temp;
			temp = temp->next;
		}
		min->id = id;
		id++;
	}
}
