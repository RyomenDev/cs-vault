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
		int k, f, extra;
		scanf("%d ", &k);
		scanf("%d", &f);
		extra = k - f;
		printf("%d\n", extra);
	}
	return 0;
}