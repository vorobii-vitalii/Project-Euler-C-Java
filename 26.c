#include <stdlib.h>
#include <stdio.h>

int main(int argc,char ** argv)
{
	int max=0;
	int max_val=0;
	for(int i=2;i<=1000;i++)
	{
		double n=(double)1/i;
		 //printf("%f\n",n );
		n=n-(int)n;
		//printf("%f\n",n*10 );
		int* numStr=malloc(sizeof(int)*32);
		for(int j=0;j<32;j++)
		{
			int temp=n*10;
                  *(numStr+j)=temp;
                  n*=10;
			
			n=n-(int)n;
			printf("%f \n",n );
		}
		printf("\n");
		for(int j=0;j<32;j++)
		{
			printf("%d", *(numStr+j));
		}
		printf("\n");


		int temp_max=0;
		for(int j=0;j<32;j++)
		{

			int counter=0;
			int t=j;

			while(( *(numStr+t) == *(numStr+t+1)  ) && (t<32) && *(numStr+t)!=0)
			{
				counter++;
				if(temp_max<counter)
				{
					temp_max=counter;
				}
				t++;
			}
			j=t;

			counter=0;
		}
		if(temp_max>max)
		{
			max=temp_max;
			max_val=i;
		}


	}
	printf("%d has the  %d\n",max_val,max );
	return 0;
}