/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:54:52 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/28 15:32:30 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort(t_list **stack_a, t_list **stack_b, int digits, int size)
{
	int	i;
	int	j;
	int	bit_index;

	i = 0;
	while (i <= digits)
	{
		j = size;
		while (j-- > 0)
		{
			bit_index = ft_strlen((*stack_a)->bit) - 1 - i;
			if ((*stack_a)->bit[bit_index] == '1')
				ft_rule_base(stack_a, stack_b, "pb");
			else
				ft_rule_base(stack_a, stack_b, "ra");
		}
		while (*stack_b)
			ft_rule_base(stack_a, stack_b, "pa");
		i++;
	}
}
