/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:27:08 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/28 15:48:45 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_rotate(t_list **stack_a, t_list **stack_b, char const *rule)
{
	if (ft_strncmp(rule, "ra", ft_strlen(rule)) == 0)
		ft_rotate_stack(stack_a);
	if (ft_strncmp(rule, "rb", ft_strlen(rule)) == 0)
		ft_rotate_stack(stack_b);
	if (ft_strncmp(rule, "rr", ft_strlen(rule)) == 0)
	{
		ft_rotate_stack(stack_a);
		ft_rotate_stack(stack_b);
	}
}

static void	ft_push(t_list **stack_a, t_list **stack_b, char const *rule)
{
	if (ft_strncmp(rule, "pa", ft_strlen(rule)) == 0)
		ft_push_stack(stack_b, stack_a);
	if (ft_strncmp(rule, "pb", ft_strlen(rule)) == 0)
		ft_push_stack(stack_a, stack_b);
}

static void	ft_swap(t_list **stack_a, t_list **stack_b, char const *rule)
{
	if (ft_strncmp(rule, "sa", ft_strlen(rule)) == 0)
		ft_swap_stack(stack_a);
	if (ft_strncmp(rule, "sb", ft_strlen(rule)) == 0)
		ft_swap_stack(stack_b);
	if (ft_strncmp(rule, "ss", ft_strlen(rule)) == 0)
	{
		ft_swap_stack(stack_a);
		ft_swap_stack(stack_b);
	}
}

static void	ft_reverse(t_list **stack_a, t_list **stack_b, char const *rule)
{
	if (ft_strncmp(rule, "rra", ft_strlen(rule)) == 0)
		ft_reverse_rotate_stack(stack_a);
	if (ft_strncmp(rule, "rrb", ft_strlen(rule)) == 0)
		ft_reverse_rotate_stack(stack_b);
	if (ft_strncmp(rule, "rrr", ft_strlen(rule)) == 0)
	{
		ft_reverse_rotate_stack(stack_a);
		ft_reverse_rotate_stack(stack_b);
	}
}

void	ft_rule_base(t_list **stack_a, t_list **stack_b, char const *rule)
{
	int	len;

	len = ft_strlen(rule);
	if (ft_strncmp(rule, "sa", len) == 0
		|| ft_strncmp(rule, "sb", len) == 0
		|| ft_strncmp(rule, "ss", len) == 0)
		ft_swap(stack_a, stack_b, rule);
	else if (ft_strncmp(rule, "pa", len) == 0
		|| ft_strncmp(rule, "pb", len) == 0)
		ft_push(stack_a, stack_b, rule);
	else if (ft_strncmp(rule, "ra", len) == 0
		|| ft_strncmp(rule, "rb", len) == 0
		|| ft_strncmp(rule, "rr", len) == 0)
		ft_rotate(stack_a, stack_b, rule);
	else if (ft_strncmp(rule, "rra", len) == 0
		|| ft_strncmp(rule, "rrb", len) == 0
		|| ft_strncmp(rule, "rrr", len) == 0)
		ft_reverse(stack_a, stack_b, rule);
	ft_putstr_fd((char *)rule, 1);
	ft_putchar_fd('\n', 1);
}
