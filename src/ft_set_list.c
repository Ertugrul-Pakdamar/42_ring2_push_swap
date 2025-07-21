/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:53:21 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/21 15:26:58 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list	*ft_set_list(char **argv)
{
	t_list	*stack;
	int		i;
	int		j;

	stack = ft_lstnew(ft_atoi(argv[0]));
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
				ft_exit_prog(stack, 1);
			j++;
		}
		ft_lstadd_back(&stack, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	return (stack);
}
