/*10진수를 2진수로 바꿔서 1의 갯수를 세는 프로그램*/

#include <stdio.h>
#include <stdlib.h>//atoi

void change_binary_form(int number);

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char ch[1024];

	while(fgets(ch,1024,fp))
	{
		//printf("%d\n", atoi(ch));
		change_binary_form(atoi(ch));
	}

	fclose(fp);
	return 0;
}

void change_binary_form(int number)
{
	int count = 0;
	int result[32];
	int i,j;

	for(i=0; 0<number; i++)
	{
		//result[i]=number%2;
		if(number%2==1)
			count++;
		number=number/2;
	}

	printf("%d\n", count);
}
	
