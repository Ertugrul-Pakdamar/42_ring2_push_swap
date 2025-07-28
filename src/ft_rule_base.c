/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:27:08 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/28 13:07:20 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_rotate(t_list **stack_a, t_list **stack_b, int rule)
{
	if (rule == RA)
		ft_rotate_stack(stack_a);
	if (rule == RB)
		ft_rotate_stack(stack_b);
	if (rule == RR)
	{
		ft_rotate_stack(stack_a);
		ft_rotate_stack(stack_b);
	}
}

static void	ft_push(t_list **stack_a, t_list **stack_b, int rule)
{
	if (rule == PA)
		ft_push_stack(stack_a, stack_b);
	if (rule == PB)
		ft_push_stack(stack_b, stack_a);
}

static void	ft_swap(t_list **stack_a, t_list **stack_b, int rule)
{
	if (rule == SA)
		ft_swap_stack(stack_a);
	if (rule == SB)
		ft_swap_stack(stack_b);
	if (rule == SS)
	{
		ft_swap_stack(stack_a);
		ft_swap_stack(stack_b);
	}
}

static void	ft_reverse(t_list **stack_a, t_list **stack_b, int rule)
{
	if (rule == RRA)
		ft_reverse_rotate_stack(stack_a);
	if (rule == RRB)
		ft_reverse_rotate_stack(stack_b);
	if (rule == RRR)
	{
		ft_reverse_rotate_stack(stack_a);
		ft_reverse_rotate_stack(stack_b);
	}
}

void	ft_rule_base(t_list **stack_a, t_list **stack_b, int rule)
{
	if (rule == SA || rule == SB || rule == SS)
		ft_swap(stack_a, stack_b, rule);
	else if (rule == PA || rule == PB)
		ft_push(stack_a, stack_b, rule);
	else if (rule == RA || rule == RB || rule == RR)
		ft_rotate(stack_a, stack_b, rule);
	else if (rule == RRA || rule == RRB || rule == RRR)
		ft_reverse(stack_a, stack_b, rule);
}
