/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:41:09 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/20 18:32:52 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stacks(char **argv, t_data *data)
{
	data->a = (t_stack *) malloc(sizeof(t_stack));
	data->b = (t_stack *) malloc(sizeof(t_stack));

	if (!data->a || !data->b )
	{
		ft_exit(data);
	}
	// get arguments from argv to data->a->lst
}

t_data	*init_data(char **argv)
{
	t_data	*data;
	int		i;

	data = (t_data *) malloc(sizeof(t_data));
	if (!data)
		return(1);
	init_stacks(argv, data);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	t_data	*data;

	check_ints(argv);
	data = init_data(argv);
	return(0);
}
