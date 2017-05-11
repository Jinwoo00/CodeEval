#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void change_binary(char *number);

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");

	char ch[1024];
	char *cp=NULL;

	if(fp==NULL)
	{
		printf("error \n");
	}
	else{
		while(fgets(ch,1024,fp))
		{
			//printf("%s", ch);
			change_binary(ch);
			while(cp=strtok(NULL, ",")){
				//printf("%s", cp);
			}
	}

	fclose(fp);
	return 0;
}

void change_binary(char *number);
{
	int i,j;
	int num;
	int result[20];

	num = atoi(number);
	
	for(i=0; num>0; i++)
	{
		result[i]=num%2;
		num=num/2;
	}

	for(j=0; j<i; j++)
	{
		printf("%d",result[j]);
	}
}





