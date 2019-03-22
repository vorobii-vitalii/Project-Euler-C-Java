#include <stdlib.h>
#include <stdio.h>

int main(int argc,char** argv)
{
	int max_times=0;
	for(long i=999999;i>=2;i--)
	{
		long n=i;
		int times=0;
		while(n!=1)
		{
			if(n%2==0)
			{
				n=n/2;
			}
			else{
				n=3*n+1;
			}
			times++;
		}
		if(times>max_times)
		{
			max_times=times;
		}
	}
	printf("%d\n",max_times );
	return 0;
}