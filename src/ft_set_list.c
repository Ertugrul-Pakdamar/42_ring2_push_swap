/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:53:21 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/21 15:10:22 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list	*ft_set_list(char **argv)
{
	t_list	*stack;
	int		i;

	stack = ft_lstnew(argv[0]);
	i = 1;
	while (argv[i])
	{
		ft_lstadd_back(&stack, ft_lstnew(argv[i]));
		i++;
	}
	return (stack);
}
