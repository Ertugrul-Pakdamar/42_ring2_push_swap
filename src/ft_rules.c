/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:03:42 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/28 15:38:59 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

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

static t_list	*ft_copy_node(t_list *node)
{
	t_list	*new;

	if (!node)
		return (NULL);
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = node->content;
	new->id = node->id;
	if (node->bit)
		new->bit = ft_strdup(node->bit);
	else
		new->bit = NULL;
	new->next = NULL;
	return (new);
}

void	ft_push_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (!stack_a || !*stack_a)
		return ;
	ft_lstadd_front(stack_b, ft_copy_node(*stack_a));
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstdelone(temp, free);
}

void	ft_rotate_stack(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	ft_reverse_rotate_stack(t_list **stack)
{
	t_list	*prev;
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}
