#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int total=0;

const char* numbers []=
	{"one","two","three",
	 "four","five","six","seven",
	 "eight","nine","ten"
	};
const char* numbers10 []=
	{"twenty","thirty","fourty",
	 "fifthy","sixty","seventy","eighty",
	 "ninety"
	};

const char* numbers1010 []=
	{"eleven","twelve","thirteen",
	 "fourteen","fifteen","sixteen","seventeen",
	 "eighteen","nineteen"
	};	

void process100s(int number);
void processSingleNum(int number);

void process10s(int number);

int main(int argc,char** argv)
{
	for(int i=1;i<=999;i++)
	{
		if(i>=100)
		{
			process100s(i);
			if(i%100>9)
			{
				process10s(i%100);
			}
			else if(i%10>0){
				processSingleNum(i%10);
			}
		}
		else if(i<11)
		{
			processSingleNum(i);
		}
		else{
			process10s(i);
		}

	}

	return 0;
}
void processSingleNum(int number)
{
	printf("%s \n", numbers[number-1]);
}

void process100s(int number)
{
	int num=(int)number/100;
	printf("%s hundred\n",numbers[num-1] );
}

void process10s(int number){

int num=(int)number/10;
if(num==1)
{
	if(number%10==0)
	{
		printf("%s\n",numbers[9] );
	}
	else{
		printf("%s\n",numbers1010[(number%10)-1] );
	}

	
}
else{
	printf("%s\n",numbers10[num-2] );
	processSingleNum(number%10);
}


}