/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:54:52 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/28 13:06:35 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort(t_list **stack_a, t_list **stack_b, int digits)
{
	int	i;

	i = digits;
	while (i >= 0)
	{
		if ((*stack_a)->bit[i] == 1)
			ft_rule_base(stack_a, stack_b, PA);
		else
			ft_rule_base(stack_a, stack_b, RA);
	}
}
