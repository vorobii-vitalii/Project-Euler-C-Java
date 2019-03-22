#include <stdlib.h>
#include <stdio.h>

int isPrime(int n);

void getMaxPrimes();

int max_a=0;
int max_b=0;

int max_primes=0;

int a;
int b;

int main(int argc,char** argv)
{


	for(a=-1000;a<1000;a++)
	{
		for(b=-1000;b<=1000;b++)
		{
			getMaxPrimes();
		}
	}
	printf("Max a and b are : %d %d with max prime %d\n",max_a,max_b,max_primes );
	return 0;
}

int isPrime(int n)
{
//	printf("%d \n",n );
	for(int i=2;i<n;i++)
	{
		if( n%i ==0)
		{
			return 0;
		}
	}
	return 1;
}

void getMaxPrimes()
{
	int iterable=0;
	int counter=0;
	while( isPrime(iterable*iterable+a*iterable+b) ==1 )
	{
		counter++;
		if(counter>max_primes)
		{
			max_primes=counter;
			max_a=a;
			max_b=b;
		}
		iterable++;
	}
}