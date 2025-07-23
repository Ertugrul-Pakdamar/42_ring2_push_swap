/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 08:10:55 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/23 23:26:25 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_is_input_valid(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if ((arg[i] > '9' || arg[i] < '0') && arg[i] != ' ' && arg[i] != '-'
			&& arg[i] != '+')
			return (0);
		if ((arg[i] == '-' || arg[i] == '+') && arg[i - 1] != ' ')
			return (0);
		i++;
	}
	return (1);
}
