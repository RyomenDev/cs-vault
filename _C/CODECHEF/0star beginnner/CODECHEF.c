
// answer 6
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int t;
scanf("%d",&t);
while (t--)
{
	int x,y;
	scanf("%d",&x);
	y=x+3;
	if (y<=10)
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
*/
// answer 7
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int t;
scanf("%d",&t);
while(t--)
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("%d\n",10*x+5*y);
}
return 0;
}
*/
// answer 8
/*
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
		int a, b, x, y, m, n;
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &x);
		scanf("%d", &y);
		m = x * y;
		n = a * b;
		if (m >= n)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}
*/
// answer 9
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int t;
scanf("%d",&t);
while (t--)
{
	int n;
	scanf("%d",&n);
	printf("%d\n",n*10);
}

return 0;
}
*/
// answer 10
/*
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
		int x, y;
		scanf("%d", &x);
		scanf("%d", &y);
		if (x == y)
		{
			printf("same");
		}
		else if (x > y)
		{
			printf("car");
		}
		else
		{
			printf("bike");
		}
	}

	return 0;
}
*/
/*
// answer 11
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
		int x, a, b;
		scanf("%d", &x);
		scanf("%d", &a);
		scanf("%d", &b);
		if (x <= (a + 2*b))
		{
			printf("Qualify\n");
		}
		else
		{
			printf("NotQualify\n");
		}
	}

	return 0;
}
*/
// answer 12
/*
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
		int x, y, n;
		scanf("%d", &x);
		scanf("%d", &y);
		n =(x / y);
		printf("%d\n", n);
	}

	return 0;
}*/
// answer13
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int t;
scanf("%d",&t);
while(t--)
{
	int x1,x2,y1,y2,p,q;
	scanf("%d",&x1);
	scanf("%d",&y1);
	scanf("%d",&x2);
	scanf("%d",&y2);
  p=(x1-x2);
  q=(y1-y2);
  if(p<0)
  {
	  p=(-1)*(p);
  }
  if (q<0)
  {
	  q=(-1)*(q);
  }
  if (p>q)
  {
	  printf("%d\n",p);
  }
  if (q>p)
  {

	  printf("%d\n",q);
  }



}
return 0;
}
*/
// answer 14
/*
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
		int n, x, p, y;
		scanf("%d", &n);
		scanf("%d", &x);
		scanf("%d", &p);
		y = 3 * x - (n - x);
		if (y >= p)
		{
			printf("PASS\n");
		}
		else
		{
			printf("FAIL\n");
		}
	}
	return 0;
}
*/
// answer15
/*
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
		int n;
		scanf("%d", &n);
		if (n%10==0)
		{
			printf("%d\n", n / 10);
		}
		else
		{
			printf("%d\n", n / 10 + 1);
		}
	}
	return 0;
}
*/
// answer 16

/*
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
		int x, y, z;
		scanf("%d", &x);
		scanf("%d", &y);
		z = x - y;
		if (z % 2 == 0)
		{
			printf("janmansh\n");
		}
		else
		{
			printf("jay\n");
		}
	}
	return 0;
}
*/
// answer 17
/*

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
		int x, y, z, u;
		int i = 0;
		scanf("%d", &x);
		scanf("%d", &y);
		scanf("%d", &z);

		while (i <= z)
		{
			u = x + (2 * i + (z - i));
			if (u >= y)

			{
				printf("yes\n");
				break;
			}

			if((x+2*z)<y)
			{
				printf("no\n");
				break;
			}

			i++;
		}
	}
	return 0;
}
*/
// 3
// 4 10 8
// 3 6 1
// 4 8 2
//  answer 18
/*
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
		char s[5];
		scanf("%s", s);
		char t[5];
		scanf("%s", s);

		char *ptr1 = s;
		char *ptr2 = t;
		while (*ptr1 != '\0' || *ptr2 != '\0')
		{

			if (*ptr1 = *ptr2)
			{
				printf("G\n");
			}
			else
			{
				printf("B\n");
			}

			ptr1++;
			ptr2++;
		}
	}

	return 0;
}
*/
// answer 19
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int t;
scanf("%d",&t);
while(t--){
	int m,n,k,r;
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&k);
r=n*k;
if(m>r){
printf("yes\n");
}
else{
	printf("no\n");
}
}
return 0;
}
*/
// answer 20
/*
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

		int x = 0;
		int y = 0;

		int a[7];

		for (int i = 0; i < 7; i++)
		{
			scanf("%d", &a[i]);
			if (a[i] == 1)
			{

				x++;
			}
			if (a[i] == 0)
			{

				y++;
			}
		}
		if (x > y)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}
*/

// answer 21
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		float h, m, z;
		scanf("%f", &m);
		scanf("%f", &h);
		//z = m/pow(h, 2);
		z=m/(h*h);
		if (z <= 18)
		{
			printf("1\n");
		}
		else if (z > 18 && z <= 24)
		{
			printf("2\n");
		}
		else if (z > 24 && z <= 29)
		{
			printf("3\n");
		}
		else
		{
			printf("4\n");
		}
	}
	return 0;
}
*/
// answer 22
/*
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
		int x, y, z;
		scanf("%d", &x);
		scanf("%d", &y);
		scanf("%d", &z);
		if ((x + y) < z)
		{
			printf("Planebus\n");
		}
		else if ((x + y) > z)
		{
			printf("train\n");
		}
		else
		{
			printf("equal\n");
		}
	}

	return 0;
}
*/
// answer 23

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	int n, i;
	scanf("%d", &n);
   for (int i = 10; i > 1; i--)
{
	int z;
	z=n%i;
	if(z==0){
		printf("%d",i);
		break;
	}
	//i++;
}

		// *i = 10;
		// while (i--)
		// {
		// 	int z;
		// 	z = n % i;
		// 	if (z == 0)
		// 	{
		// 		printf("%d", i);
		// 		break;
		// 	}
		// }

		// return 0;
}
*/
// answer 24
/*
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
		int r;
		scanf("%d", &r);
		if (r < 1600)
		{
			printf("3");

		}
		else if (r >= 1600 && r < 2000)
		{
			printf("2");

		}
		else if (r >= 2000)
		{
			printf("1");
		}
	}

	return 0;
}
*/
// ANSWER 25
/*
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
		int m, n, z;
		int c = 0;
		scanf("%d", &m);
		scanf("%d", &n);
		for (int i = m; i <= n; i++)
		{
			z = i % 10;
			if (z == 2 || z == 3 || z == 9)
			{
				c++;
			}
		}
		printf("%d\n", c);
	}

	return 0;
}
*/
// answer 26
/*
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
		int a, b, x, z;
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &x);

		// b=a+z*x;
		z = (b - a) / x;
		printf("%d\n", z);
	}
	return 0;
}
*/
// anwer 27
/*
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
		double x1, x2, x3, v1, v2;
		double z1, z2;
		scanf("%lf", &x1);
		scanf("%lf", &x2);
		scanf("%lf", &x3);
		scanf("%lf", &v1);
		scanf("%lf", &v2);

		z1 = (x3 - x1) / v1;
		z2 = (x2 - x3) / v2;
		if (z1 > z2)
		{
			printf("kefa\n");
		}
		if (z1 < z2)
		{
			printf("chef\n");
		}
		if (z1 == z2)
		{
			printf("draw\n");
		}
	}
	return 0;
}
*/
// ANSWER 28
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int g1,s1,b1,g2,s2,b2;
		scanf("%d",&g1);
		scanf("%d",&s1);
		scanf("%d",&b1);
		scanf("%d",&g2);
		scanf("%d",&s2);
		scanf("%d",&b2);

		int a=b1+s1+g1;
		int b=g2+b2+s2;
		if (a>b)
		{
			printf("1");
		}
		else{
			printf("2");
		}
	}


return 0;
}
*/
// answer 29
/*
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
		int x, y;
		scanf("%d", &x);
		scanf("%d", &y);
		if (y != 0)
		{
			if (y != x)
			{
				int z = (x - y) + (2 * y);
				printf("%d\n", z);
			}
			else
			{
				int z = (x - y) + (2 * y) - 1;
				printf("%d\n", z);
			}
		}
		else
		{
			int z = (x - y);
			printf("%d\n", z);
		}
	}
	return 0;
}
*/
// answer 30
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int h,x,y,c;
		scanf("%d", &h);
		scanf("%d", &x);
		scanf("%d", &y);
		scanf("%d", &c);
		int z=h*(x+y/2);
		if (z<=c)
		{
			printf("yes\n");
		}
		else{
			printf("no\n");
		}

	}

return 0;
}
*/
// answer 31
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
int t;
	scanf("%d", &t);
	while (t--)
	{
		int a,b,c;
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		if ((a==0||b==0||c==0) && (a==1||b==1||c==1))
		{
			printf("1\n");
		}
		else{
			printf("0\n");
		}

	}
return 0;
}
*/
