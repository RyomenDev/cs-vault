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
		int x;
		scanf("%d", &x);
		if (x <= 15)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}