#include <stdio.h>
#include <string.h> //strtok
#include <stdlib.h> //atoi

int  decimal_to_binary(int interger);
void binary_system(int check_bi_zero_count, int binary_count);

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char ch[1024];
	char *cp=NULL;

	while(fgets(ch, 1024, fp))
	{
		cp=strtok(ch," ");
		while(cp=strtok(NULL,"\n"))
		{
			binary_system(atoi(ch),atoi(cp));
			printf("\n");
		}
	}

	fclose(fp);

	return 0;
}

int decimal_to_binary(int integer)
{
	int i,j;
	int result[1000];
	int count_zero=0;

	for(i=0; 0<integer; i++)
	{
		result[i]=integer%2;
		integer = integer/2;
	}

	for(j=0; j<i-1; j++)
	{
		if(result[j]==0)
		{
			count_zero++;
		}
	}
	return count_zero;	
		
}

void binary_system(int check_bi_zero_count, int binary_count)
{
	int x,y;
	int arr[1000];
	int result=0;

	for(x=1; x<=binary_count; x++)
	{
		arr[x-1]=decimal_to_binary(x);
	}

	for(y=0; y<binary_count; y++)
	{
		if(check_bi_zero_count==arr[y])
		{
			result++;
		}
	}
	
	printf("%d", result);
}

