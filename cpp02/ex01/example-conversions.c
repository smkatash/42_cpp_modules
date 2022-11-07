#include <stdio.h>
#include <math.h>

int	main(void)
{
	int num = 50;
	int	num1;
	int	fixedPoint;
	float float_num = 42.562;
	float float_num1;
	int	fixedPoint_float;
	double	fixedPoint_float_dbl;

	// 50: 110010 | 12800: 11001000000000
	printf("\n--------------\n");
	fixedPoint = num << 8;
	printf("from num: %d to fixed Point: %d\n", num, fixedPoint);
	num1 = fixedPoint >> 8;
	printf("num back: %d from fixed Point: %d\n", num1, fixedPoint);
	printf("\n--------------\n");
	// 42.562: 010000100 | 01010100011111101111101
	// 10896:  10101010010000
	fixedPoint_float = round(float_num * (1 << 8));
	printf("from float: %f to fixed Point: %d\n", float_num, fixedPoint_float);
	fixedPoint_float_dbl = fixedPoint_float;
	float_num1 = fixedPoint_float_dbl / (1 << 8);
	printf("from fixed Point: %d from float: %f\n", fixedPoint_float, float_num1);
	return 0;
}