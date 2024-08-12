/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 22:32:03 by yehara            #+#    #+#             */
/*   Updated: 2024/08/12 23:34:02 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap.h"

void error_call()
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void check_error(int argc, char **argv)
{
	int i;
	int j;
	long temp;
	i = 1;
	j = 0;

	// 引数が0,1個
	if (argc < 3)
		exit(EXIT_FAILURE);
	//整数外・int外
	while (argv[i])
	{
		temp = ft_atoi(argv[i]);
		if (INT_MAX < temp || INT_MIN > temp)
			error_call();
		// 整数外
		while (argv[i][j])
		{
			if (!(ft_isdigit(argv[i][j])))
			{
				error_call();
			}	
			j++;
		}
		i++;
	}
	return ;
}

//void push_swap()
//{
//
//}

int main(int argc, char **argv)
{
	t_elem	*stacka;
	t_elem	*stackb;

	check_error(argc, argv);
	stacka = (t_elem *)malloc(sizeof(t_elem));
	if (stacka == NULL)
	{
		exit(EXIT_FAILURE);
	} 
	else 
	{
		stacka->data = 0;
		stacka->prev = stacka;
		stacka->next = stacka;
	}
	stackb = (t_elem *)malloc(sizeof(t_elem));
	generate_stack(stacka, argv);
	t_elem *current;

	if (stacka->next != stacka)
	{
		current = stacka->next;
		while (current != stacka)
		{
			printf("%d\n", current->data);
			current = current->next;
		}
	}
	exit(EXIT_FAILURE);
}
