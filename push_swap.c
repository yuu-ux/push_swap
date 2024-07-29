# include "./printf/ft_printf.h"

int check_error(int argument_n, char **argv)
{
	int i;
	int j;
	size_t temp;
	i = 1;
	j = 0;

	// 引数が0,1個
	if (argument_n < 3)
		exit(EXIT_FAILURE);
	//整数外・int外
	while (argv[i]) {
		temp = ft_atoi(argv[i]);
		// LONG_MAXのError処理してください
		if (INT_MAX < temp || INT_MIN > temp)
			exit(EXIT_FAILURE);
		while (argv[i][j]) {
			if (!(ft_isdigit(argv[i][j]))) {
				ft_printf("Error\n");	
				exit(EXIT_FAILURE);
			}	
			j++;
		}
		i++;
	}
	// sort済み
	// 重複チェック
	return 1;
}

typede struct Node {
	int data;
	struct Node prev;
	struct Node next;
} Node;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

void make_stack(char **argv)
{
	int i;
	i = 1;
	Node *head;
	Node stack;
	stack = (Node *)malloc(sizeof(Node));
	while (argv[i]) 
	{
		ft_lstadd_back(&stack, argv[i]);
	}

}


void push_swap()
{
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char *num = "9223372036854775809";
	int n = ft_atoi(num);
	if (INT_MAX < n || INT_MIN > n)
	// はじめの符号を確認して
	
	ft_printf("%d\n", n);
//	check_error(argc, argv);
	exit(EXIT_FAILURE);
}
