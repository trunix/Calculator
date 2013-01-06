#include <stdio.h>

int main(void)
{
	/* varibles */
	float a[3];
	char operation;
	int num;
	/* header print */
	printf("Enter the operation you would like to use\n");
	scanf("%c", &operation);
	
	/* ifs */
	if(operation == '*')
	{
		printf("Enter the numbers you would like to use\n");
		scanf("%f", &a[0]);
		scanf("%f", &a[1]);
		printf(" The answer is %.2f", a[0] * a[1]);
	}
	if(operation == '+')
	{
		printf("How many numbers you would like to use(max 4)\n");
		scanf("%d", &num);
		switch(num)
		{
			case 2:
				printf("Enter the numbers you would like to use\n");
				scanf("%f",&a[0]);
				scanf("%f",&a[1]);
				printf("The answer is %.2f", a[0] + a[1] );
			break;

			case 3:
				printf("Enter the numbers you would like to use\n");
				scanf("%f",&a[0]);
				scanf("%f",&a[1]);
				scanf("%f",&a[2]);
				printf("The answer is %.2f", a[0] + a[1] + a[2]);
			break;
			
			case 4:
				printf("Enter the numbres you would like to use");
				scanf("%f", &a[0]);
				scanf("%f", &a[1]);
				scanf("%f", &a[2]);
				scanf("%f", &a[3]);
				printf("The answer is ", a[0] + a[1]  + a[2] + a[3]);
			break;
		}
	}
	if(operation == '/')
	{
		printf("Enter the numbers you would like to use");
		scanf("%f",&a[0]);
		scanf("%f",&a[1]);
		printf("The answer is ", a[0] / a[1]);
	}

}







