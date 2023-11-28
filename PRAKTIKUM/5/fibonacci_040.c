#include <stdio.h>

int main()
{
    int n;
	int counter = 1;
	int Fn, Fn_1, Fn_2;
	printf("Enter any number to find the Fibonnaci sequence: ");
	scanf("%d", &n);
	
	Fn_2 = 0;
	Fn_1 = 1;
	printf(" The Fibonacci sequence of %d number is : \n%d ", Fn_1);
	while (counter <= n)
	{
		counter++;
		Fn = Fn_1 + Fn_2;
		printf("%d ", Fn);
		Fn_2 = Fn_1;
		Fn_1 = Fn;
    }

    return 0;
}