/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:45:40 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/22 15:18:42 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_custom_atoi(char *str, int *res)
{
	int index;
	long result;
	int symbol;

	result = 0;
	symbol = 1;
	index = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-')
		symbol = -1;
	if (str[index] == '+' || str[index] == '-')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	if (result <= INT_MAX && result >= INT_MIN)
		*res = (result * symbol);
	else
		return (0);
	return (1);
}