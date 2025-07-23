/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:45:40 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/23 23:33:06 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_custom_atoi_controls(char *str, size_t *index, int *symbol)
{
	while (str[*index] == ' ' || (str[*index] >= 9 && str[*index] <= 13))
		(*index)++;
	if (str[*index] == '-')
		*symbol = -1;
	if (str[*index] == '+' || str[*index] == '-')
		(*index)++;
}

int	ft_custom_atoi(char *str, int *res)
{
	size_t	index;
	long	result;
	int		symbol;

	result = 0;
	symbol = 1;
	index = 0;
	ft_custom_atoi_controls(str, &index, &symbol);
	if (str[index] == '+' || str[index] == '-')
		return (0);
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	if (str[index - 1] < '0' || str[index - 1] > '9')
		return (0);
	else if (result * symbol <= INT_MAX && result * symbol >= INT_MIN)
		*res = (result * symbol);
	else
		return (0);
	return (1);
}
