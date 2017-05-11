/*10진수를 2진수로 바꾸기*/

#include <stdio.h>
#include <stdlib.h>

void decimal_to_binary(int integer);

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char ch[1024];
	
	while(fgets(ch, 1024, fp))
	{
		decimal_to_binary(atoi(ch));
		printf("\n");
	}

	fclose(fp);
}

void decimal_to_binary(int integer)
{
	int i,j;
	int result[32];	

	for(i=0; 0<integer; i++)
	{
		result[i]=integer%2;
		integer = integer/2;
	}

	for(j=i-1; j>=0; j--)
	{
		printf("%d", result[j]);
	}
}
