/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:12:41 by viferrei          #+#    #+#             */
/*   Updated: 2022/07/20 23:24:24 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_radix(t_data *data)
{
	t_vars_radix	vars;

	vars.max_num =  data->len - 1;
	vars.bit_count = 0;
	vars.max_bits = 0;
	while ((vars.max_num >> vars.max_bits) != 0)
		vars.max_bits++;
	while (vars.bit_count < vars.max_bits)
	{
		vars.num_count = 0;
		while (vars.num_count < data->len)
		{
			vars.num = data->stack_a->num;
			if (((vars.num >> vars.bit_count) & 1) == 1)
			{
				ra(&(data->stack_a));
			}
			else
			{
				pb(data);
			}
			vars.num_count++;
		}
		vars.bit_count++;
		vars.stack_head = data->stack_b;
		while (vars.stack_head)
		{
			pa(data);
			vars.stack_head = vars.stack_head->next;
		}
	}
}
