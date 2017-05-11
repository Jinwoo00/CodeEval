#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char ch[100];


	if(fp==NULL)
	{
		printf("error \n");
	}
	else{
		while((fgets(ch,100,fp)!=NULL))
		{
			//fgets(ch,100,fp);
			//printf("%s", ch);
			if(atoi(&ch)%2==0)
			{
				printf("1\n");
			}
			else{
				printf("0\n");
			}
		}
	}
	
	fclose(fp);
	return 0;
}				
