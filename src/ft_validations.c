/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 08:10:55 by epakdama          #+#    #+#             */
/*   Updated: 2025/08/01 11:08:19 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_is_duplicate(t_list *stack)
{
	t_list	*current;
	t_list	*compare;

	current = stack;
	while (current)
	{
		compare = current->next;
		while (compare)
		{
			if (current->content == compare->content)
				return (1);
			compare = compare->next;
		}
		current = current->next;
	}
	return (0);
}

int	ft_is_input_valid(char **arg)
{
	int	i;

	i = 0;
	while ((*arg)[i])
	{
		if (ft_isdigit((*arg)[i]) == 0 && (*arg)[i] != ' ' && (*arg)[i] != '-'
			&& (*arg)[i] != '+')
			return (free(*arg), 0);
		if (((*arg)[i] == '-' || (*arg)[i] == '+') && ((*arg)[i - 1] != ' '
				|| ft_isdigit((*arg)[i + 1]) != 1))
			return (free(*arg), 0);
		i++;
	}
	return (1);
}
