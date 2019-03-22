#include <stdlib.h>
#include <stdio.h>

int main(int argc,char** argv)
{
	int N=10;
	int a[10][50]={
		{3,7,1,0,7,2,8,7,5,3,3,9,0,2,1,0,2,7,9,8,7,9,7,9,9,8,2,2,0,8,3,7,5,9,0,2,4,6,5,1,0,1,3,5,7,4,0,2,5,0},
		{4,6,3,7,6,9,3,7,6,7,7,4,9,0,0,9,7,1,2,6,4,8,1,2,4,8,9,6,9,7,0,0,7,8,0,5,0,4,1,7,0,1,8,2,6,0,5,3,8,5},
		{7,4,3,2,4,9,8,6,1,9,9,5,2,4,7,4,1,0,5,9,4,7,4,2,3,3,3,0,9,5,1,3,0,5,8,1,2,3,7,2,6,6,1,7,3,0,9,6,2,9},
		{9,1,9,4,2,2,1,3,3,6,3,5,7,4,1,6,1,5,7,2,5,2,2,4,3,0,5,6,3,3,0,1,8,1,1,0,7,2,4,0,6,1,5,4,9,0,8,2,5,0},
		{2,3,0,6,7,5,8,8,2,0,7,5,3,9,3,4,6,1,7,1,1,7,1,9,8,0,3,1,0,4,2,1,0,4,7,5,1,3,7,7,8,0,6,3,2,4,6,6,7,6},
		{8,9,2,6,1,6,7,0,6,9,6,6,2,3,6,3,3,8,2,0,1,3,6,3,7,8,4,1,8,3,8,3,6,8,4,1,7,8,7,3,4,3,6,1,7,2,6,7,5,7},
		{2,8,1,1,2,8,7,9,8,1,2,8,4,9,9,7,9,4,0,8,0,6,5,4,8,1,9,3,1,5,9,2,6,2,1,6,9,1,2,7,5,8,8,9,8,3,2,7,3,8},
		{4,4,2,7,4,2,2,8,9,1,7,4,3,2,5,2,0,3,2,1,9,2,3,5,8,9,4,2,8,7,6,7,6,4,8,7,6,7,0,2,7,2,1,8,9,3,1,8},
		{4,7,4,5,1,4,4,5,7,3,6,0,0,1,3,0,6,4,3,9,0,9,1,1,6,7,2,1,6,8,5,6,8,4,4,5,8,8,7,1,1,6,0,3,1,5,3,2,7,6},
		{7,0,3,8,6,4,8,6,1,0,5,8,4,3,0,2,5,4,3,9,9,3,9,6,1,9,8,2,8,9,1,7,5,9,3,6,6,5,6,8,6,7,5,7,9,3,4,9,5,1}
	};
	int * sum=malloc (sizeof(int)*50*N);
	int lastindex=50*N-1;
	int firstIndex=lastindex-50;

	for(int i=0;i<N;i++)
	{
		int carry=0;
		
		for(int j=lastindex;j>=firstIndex;j--)
		{
			int index=49-(lastindex-j);
			//printf("%d \n", index);

			if(index<=49 && index>=0)
			{
				printf("%d      \n",index  );
								*(sum+j)+=a[i][index];
			}
			*(sum+j)+=carry;
			if( *(sum+j)>9 )
			{
				carry=(int) *(sum+j)/10;
				*(sum+j)=*(sum+j)%10;
				if(j==firstIndex)
				{
					firstIndex--;
				}
			}
			

		}
		printf("\n");
		for(int l=firstIndex;l<=lastindex;l++)
	{
		printf("%d",*(sum+l) );
	}
	printf("\n");


	}

	for(int i=firstIndex;i<=lastindex;i++)
	{
		//printf("%d",*(sum+i) );
	}
return 0;
}