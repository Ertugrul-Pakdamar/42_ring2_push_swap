/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:31:40 by epakdama          #+#    #+#             */
/*   Updated: 2025/07/21 15:27:40 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP
# define FT_PUSH_SWAP

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

t_list	*ft_set_list(char **argv);
void	ft_exit_prog(t_list *list, int exit_code);

#endif