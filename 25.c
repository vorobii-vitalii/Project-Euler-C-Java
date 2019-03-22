#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	int n=1000;
	int * a=malloc(sizeof(int)*n);
	int *b=malloc(sizeof(int)*n);
	int last_index=n-1;
	int first_index_a=n-1;
	int first_index_b=n-1;
	*(a+last_index)=1;
	*(b+last_index)=1;

	while(1)
	{
		int first_index=first_index_a<=first_index_b?first_index_a:first_index_b;
		int*temp=malloc(sizeof(int)*1000);
		int carry=0;
		for(int i=last_index;i>=first_index;i--)
		{
			*(temp+i)=*(a+i)+*(b+i);
			*(temp+i)+=carry;
			if(*(temp+i)>9)
			{
				carry=(int) *(temp+i)/10;
				*(temp+i)=*(temp+i)%10;
				if(i==first_index)
				{
					first_index--;
				}
			}
		}
		if( (last_index-first_index)==999 )
		{
		    for(int i=first_index;i<=last_index;i++){
			printf("%d", *(temp+i));
			}
		//	printf("\n");
			break;

		}

		for(int i=last_index;i>=first_index_b;i--)
		{
			*(a+i)=*(b+i);
		}

		first_index_b=first_index;

		for(int i=last_index;i>=first_index;i--)
		{
			*(b+i)=*(temp+i);
		}
	}



	return 0;
}