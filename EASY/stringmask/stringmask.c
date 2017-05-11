#include <stdio.h>
#include <stdlib.h> //atoi
#include <ctype.h> //toupper
#include <string.h> // strcpy

void stringmask(char *str, char *bin);

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");

	char ch[1024];
	char *cp=NULL;	

	while(fgets(ch,1024,fp))
	{
		cp=strtok(ch," ");
		if(cp!=NULL){
			cp=strtok(NULL,"\n");
			stringmask(ch, cp);
		}
		printf("\n");
	}

	fclose(fp);


	return 0;
}

void stringmask(char *str, char *bin)
{
	int i;
	
	char s[1024]="";
	char b[1024]="";

	strcpy(s, str);
	strcpy(b, bin);

	for(i=0; i<sizeof(s); i++)
	{
		if(b[i]=='1')
		{
			printf("%c", toupper(s[i]));
		}
		else if(b[i]=='0')
		{
			printf("%c", s[i]);
		}
	}
}
