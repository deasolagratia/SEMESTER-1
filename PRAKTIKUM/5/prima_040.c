#include<stdio.h>
int main (int argc, char const *argv[])
{
	int a, b, x=0;
	printf("Enter any number to check prime:");
	scanf("%d",&a);
	b=a;
	do
	{
		if (a%b==0)
		{
			x++;
		}
		b--;
	}
	while (b>1);
	if(a>1 && x==1)
	{printf("%d is prime number\n",a);
	}else{
		printf("%d is composit number\n",a);
	}
	return 0;
}