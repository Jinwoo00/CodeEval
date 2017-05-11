/*영단어를 숫자로 바꾸기*/
#include <stdio.h>
#include <string.h>

void change_number(char *cn_ch);

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
			cp=strtok(ch,";");
			//printf("%s", cp);
			change_number(cp);
			while(cp=strtok(NULL, ";")){
				//printf("%s", cp);
				change_number(cp);
				
			}
			printf("\n");
		}
	}

	fclose(fp);
	return 0;
}

void change_number(char *cn_ch)
{
	if(!strcmp(cn_ch,"zero") || !strcmp(cn_ch, "zero\n"))
	{	
		printf("0");	
	}
	else if(!strcmp(cn_ch,"one") || !strcmp(cn_ch, "one\n"))
	{	
		printf("1");	
	}
	else if(!strcmp(cn_ch,"two") || !strcmp(cn_ch,"two\n"))
	{	
		printf("2");	
	}
	else if(!strcmp(cn_ch,"three") || !strcmp(cn_ch, "three\n"))
	{	
		printf("3");	
	}
	else if(!strcmp(cn_ch,"four") || !strcmp(cn_ch, "four\n"))
	{	
		printf("4");	
	}
	else if(!strcmp(cn_ch,"five") || !strcmp(cn_ch, "five\n"))
	{	
		printf("5");	
	}
	else if(!strcmp(cn_ch,"six") || !strcmp(cn_ch, "six\n"))
	{	
		printf("6");	
	}
	else if(!strcmp(cn_ch,"seven") || !strcmp(cn_ch, "seven\n"))
	{	
		printf("7");	
	}
	else if(!strcmp(cn_ch,"eight") || !strcmp(cn_ch, "eight\n"))
	{	
		printf("8");	
	}
	else if(!strcmp(cn_ch,"nine") || !strcmp(cn_ch, "nine\n"))
	{	
		printf("9");	
	}

}





