#include <stdio.h>
#include <stdlib.h>

int getTriangeNumberWithNDiv(int n);

int main(int argc,char** argv)
{
	printf("%d\n", getTriangeNumberWithNDiv(6));
	return 0;
}


int getTriangeNumberWithNDiv(int n)
{
	for (int i=1;;i++)
	{
		int num=0;
		for(int j=1;j<=i;j++)
		{
			num+=j;
		}

        int count=0;

		for(int d=1;d<=num;d++)
		{
			if(num%d==0)
			{
				count++;
			}
		}

		if(count==n)
		{
			return num;
		}


	}
}