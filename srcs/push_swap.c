/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:41:09 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/16 15:24:15 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	if (argc == 0)
		return (1);

	printf("hello");

	if (check_ints)
		return (1);

	printf("world");

	return(0);
}

int	check_ints(char **argv)
{
	int	i;

	i = 0;
	while (argv[i++])
	{
		if (argv[i] > INT_MAX || argv[i] < INT_MIN)
			return (1);
	}
}
