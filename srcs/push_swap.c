/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:41:09 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/24 21:55:51 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_data	*init_data(char **argv)
{
	t_data	*data;
	int		i;
	int		number;

	data = (t_data *) malloc(sizeof(t_data));
	if (!data)
		ft_exit(data, 4);
	data->a = (t_stack *) malloc(sizeof(t_stack));
	data->b = (t_stack *) malloc(sizeof(t_stack));
	if (!data->a || !data->b)
		ft_exit(data, 5);
	i = 1;
	number = (int) ft_atoi(argv[i++]);
	data->a->lst = ft_dlstnew(number);
	while (argv[i])
	{
		number = (int) ft_atoi(argv[i++]);
		ft_dlstadd_back(&data->a->lst, ft_dlstnew(number));
	}
	return (data);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	(void) argc;
	check_ints(argv);
	data = init_data(argv);
	ft_exit(data, 0);
	return (0);
}
