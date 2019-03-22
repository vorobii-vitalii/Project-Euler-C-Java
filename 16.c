#include <stdio.h>
#include <stdlib.h>

long long getNumberOfNumbersPower2(int pow);

int main(int argc,char** argv)
{
	printf("%lld\n",getNumberOfNumbersPower2(1000));


	return 0;
}

long long  getNumberOfNumbersPower2(int pow)
{
	int lastNum=(pow/3)+2;
	int * num=malloc(sizeof(int)*lastNum);
    lastNum--;
    *(num+lastNum)=1;
    int numberStarts=lastNum;
    int count=0;

    for(int i=0;i<pow;i++)
    {
    	int carry=0;

    	for(int j=lastNum;j>=numberStarts;j--)
    	{
    		*(num+j)*=2;
    		*(num+j)+=carry;
    		if( *(num+j)>9 )
    		{
    			*(num+j)=*(num+j)%10;
    			carry=1;
    			if(j==numberStarts)
    			{
    				numberStarts--;
    			}
    		}
    		else{
    			carry=0;
    		}
    	}
    	if(i==(pow-1))
    	{
    		for(int k=numberStarts;k<=lastNum;k++)
        {
    	count+=*(num+k);
         }
    	}
    	
         printf("\n");
    }

    
    return count;

}