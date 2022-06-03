/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:41:09 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/02 21:45:24by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_test_read(t_data *data)
{
	t_dlst *aux;

	aux = data->stack_a;
	while (aux)
	{
		printf("%d ", aux->num);
		aux = aux->next;
	}
	printf("\n");
}

t_data	*init_data(char **argv)
{
	t_data	*data;
	int		i;
	int		number;

	data = (t_data *) malloc(sizeof(t_data));
	if (!data)
		ft_exit(data, 4);
	data->stack_b = (t_dlst *) malloc(sizeof(t_dlst));
	if (!data->stack_b)
		ft_exit(data, 5);
	i = 1;
	number = (int) ft_atoi(argv[i++]);
	data->stack_a = ft_dlstnew(number);
	while (argv[i])
	{
		number = (int) ft_atoi(argv[i++]);
		if (check_if_dup(data->stack_a, number))
			ft_error(6);
		ft_dlstadd_back(&data->stack_a, ft_dlstnew(number));
	}
	return (data);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc == 1)
		return (0);
	check_ints(argv);
	data = init_data(argv);
	if (argc == 4)
		sort_three(data);
	if (argc > 4 && argc < 6)
		sort_five(data);

	// ft_test_read(data);

	ft_exit(data, 0);
	return (0);
}
