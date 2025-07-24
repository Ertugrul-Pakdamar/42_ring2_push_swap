/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:03:42 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/24 09:25:20 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

void	ft_swap_stack(t_list **stack)
{
	t_list	*temp;

	if (!stack)
		return ;
	temp = *stack;
	*stack = temp->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}

void	ft_push_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (!stack_a)
		return ;
	ft_lstadd_back(stack_b, ft_lstnew((*stack_a)->content));
	temp = (*stack_a);
	*stack_a = (*stack_a)->next;
	ft_lstdelone(temp, free);
}

void	ft_rotate_stack(t_list **stack)
{
	t_list	*temp;

	if (!stack)
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = NULL;
	ft_lstlast(*stack)->next = temp;
}

void	ft_reverse_rotate_stack(t_list **stack)
{
	t_list	*temp;
	t_list	*temp1;

	if (!stack)
		return ;
	temp = *stack;
	while (temp->next->next)
		temp = temp->next;
	temp1 = ft_lstlast(*stack);
	temp->next = NULL;
	temp1->next = *stack;
	*stack = temp1;
}
