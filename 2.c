#include <stdio.h>
#include <stdlib.h>



int main(int argc,char ** argv)
{
	int n;
	scanf("%d",&n);

	int * fabbonacciSeries=malloc(sizeof(int)*n);

	*fabbonacciSeries=1;
	*(fabbonacciSeries+1)=1;

	int sum=0;

	for (int i = 2; i < n; ++i)
	{
		*(fabbonacciSeries+i)=*(fabbonacciSeries+i-1)+*(fabbonacciSeries+i-2);

		if ((  *(fabbonacciSeries+i)%2==0  ) && (*(fabbonacciSeries+i)<4000000))
		{
			sum+=*(fabbonacciSeries+i);
		}
	}

	printf("The sum of even Fabbonacci Series is %d\n",sum );




	return 0;
}