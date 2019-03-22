#include <stdlib.h>
#include <stdio.h>

long getPow5(long number);

int main(int argc,char** argv)
{
	long sum=0;

	for(long i=2;i<=947499;i++)
	{
		long n=i;

		long i_Sum=0;

		while(n>0)
		{
			i_Sum+=getPow5(n%10);
			n/=10;
		}
		//printf("I=%ld , SUM=%ld \n",i,i_Sum );

		if(i==i_Sum)
		{
			sum+=i;
			printf("%ld  ",i );
		}

	}
	printf("\n The sum is %ld",sum);


	return 0;
}



long getPow5(long number)
{
	//printf("%ld  ",number );
	long n=number;
	for(int i=0;i<4;i++)
	{
		number=number*n;
	}
	//printf("-->  %ld  ",number );
	return number;
}