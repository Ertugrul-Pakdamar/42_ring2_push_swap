/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:53:21 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/28 16:35:32 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static char	*ft_join_args(char **argv)
{
	int		i;
	char	*res;

	res = "";
	i = 0;
	while (argv[i])
		res = ft_strjoin(res, argv[i++]);
	return (res);
}

static void	ft_initial_stack(t_list **stack, char ***splitted_args, int *ans)
{
	if (ft_custom_atoi((*splitted_args)[0], ans))
		*stack = ft_lstnew(*ans);
	else
		ft_exit_prog(stack, NULL, ((void ***)&(*splitted_args)), -1);
}

static void	ft_check_valid_number(char **splitted_args)
{
	int		i;

	i = 0;
	while (splitted_args[i])
	{
		if (!ft_is_valid_number(splitted_args[i]))
			ft_exit_prog(NULL, NULL, ((void ***)&splitted_args), -1);
		i++;
	}
}

t_list	*ft_set_list(char **argv)
{
	t_list	*stack;
	char	*total_args;
	char	**splitted_args;
	int		i;
	int		ans;

	total_args = ft_join_args(argv);
	if (ft_is_input_valid(total_args) == 0)
		ft_exit_prog(NULL, NULL, NULL, -1);
	splitted_args = ft_split(total_args, ' ');
	ft_check_valid_number(splitted_args);
	free(total_args);
	ft_initial_stack(&stack, &splitted_args, &ans);
	i = 1;
	while (splitted_args[i])
	{
		if (ft_custom_atoi(splitted_args[i++], &ans))
			ft_lstadd_back(&stack, ft_lstnew(ans));
		else
			ft_exit_prog(&stack, NULL, ((void ***)&splitted_args), -1);
	}
	i = 0;
	while (splitted_args[i])
		free(splitted_args[i++]);
	return (free(splitted_args), stack);
}
