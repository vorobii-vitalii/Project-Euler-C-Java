#include <stdio.h>
#include <stdlib.h>

int getNthPrimeNumber(int n);

int main(int argc, char **argv)
{
	printf("The 1001`s prime num is %d\n",getNthPrimeNumber(1001) );

	return 0;
}

int getNthPrimeNumber(int n)
{
	int counter=1;
	int * primes=malloc(sizeof(int)*n);
	*primes=2;
	int isPrime=0;
	for (int i=3;;i++)
	{
		for (int j=0;j<counter;j++)
		{
			if(i%(*(primes+j))==0)
			{
				isPrime=1;
				break;
			}
		}
		if(isPrime==0)
		{
			*(primes+counter)=i;
			counter++;
			if(counter==n)
			{
				return *(primes+counter-1);
			}

		}
		isPrime=0;
	}
}