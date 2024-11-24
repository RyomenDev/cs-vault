
#include <stdio.h>

int main()
{
	// your code goes here
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, change;
		scanf("%d", &a);
		change = 100 - a;
		printf("%d\n", change);
	}

	return 0;
}

/*
#include<stdio.h>


int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int a, change;
	scanf("%d",&a);
	change=100-a;
	printf("%d\n",change);

	}

	return 0;
}
*/