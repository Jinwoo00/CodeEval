#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void multiples(char *x_pointer, char *n_pointer);

int main(int argc, char* argv[])
{
	FILE *fp = fopen(argv[1], "r");

	char ch[1024];
	char *cp=NULL;

	while(fgets(ch,1024,fp))
	{
		cp=strtok(ch,",");
		if(cp!=(NULL)){
			cp=strtok(NULL,"\n");
			multiples(ch, cp);
		}

	}
	

	fclose(fp);
	return 0;
}

void multiples(char *x_pointer, char *n_pointer)
{
	int x, n, start_pow=0;
	x = atoi(x_pointer);
	n = atoi(n_pointer);

	while(n!=(int)pow((double)2, (double)start_pow))
	{
		start_pow++;
	}

	if(x>n)
	{
		while((int)pow((double)2, (double)start_pow)<=x)
		{
			start_pow++;
		}
		printf("%d\n", (int)pow((double)2,(double)start_pow));
	}
	

}
