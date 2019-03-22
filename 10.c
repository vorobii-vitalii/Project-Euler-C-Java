#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getSumPrimeNumber(int n);

int main(int argc,char** argv)
{
printf("%d",getSumPrimeNumber(2000000));
	return 0;
}

int getSumPrimeNumber(int n)
{
	int sum=0;
	for (int i=2;i<=n;i++)
	{
		int isPrime=0;
		for (int j=2;j<=(int)sqrt(i);j++)
		{
			if(i%j==0)
			{
				isPrime=1;
				break;
			}
		}

		if(isPrime==0)
		{
			     sum+=i;
		}
		
	}
	return sum;
}