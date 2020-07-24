#include <stdio.h>
#include "lagrange.h"

int main()
{
	double** xy;
	xy = (double**)malloc(3 * sizeof(double));
	for (int i = 0; i < 3; i++)
	{
		xy[i] = (double*)malloc(2 * sizeof(double));
	}
	xy[0][0] = 4.1168;
	xy[0][1] = 0.213631;
	xy[1][0] = 4.20967;
	xy[1][1] = 0.21441;
	xy[2][0] = 4.46908;
	xy[2][1] = 0.218788;
	double* x;
	x = Lagrange(xy, 3, 2, 4.19236);
	printf("%f\n", x[1]);
	free(x);

	return 0;
}