/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:23:08 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/30 21:46:34 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	sort_five(t_data *data)
{
	t_vars	vars;

	vars.len = ft_dlst_len(data->stack_a);
	get_min(data->stack_a, &vars);
	push_to_b(data, &vars);
	if (vars.len == 5)
	{
		vars.len--;
		get_min(data->stack_a, &vars);
		push_to_b(data, &vars);
	}
	sort_three(data);
	pa(data);
	pa(data);
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
