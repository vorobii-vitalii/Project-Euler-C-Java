#include <stdlib.h>
#include <stdio.h>



void getMaxSum(int col,int row,int value,int max_row,int  arr [][]);

int main(int argc,char** argv)
{

    int * sum_arr;

    int min_index=0;

	int arr[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};





	//sum_arr=malloc(sizeof(int)*1000);
	//getMaxSum(0,0,0,HEIGHT-1,arr);

	

	return 0;
}

void getMaxSum(int row,int col,int value,int max_row,int  arr [][])
{
	int sum=*(*(arr+row)+col);
	printf("%d \n",sum );
	sum+=value;
	if(row==max_row)
	{
		printf("%d \n",sum );
		*(sum_arr+min_index)=sum;
		return;
	}
	getMaxSum(row+1,col,sum,max_row,arr);
	getMaxSum(row+1,col+1,sum,max_row,arr);



}