#include <stdlib.h>
#include <stdio.h>

void Factorial(int n);

int main(int argc,char** argv)
{

Factorial(100);
return 0;
}


void Factorial(int n)
{
	int * num=malloc(sizeof(int)*n);

	int numEnd=n-1;
	int numStart=n-1;

	int num_copy=n;

	while(num_copy>0)
	{
		*(num+numStart)=num_copy%10;
		num_copy/=10;
		numStart--;
	}
	n--;
	for(int i=numStart;i<=numEnd;i++)
	{
		printf("%d",*(num+i) );
	}
	printf("\n");

	while(n>=1)
	{
		int carry=0;

		for(int i=numEnd;i>=numStart;i--)
		{
			*(num+i)*=n;
			*(num+i)+=carry;
			if(*(num+i)>9)
			{
				carry=(int)*(num+i)/10;
				*(num+i)%=10;
				
				if(i==numStart)
				{
					numStart--;
					//*(numStart+num)=0;
				}
			}
		}
		for(int i=numStart;i<=numEnd;i++)
	{
		printf("%d",*(num+i) );
	}
	printf("\n");


		n--;
	}
	int count=0;

	for(int i=numStart;i<=numEnd;i++)
	{
		count+=*(num+i) ;
	}
	printf("SUM = %d\n", count);

	
}
