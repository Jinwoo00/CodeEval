/* 1,3,5 최소한의 갯수로 나누기*/

#include <stdio.h>
#include <stdlib.h>

void minimum_coins(int number);

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char ch[1024];
	
	while(fgets(ch, 1024, fp))
	{
		minimum_coins(atoi(ch));
	}

	fclose(fp);
	return 0;
}

void minimum_coins(int number)
{
	int remanet=0; //나머지값
	int result=0; //결과값

	result = number/5;
	remanet = number%5;

	if(remanet!=0)
	{
		result += remanet/3;
		remanet = remanet%3;
		if(remanet!=0)
		{
			result += remanet/1;
			printf("%d\n", result);
		}
		else if(remanet==0)
		{
			printf("%d\n", result);
		}
	}
	else if (remanet ==0)
	{
		printf("%d\n", result);
	}
		
}
