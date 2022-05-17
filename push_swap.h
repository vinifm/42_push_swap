/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:45:24 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/17 16:44:38 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

/* EXCLUIR DEPOIS */

# include <stdio.h>

typedef struct s_lst
{
	int		data;
	struct s_lst	*next;
	struct s_lst	*prev;
}				t_lst;

// push_swap.c
int	check_ints(char **argv);

#endif


