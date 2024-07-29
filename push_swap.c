# include "./printf/ft_printf.h"

void error_call()
{
	ft_printf("Error");
	exit(EXIT_FAILURE);
}

int check_error(int argc, char **argv)
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
	while (argv[i]) {
		temp = ft_atoi(argv[i]);
		if (INT_MAX < temp || INT_MIN > temp)
			error_call();
		// 整数外
		while (argv[i][j]) {
			if (!(ft_isdigit(argv[i][j]))) {
				error_call();
			}	
			j++;
		}
		i++;
	}
	return 1;
}

//typede struct Node {
//	int data;
//	struct Node prev;
//	struct Node next;
//} Node;
//
//void	ft_lstadd_back(t_list **lst, t_list *new)
//{
//	if (!lst || !new)
//		return ;
//	if (*lst)
//		ft_lstlast(*lst)->next = new;
//	else
//		*lst = new;
//}
//
//void make_stack(char **argv)
//{
//	int i;
//	i = 1;
//	Node *head;
//	Node stack;
//	stack = (Node *)malloc(sizeof(Node));
//	while (argv[i]) 
//	{
//		ft_lstadd_back(&stack, argv[i]);
//	}
//
//}
//
//
//void push_swap()
//{
//}
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	check_error(argc, argv);
	exit(EXIT_FAILURE);
}
