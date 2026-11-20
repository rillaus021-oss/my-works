#include <stdio.h>

void	test(void)
{
	static int	i = 0;

	i++;
	printf("i = %d\n", i);
}

int	main(void)
{
	test();
	test();
	test();
	return (0);
}