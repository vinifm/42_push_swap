/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:13:02 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/07 21:16:49 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_dlst *stack)
{
	while (stack->next)
	{
		if (stack->num < stack->next->num)
			stack = stack->next;
		else
			break ;
	}
	if (!(stack->next))
		return (1);
	return (0);
}

// saves the two smallest numbers of the stack.
void	get_mins(t_dlst *stack, t_vars *vars)
{
	vars->min_0 = stack->num;
	vars->min_1 = stack->num;
	while (stack->next)
	{
		if (vars->min_0 > stack->next->num)
		{
			vars->min_1 = vars->min_0;
			vars->min_0 = stack->next->num;
		}
		stack = stack->next;
	}
}

// saves the index of the two smallest numbers of the stack.
void	find_min(t_data *data, t_vars *vars)
{
	t_dlst	*lst;
	int		index;

	index = 0;
	lst = data->stack_a;
	while (lst->next)
	{
		if (lst->num == vars->min_0 || lst->num == vars->min_1)
			break ;
		index++;
		lst = lst->next;
	}
	if (vars->len == 5)
		push_to_b5(data, index);
	if (vars->len == 4)
		push_to_b4(data, index);
}
