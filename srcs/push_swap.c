/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:41:09 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/23 17:10:55 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stacks(char **argv, t_data *data)
{
	int	i;
	int	number;

	data->a = (t_stack *) malloc(sizeof(t_stack));
	data->b = (t_stack *) malloc(sizeof(t_stack));
	if (!data->a || !data->b)
		ft_exit(data, 2);
	printf("%s test\n", argv[0]);
	i = 1;
	number = (int) ft_atoi(argv[i++]);
	data->a->lst = ft_dlstnew(number);
	while (argv[i++])
	{
		number = (int) ft_atoi(argv[i]);
		ft_dlstadd_back(&data->a->lst, ft_dlstnew(number));
	}

	// // delete - reading the stack
	// while (data->a->lst)
	// {
	// 	printf("%d\n", data->a->lst->num);
	// 	data->a->lst = data->a->lst->next;
	// }

}

t_data	*init_data(char **argv)
{
	t_data	*data;

	data = (t_data *) malloc(sizeof(t_data));
	if (!data)
		ft_exit(data, 1);
	init_stacks(argv, data);
	return (data);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	(void) argc;
	check_ints(argv);
	data = init_data(argv);
	return (0);
}
