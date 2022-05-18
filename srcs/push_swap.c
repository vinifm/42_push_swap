/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:41:09 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/18 19:56:57 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	init_stacks(t_stack *stacks)
{
	stacks->a = NULL;
	stacks->b = NULL;


}

int	main(int argc, char **argv)
{
	(void)	argc;
	t_stack	stacks;

	check_ints(argv);
	init_stacks(&stacks);
	return(0);
}
