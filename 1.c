#include <stdio.h>

int getSumNaturalNumbers(int count);

int main()
{
	const int count=1000;

	int result=getSumNaturalNumbers(count);

	printf("The sum is %d",result);
	
}



int getSumNaturalNumbers(int count)
{
	int sum=0;
	for (int i = 0; i < count; ++i)
	{
		if( (i%3==0) || (i%5==0) )
		{
			sum+=i;
		}
	}
	return sum;
}