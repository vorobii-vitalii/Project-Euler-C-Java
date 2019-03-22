#include <stdlib.h>
#include <stdio.h>

int main(int argc,char** argv)
{
	int n=28123;
	int * overloaded=malloc(sizeof(int)*n);
	int max_index=0;

	for(int i=0;i<n;i++)
	{
		int index=i+1;
		int sum=0;

		for(int j=1;j<index;j++)
		{
			if(index%j==0)
			{
				sum+=j;
			}
		}
		if(sum>index)
		{
			*(overloaded+max_index)=index;
			max_index++;
		}
	}
	for(int i=0;i<max_index;i++)
	{
		printf("%d  ", *(overloaded+i));
	}
	printf("\n");
	long sum=0;
	for(int i=1;i<=28123;i++)
	{
		short stop=0;
		for(int j=0;(j<max_index) && (stop==0);j++)
		{
			for(int m=j+1;m<max_index;m++)
			{
				if(( *(overloaded+m)+*(overloaded+j)   )==i)
				{
					stop=1;
					break;
				}
			}

		}
		if(stop==0)
		{
			printf("%d\n",i );
			sum+=i;
		}
	}
	printf("\n %ld",sum );
	return 0;
}