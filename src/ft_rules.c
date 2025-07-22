/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:03:42 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/22 09:23:23 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_stack(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	*stack = temp->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}

void	ft_push_stack(t_list **stack)
{
	(void)stack;
}

void	ft_rotate_stack(t_list **stack)
{
	(void)stack;
}

void	ft_reverse_rotate_stack(t_list **stack)
{
	(void)stack;
}
