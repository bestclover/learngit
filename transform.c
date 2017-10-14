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
	
	if(divisor<=10)
	{
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
	}
	else if(divisor>10&&divisor<=16)
	{
		    while(number>0)
	    {
		    remainder=number%divisor;
		    number=number/divisor;
		    rem_container[i]=remainder;
		    i++;
	    }
	
		    while(i>=0)
	    {
		    if(rem_container[i]<10)
		    {
			    printf("%d",rem_container[i]);
		        i--;
		    }
		    else
		    {
			    switch(rem_container[i])
			    {
				    case 10:printf("A");
				    i--;
			        break;
			        case 11:printf("B");
			        i--;
			        break;
			        case 12:printf("C");
			        i--;
			        break;
			        case 13:printf("D");
			        i--;
			        break;
			        case 14:printf("E");
			        i--;
			        break;
			        case 15:printf("F");
			        i--;
			        break;
			        default:
			        break;
			    }
		    }
		main();
	    }
	}
	else
	{
		printf("can't apply more!'");
	}

	 return 0;
 }
 
 
