# include "./printf/ft_printf.h"

int main(int argc, char **argv)
{
	if (argc > 2)
		return 0;
	while (**argv) {
		if (!(ft_isdigit(**argv))) {
			ft_printf("Error");	
			return 1;
		}	
		argv++;
	int a = ft_isdigit("one");
}
