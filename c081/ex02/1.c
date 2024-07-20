
# define ABS(v) (v * ((v < 0) ? -1 : 1 ))
#include <stdio.h>

int	main(void)
{
	int	positive;
	int	negative;
	int	zero;

	positive = 10;
	negative = -5;
	zero = 0;
	printf("ABS(%d) = %lld\n", positive, ABS(positive));
	printf("ABS(%d) = %lld\n", negative, ABS(negative));
	printf("ABS(%d) = %lld\n", zero, ABS(zero));
	return (0);
}
