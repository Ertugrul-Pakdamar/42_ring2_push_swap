/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:23:20 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/28 16:35:14 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_is_sorted(t_list *stack)
{
	while (stack && stack->next)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc == 1)
		ft_exit_prog(NULL, NULL, NULL, -1);
	stack_b = NULL;
	stack_a = ft_set_list(&argv[1]);
	if (ft_is_duplicate(stack_a))
		ft_exit_prog(&stack_a, &stack_b, NULL, -1);
	ft_number_stack(stack_a);
	ft_convert_bits(stack_a);
	if (ft_is_sorted(stack_a))
		ft_exit_prog(&stack_a, &stack_b, NULL, 0);
	ft_sort(&stack_a, &stack_b, ft_lstsize(stack_a));
	ft_lstclear(&stack_a, free);
	ft_exit_prog(&stack_a, &stack_b, NULL, 0);
}
