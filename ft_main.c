/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:23:20 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/24 12:00:53 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

// FOR TESTS
void	f(int i)
{
	printf("%d\n", i);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc == 1)
		return (1);
	stack_b = NULL;
	stack_a = ft_set_list(&argv[1]);
	ft_number_stack(stack_a);
	ft_convert_bits(stack_a);
	while (stack_a)
	{
		printf("%s\n", stack_a->bit);
		stack_a = stack_a->next;
	}
	ft_lstclear(&stack_a, free);
	ft_exit_prog(&stack_a, &stack_b, NULL, 0);
}
