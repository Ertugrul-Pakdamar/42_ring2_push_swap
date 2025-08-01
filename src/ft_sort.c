/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:54:52 by epakdama          #+#    #+#             */
/*   Updated: 2025/08/01 22:23:17 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	sort_three(t_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->id;
	second = (*stack_a)->next->id;
	third = (*stack_a)->next->next->id;
	if (first > second && second < third && first < third)
		ft_rule_base(stack_a, NULL, "sa", 1);
	else if (first > second && second > third)
	{
		ft_rule_base(stack_a, NULL, "sa", 1);
		ft_rule_base(stack_a, NULL, "rra", 1);
	}
	else if (first > second && second < third && first > third)
		ft_rule_base(stack_a, NULL, "ra", 1);
	else if (first < second && second > third && first < third)
	{
		ft_rule_base(stack_a, NULL, "sa", 1);
		ft_rule_base(stack_a, NULL, "ra", 1);
	}
	else if (first < second && second > third && first > third)
		ft_rule_base(stack_a, NULL, "rra", 1);
}

static int	get_min_index(t_list *stack_a)
{
	int		min;
	int		index;
	int		i;
	t_list	*tmp;

	min = stack_a->id;
	index = 0;
	i = 0;
	tmp = stack_a;
	while (tmp)
	{
		if (tmp->id < min)
		{
			min = tmp->id;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}

static void	push_min_to_b(t_list **stack_a, t_list **stack_b)
{
	int	min_index;
	int	len;

	min_index = get_min_index(*stack_a);
	len = ft_lstsize(*stack_a);
	if (min_index <= len / 2)
		while (min_index-- > 0)
			ft_rule_base(stack_a, stack_b, "ra", 1);
	else
		while (min_index++ < len)
			ft_rule_base(stack_a, stack_b, "rra", 1);
	ft_rule_base(stack_a, stack_b, "pb", 1);
}

void	ft_sort_mini(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) > 3)
		push_min_to_b(stack_a, stack_b);
	sort_three(stack_a);
	while (*stack_b)
		ft_rule_base(stack_a, stack_b, "pa", 1);
}

void	ft_sort(t_list **stack_a, t_list **stack_b, int size)
{
	long	i;
	long	j;
	long	bit_index;

	i = 0;
	while (i <= (long)ft_strlen((*stack_a)->bit) - 1)
	{
		j = size;
		while (j-- > 0)
		{
			bit_index = ft_strlen((*stack_a)->bit) - 1 - i;
			if ((*stack_a)->bit[bit_index] == '0')
				ft_rule_base(stack_a, stack_b, "pb", 1);
			else
				ft_rule_base(stack_a, stack_b, "ra", 1);
			if (ft_is_sorted(*stack_a))
				break ;
		}
		while (*stack_b)
			ft_rule_base(stack_a, stack_b, "pa", 1);
		if (ft_is_sorted(*stack_a))
			break ;
		i++;
	}
}
