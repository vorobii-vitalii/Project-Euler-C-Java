#include <stdlib.h>
#include <stdio.h>

int isDivisableByRange(long number,int from,int to);

int main(int argc,char ** argv)
{
	long i=20;

	while(1)
	{
		if( isDivisableByRange(i,1,20)==0  )
		{
			printf("%ld\n",i );
			break;
		}
		else{
			i++;
		}
	}


	return 0;
}

int isDivisableByRange(long number,int from,int to)
{
	for(int i=from;i<=to;i++)
	{
		if(number%i!=0)
		{
			return 1;
		}
	}
	return 0;
}