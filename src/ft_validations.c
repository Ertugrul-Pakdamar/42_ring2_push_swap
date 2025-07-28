/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 08:10:55 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/28 16:36:49 by epakdama         ###   ########.fr       */
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

int	ft_is_valid_number(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	if (!str[i])
		return (0);
	if (str[i] == '0' && str[i + 1])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_input_valid(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (ft_isdigit(arg[i]) == 0 && arg[i] != ' ' && arg[i] != '-'
			&& arg[i] != '+')
			return (0);
		if ((arg[i] == '-' || arg[i] == '+') && (arg[i - 1] != ' '
				|| ft_isdigit(arg[i + 1]) != 1))
			return (0);
		i++;
	}
	return (1);
}
