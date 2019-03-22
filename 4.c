#include <stdlib.h>
#include <stdio.h>

int isPolindrome(int number);
void findBiggestPolindrome();

int main(int argc,char** argv)
{
	findBiggestPolindrome();

	return 0;
}

void findBiggestPolindrome()
{
	int * pair=malloc(sizeof(int)*2);
	*pair=1;
	*(pair+1)=1;
	for(int i=999;i>=1;i--)
	{
		for(int j=999;j>=1;j--)
		{
			if( isPolindrome(i*j)==0 )
			{
				if(  (*pair+*(pair+1)) <(i+j)     )
				{
					*pair=i;
	                *(pair+1)=j;
				}		
			}
		}
	}
	printf("%d %d are the biggest pair\n",*pair,*(pair+1) );
}


int isPolindrome(int number)
{
	int notReversedNumber=number;
	int reversedNumber=0;
	int remainder;

	while (number!=0)
	{
		remainder=number%10;
		reversedNumber=reversedNumber*10+remainder;
		number=number/10;
	}

	if(reversedNumber==notReversedNumber)
	{
		return 0;
	}
	else{
		return 1;
	}

}