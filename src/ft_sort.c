/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:54:52 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/28 16:35:44 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

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
				ft_rule_base(stack_a, stack_b, "pb");
			else
				ft_rule_base(stack_a, stack_b, "ra");
			if (ft_is_sorted(*stack_a))
				break ;
		}
		while (*stack_b)
			ft_rule_base(stack_a, stack_b, "pa");
		if (ft_is_sorted(*stack_a))
			break ;
		i++;
	}
}
