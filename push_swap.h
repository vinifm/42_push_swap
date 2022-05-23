/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:45:24 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/23 17:08:49 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

/* -------- EXCLUIR DEPOIS -------- */
# include <stdio.h>
/* -------------------------------- */

typedef struct s_dlst
{
	int				num;
	struct s_dlst	*next;
	struct s_dlst	*prev;
}				t_dlst;

typedef struct s_stack
{
	t_dlst	*lst;
}				t_stack;

typedef struct s_data
{
	t_stack	*a;
	t_stack	*b;
}				t_data;

// error_manage.c
int		ft_error(void);
void	ft_exit(t_data *data, int exit_code);
int		check_ints(char **argv);
void	check_if_int(char *argv);

// ft_dlists.c
t_dlst	*ft_dlstnew(int num);
t_dlst	*ft_dlstlast(t_dlst *lst);
void	ft_dlstadd_back(t_dlst **lst, t_dlst *new);

#endif
