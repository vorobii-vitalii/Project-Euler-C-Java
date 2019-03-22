#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	int n=10000;
	int * numbers=malloc(sizeof(int)*n);
	int * dividers=malloc(sizeof(int)*n);

	for(int i=0;i<n;i++)
	{
		int index=i+1;
		int sumDiv=0;
		for(int j=1;j<index;j++)
		{
			if(index%j==0)
			{
				sumDiv+=j;
			}
		}
		*(numbers+i)=index;
		*(dividers+i)=sumDiv;
	}

	for(int i=0;i<n;i++)
	{
		if(( *(dividers+i)==*(numbers+(*(dividers+i))-1)  ) && ( *(numbers+i) == *(dividers+(*(dividers+i))-1)) )
		{
			printf("Pair %d  %d\n",*(dividers+i),*(numbers+i) );
		}
	}
	return 0;
}