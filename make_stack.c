#include "h_push_swap.h"

t_elem	*ft_elemnew(int elem_num)
{
	t_elem	*new_elem;

	new_elem = (t_elem *)malloc(sizeof(t_elem));
	if (new_elem == NULL)
		return (NULL);
	new_elem->data = elem_num;
	new_elem->prev = NULL;
	new_elem->next = NULL;
	return (new_elem);
}

t_elem	*ft_elemlast(t_elem *stack)
{
	t_elem *start = stack;
	if (stack == NULL)
		return (NULL);
	while (stack->next != start)
	{
		stack = stack->next;
	}
	return (stack);
}

void	ft_elemadd(t_elem **stack, t_elem *new_elem)
{
	t_elem *last;
	if (!stack || !new_elem)
		return ;
	if (*stack)
	{
		last = ft_elemlast(*stack);
		last->next = new_elem;
		new_elem->prev = last;
		new_elem->next = *stack;
		(*stack)->prev = new_elem;
	}
	else
	{
		*stack = new_elem;
		new_elem->next = new_elem;
		new_elem->prev = new_elem;
	}
}

void	*make_stack(t_elem *stacka, char **argv)
{
	int i;
	t_elem *temp;

	i = 1;

	while (argv[i])
	{
		temp = ft_elemnew(ft_atoi(argv[i]));
		ft_elemadd(&stacka, temp);
		i++;
	}
	return (stacka);
}
