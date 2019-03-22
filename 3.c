#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int biggestPrimeCD(long number);

int isPrime(int number);

int main(int argc,char** argv)
{
	long number=600851475143;

    printf("Biggest and prime CD is %d\n",biggestPrimeCD(number) );
}


int biggestPrimeCD(long number)
{
	for (int i = (int) sqrt(number); i >= 2; --i)
	{
		if((number%i==0) && (isPrime(i)==0))
		{
			return i;
		}
	}
	return 1;
}

int isPrime(int number)
{
	for (int i = 2; i < (int) sqrt(number); ++i)
	{
		if(number%i==0)
		{
			return 1;
		}
	}
	return 0;
}