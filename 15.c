#include <stdio.h>
#include <stdlib.h>

void getWay(int posX,int posY,int destX,int destY);

int count=0;

int main(int argc,char** argv)
{
	//const int ROWS = 20;
	//const int COLS = 20;
	getWay(0,0,2,2);
	printf("%d\n",count );


	return 0;
}


void getWay(int posX,int posY,int destX,int destY)
{
	printf("%d  %d \n",posX,posY );
	if((  posX==destX ) && (posY==destY))
	{
		count++;
		return;
	}

	if( (posX+1)<=destX )
	{
		getWay(posX+1,posY,destX,destY);
	}
	if( (posY+1)<=destY )
	{
		getWay(posX,posY+1,destX,destY);
	}
	return;

}