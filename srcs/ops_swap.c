/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:43:18 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/01 00:11:16 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	drop: removes the first element of the stack. Returns a pointer to the
**	seconde one.
*/

void	swap(t_dlst *stack)
{
	t_dlst	*aux_0;
	t_dlst	*aux_1;

	aux_0 = ft_dlstrm_front(&stack);
	aux_1 = ft_dlstrm_front(&stack);
	ft_dlstadd_front(&stack, aux_0);
	ft_dlstadd_front(&stack, aux_1);
}

void	sa(t_dlst *stack)
{
	swap(stack);
	write(1, "sa\n", 3);
}

// void	sb(t_dlst *stack)
// {

// }
// void	ss(t_data *data)
// {

// }
