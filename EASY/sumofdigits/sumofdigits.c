#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char ch;
	int sum=0;
	
	
	if(fp==NULL)
	{
		printf("error \n");
	}
	else{

		while(!feof(fp))
		{
			ch=fgetc(fp);
			if(ch == '\n'){
				printf("%d\n",sum);
				sum = 0;
			}
			sum+=atoi(&ch);

		}
	
	}

	fclose(fp);	
	return 0;


}
