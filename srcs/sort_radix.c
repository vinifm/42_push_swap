/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:32:14 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/21 17:51:00 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//	turns the number of the stack from 0 to len(stack_a).
//	e.g. (5, -2, 3, -46) becomes (3, 1, 2, 0)

// PROBS: transformar o numero minimo em 0 não vai atrapalhar o resto do loop?
void	make_positive(t_data *data)
{
	t_dlst	*stack;
	t_dlst	*min;
	size_t	i;
	// size_t	j;

	stack = data->stack_a;
	min = stack;
	i = 0;
	while (i < ft_dlst_len(stack))
	{
		if (stack->num > stack->next->num)
			min = stack->next;
		stack = stack->next;
	}
}

void	sort_radix(t_data *data)
{
	make_positive(data);

}
