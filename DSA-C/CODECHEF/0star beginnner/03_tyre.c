#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int total, n, m;
		scanf("%d", &n);
		scanf("%d", &m);
		total = (4 * m) + (2 * n);
		printf("%d\n", total);
	}
	return 0;
}