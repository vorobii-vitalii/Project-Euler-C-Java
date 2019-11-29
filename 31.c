#include <stdlib.h>
#include <stdio.h>

int recSum(int n);

int main(int argc,char** argv)
{
	printf("%d \n",recSum(200) );
	

	return 0;
}



int recSum(int n)
{
	if(n<=0)
	{
		return 1;
	}
	return recSum(n-1)+recSum(n-2)+recSum(n-5)+recSum(n-10)+recSum(n-20)+recSum(n-50)+recSum(n-100);
}