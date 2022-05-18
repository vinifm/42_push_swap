/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_manage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:26:23 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/18 19:30:43 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_error(void)
{
	write(2, "Error\n", 7);
	exit(1);
}

int	check_ints(char **argv)
{
	int	i;

	i = 0;

	while (argv[++i])
		check_if_int(argv[i]);
	return (0);
}

void	check_if_int(char *argv)
{
	int		i;
	double	num;

	i = 0;
	printf("%s\n", argv);

	if (argv[i] == '-')
	{
		if (!argv[++i])
			ft_error();
	}
	while(argv[i])
	{
		if(!ft_isdigit(argv[i]))
			ft_error();
		i++;
	}
	num = ft_atoi(argv);
	if (num > INT_MAX || num < INT_MIN)
		ft_error();
}
