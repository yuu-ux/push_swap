#ifndef H_PUSH_SWAP_H
# define H_PUSH_SWAP_H
# include "./printf/ft_printf.h"

typedef struct t_elem {
	int data;
	struct t_elem *prev;
	struct t_elem *next;
} t_elem;
#endif

t_elem	*ft_elemnew(int elem_num);
t_elem	*ft_elemlast(t_elem *stack);
void	ft_elemadd(t_elem **stack, t_elem *new_elem);
void	error_call();
int	check_error(int argc, char **argv);
void	*make_stack(t_elem *stacka, char **argv);
