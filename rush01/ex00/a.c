
#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			printf("a");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
