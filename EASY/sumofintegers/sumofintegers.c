/* 정수를 읽어서 더하기*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char ch[10];
	int sum=0;

	if(fp==NULL)
	{
		printf("error \n");
	}
	else{
		while(fgets(ch, 10, fp))
		{
			sum+=atoi(ch);
		}
		printf("%d\n", sum);
	}

	fclose(fp);
	return 0;
}
