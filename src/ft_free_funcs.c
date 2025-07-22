/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:23:48 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/22 12:22:59 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_exit_prog(t_list **stack_a, t_list **stack_b, int exit_code)
{
	if (stack_a)
		ft_lstclear(stack_a, free);
	if (stack_b)
		ft_lstclear(stack_b, free);
	if (exit_code == 1)
		ft_putstr_fd("Program shutting down with error.", 2);
	else if (exit_code == 0)
		ft_putstr_fd("Program shutting down with success.", 2);
	exit(exit_code);
}
