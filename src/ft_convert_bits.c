/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:45:51 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/25 10:26:56 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static unsigned long	ft_max_bit_len(t_list *stack)
{
	t_list			*temp;
	long			max;
	unsigned long	digits;

	max = 0;
	temp = stack;
	while (temp)
	{
		if (temp->id > max)
			max = temp->id;
		temp = temp->next;
	}
	digits = 0;
	while (max > 0)
	{
		digits++;
		max /= 2;
	}
	return (digits);
}

static unsigned long	ft_set_bits_to_zero(t_list *stack)
{
	t_list			*temp;
	unsigned long	digits;
	unsigned long	res;

	temp = stack;
	res = ft_max_bit_len(stack);
	while (temp)
	{
		digits = ft_max_bit_len(stack);
		temp->bit = (char *)malloc((digits * sizeof(char)) + 1);
		while (digits-- > 0)
			temp->bit[digits] = '0';
		temp = temp->next;
	}
	return (digits);
}

static void	ft_get_bits(t_list *stack, char const *base)
{
	int			i;
	long long	bits;

	bits = stack->id;
	i = 0;
	while (bits > 0)
	{
		stack->bit[i++] = base[bits % 2];
		bits /= 2;
	}
}

void	ft_convert_bits(t_list *stack)
{
	t_list			*temp;
	unsigned long	digits;

	digits = ft_set_bits_to_zero(stack);
	temp = stack;
	while (temp)
	{
		ft_get_bits(temp, "01");
		temp = temp->next;
	}
}
