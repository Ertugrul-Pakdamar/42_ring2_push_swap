/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:31:40 by epakdama          #+#    #+#             */
/*   Updated: 2025/08/01 22:09:40 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

t_list	*ft_set_list(char **argv);
void	ft_exit_prog(t_list **stack_a, t_list **stack_b, void ***arr,
			int exit_code);
int		ft_is_input_valid(char **arg);
void	ft_rule_base(t_list **stack_a, t_list **stack_b, char const *rule,
			int type);
void	ft_swap_stack(t_list **stack);
void	ft_push_stack(t_list **stack_a, t_list **stack_b);
void	ft_rotate_stack(t_list **stack);
void	ft_reverse_rotate_stack(t_list **stack);
void	ft_number_stack(t_list *stack);
void	ft_convert_bits(t_list *stack);
int		ft_custom_atoi(char *str, int *res);
void	ft_sort(t_list **stack_a, t_list **stack_b, int size);
void	ft_sort_mini(t_list **stack_a, t_list **stack_b);
int		ft_is_sorted(t_list *stack);
int		ft_is_duplicate(t_list *stack);

#endif