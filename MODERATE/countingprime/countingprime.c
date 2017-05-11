#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int primecount(int start, int end);

int main(int argc, char* argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char ch[20];
	char *cp=NULL;

	if(fp==NULL)
	{
		printf("error \n");
	}
	else{
		while(fgets(ch,20,fp))
		{
			cp=strtok(ch,",");
			if(cp!=NULL){
				cp=strtok(NULL,"\n");
			}
			primecount(atoi(ch),atoi(cp));
		}
	}

	fclose(fp);
	return 0;				
			
}

int primecount(int start, int end)
{
	int prime_count=0;
	int count = 0;
	int j;
	
 	while(start<=end)
	{
		for(j=1; j<=start; j++)
		{
			if(start%j==0){
				count++;
			}
		}		
	
		if(count==2){
			prime_count++;
		}
		count = 0;
		start++;
	}
	
	printf("%d\n", prime_count);
}

