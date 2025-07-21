/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:23:48 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/21 15:25:31 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_exit_prog(t_list *list, int exit_code)
{
	ft_lstclear(&list, free);
	ft_putstr_fd("Program shutting down.", 2);
	exit(exit_code);
}
