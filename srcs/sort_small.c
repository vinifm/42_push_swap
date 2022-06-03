/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:23:08 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/03 22:32:55 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		is_sorted(t_dlst *stack)
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

void	sort_three(t_data *data)
{
	int	n1;
	int	n2;
	int	n3;

	if (is_sorted(data->stack_a))
		return ;
	n1 = data->stack_a->num;
	n2 = data->stack_a->next->num;
	n3 = data->stack_a->next->next->num;
	if (n1 > n2 && n1 < n3 && n2 < n3)
		sa(&(data->stack_a));
	if (n1 > n2 && n1 > n3 && n2 < n3)
		ra(&(data->stack_a));
	if (n1 < n2 && n1 > n3 && n2 > n3)
		rra(&(data->stack_a));
	if (n1 > n2 && n1 > n3 && n2 > n3)
	{
		sa(&(data->stack_a));
		rra(&(data->stack_a));
	}
	if (n1 < n2 && n1 < n3 && n2 > n3)
	{
		sa(&(data->stack_a));
		ra(&(data->stack_a));
	}
}

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

void	push_to_b5(t_data *data, int index)
{
	if (index == 0)
		pb(data);
	if (index == 1)
	{
		ra(&(data->stack_a));
		pb(data);
	}
	if (index == 2)
	{
		ra(&(data->stack_a));
		ra(&(data->stack_a));
		pb(data);
	}
	if (index == 3)
	{
		rra(&(data->stack_a));
		rra(&(data->stack_a));
		pb(data);
	}
	if (index == 4)
	{
		rra(&(data->stack_a));
		pb(data);
	}
}

void	push_to_b4(t_data *data, int index)
{
	if (index == 0)
		pb(data);
	if (index == 1)
	{
		ra(&(data->stack_a));
		pb(data);
	}
	if (index == 2)
	{
		ra(&(data->stack_a));
		ra(&(data->stack_a));
		pb(data);
	}
	if (index == 3)
	{
		rra(&(data->stack_a));
		pb(data);
	}
}

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

void	sort_five(t_data *data)
{
	t_vars	vars;

	vars.len = ft_dlst_len(data->stack_a);
	get_mins(data->stack_a, &vars);
	find_min(data, &vars);
}
