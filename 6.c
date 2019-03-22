#include <stdlib.h>
#include <stdio.h>

int getDifferenceSQRT(int from,int to);

int main(int argc,char** argv)
{
	printf("The difference is %d\n",getDifferenceSQRT(1,100) );
	return 0;
}

int getDifferenceSQRT(int from,int to){
	int sumSQRT=0;
	int sqrtSUM=0;
	for(int i=from;i<=to;i++)
	{
		sumSQRT+=i*i;
		sqrtSUM+=i;
	}
	sqrtSUM=sqrtSUM*sqrtSUM;
	return sqrtSUM-sumSQRT;
}