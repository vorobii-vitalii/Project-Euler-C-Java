#include <stdlib.h>
#include <stdio.h>

int main(int argc,char** argv)
{
	const int WIDTH=1001;
	const int HEIGHT=1001;
	int matrix [HEIGHT][WIDTH] ;
	int sum=-1;

	unsigned long number=WIDTH*HEIGHT;
    int x=WIDTH/2;
    int y=WIDTH/2;
    int counter=2;
    int amplitude=1;
    matrix[x][y]=1;
	while(1)
	{
		short ShouldQuit=0;

		for(int i=0;i<amplitude;i++)
		{
			x++;

			matrix[x][y]=counter;
			
			counter++;
			if(counter>number)
			{
				ShouldQuit=1;
				break;
			}
		}

		if(ShouldQuit==1)
		{
			break;
		}

		for(int i=0;i<amplitude;i++)
		{
			y++;
			matrix[x][y]=counter;
			
			counter++;
			if(counter>number)
			{
				ShouldQuit=1;
				break;
			}
		}

		if(ShouldQuit==1)
		{
			break;
		}

		for(int i=0;i<amplitude+1;i++)
		{
			x--;
			matrix[x][y]=counter;
			
			counter++;
			if(counter>number)
			{
				ShouldQuit=1;
				break;
			}
		}

		if(ShouldQuit==1)
		{
			break;
		}

		for(int i=0;i<amplitude+1;i++)
		{
			y--;
			matrix[x][y]=counter;
			
			counter++;
			if(counter>number)
			{
				ShouldQuit=1;
				break;
			}
		}

		if(ShouldQuit==1)
		{
			break;
		}
		amplitude+=2;

	}

	for(int i=0;i<HEIGHT;i++)
	{
		for(int j=0;j<WIDTH;j++)
		{
			printf("%d\t",matrix[i][j] );
		}
		printf("\n");

	}

	for(int i=0,j=WIDTH-1;i<WIDTH;i++,j--)
	{
		sum+=matrix[i][i];
		sum+=matrix[i][j];
	}
	printf("The sum %d\n",sum );



	return 0;
}