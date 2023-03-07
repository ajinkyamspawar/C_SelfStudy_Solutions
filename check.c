#include<stdio.h>

int main()
{
	int b, t, c=0, n;
	printf("1.Please enter basic salary:");
	scanf("%d", &b);
	printf("2.Please enter total sales:");
	scanf("%d", &t);
	if (t>=5000 && t<=7000)
	{
		c = (t * 3) / 100;
		printf("3.Yout commission is: %d\n", c);
	}
	else if (t >= 7001 && t <= 10000)
	{
		c = (t * 5) / 100;
		printf("3.Yout commission is: %d\n", c);
	}
	else if (t >= 10001 && t <= 15000)
	{
		c = (t * 10) / 100;
		printf("3.Yout commission is: %d\n", c);
	}
	else if (t > 15000)
	{
		c = (t * 15) / 100;
		printf("3.Yout commission is %d\n", c);
	}
	else
	{
		printf("3.You are only elgibile to get basic salary\n");
	}
	n = b + c;
	printf("4.Your net salary is: %d\n", n);
	printf("5.Your basic salary is: %d", b);

}
