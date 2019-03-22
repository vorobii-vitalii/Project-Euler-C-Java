#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findTriplePifagor();

int main(int argc,char** argv)
{
      int result=findTriplePifagor();
      printf("a+b+c=%d\n",result );
}


int findTriplePifagor()
{
	for(int a=3;;a++)
	{
		for(int b=a+1;;b++)
		{
			double c=sqrt(a*a+b*b);
			//printf("%d %d %d\n",a,b,c );
			//printf("%d\n", );
			if( (c+b+a)>1000 )
			{
				break;
			}
			else if((c+b+a)==1000)
			{
				printf("%d %d %f\n",a,b,c );
				return a*b*c;
			}

		}
	}
	return 0;
}