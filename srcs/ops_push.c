/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:28:22 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/07 20:25:32 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_dlst **stack_0, t_dlst **stack_1)
{
	int		num;
	t_dlst	*old_first;

	if (!*stack_0)
		return ;
	num = (*stack_0)->num;
	old_first = (*stack_0);
	(*stack_0) = (*stack_0)->next;
	(*stack_0)->prev = NULL;
	free(old_first);
	ft_dlstadd_front(stack_1, num);
}

//	Take the first element at the top of b and put it at the top of a.
//	Do nothing if b is empty.
void	pa(t_data	*data)
{
	push(&(data->stack_b), &(data->stack_a));
	write(1, "pa\n", 3);
}

//	Take the first element at the top of a and put it at the top of b.
//	Do nothing if a is empty.
void	pb(t_data	*data)
{
	push(&(data->stack_a), &(data->stack_b));
	write(1, "pb\n", 3);
}
