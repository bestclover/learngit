#include <stdio.h>

int main(void)
{
	int divisor,number;
	int remainder=1;
	int i=0;
	int rem_container[10000];
	
	printf("input the number of system:");
	scanf("%d",&divisor);
	printf("\n");
	printf("input the mumber you want to transform:");
	scanf("%d",&number);
	printf("\n");
		
	while(number>0)
	{
		remainder=number%divisor;
		number=number/divisor;
		rem_container[i]=remainder;
		i++;
	}
	
	while(i>=0)
	{
		printf("%d",rem_container[i]);
		i--;
	}
	
	printf("\n"); 
	main();
	getchar();
	
	return 0;
 } 
