/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:53:21 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/22 08:47:50 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

t_list	*ft_set_list(char **argv)
{
	t_list	*stack;
	char	*total_args;
	char	**splitted_args;
	int		i;

	total_args = "";
	i = 0;
	while (argv[i])
		total_args = ft_strjoin(total_args, argv[i++]);
	if (!ft_is_input_valid(total_args))
		exit(1);
	splitted_args = ft_split(total_args, ' ');
	free(total_args);
	stack = ft_lstnew(ft_atoi(splitted_args[0]));
	i = 1;
	while (splitted_args[i])
		ft_lstadd_back(&stack, ft_lstnew(ft_atoi(splitted_args[i++])));
	return (stack);
}
