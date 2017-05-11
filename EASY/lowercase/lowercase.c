/*문자열을 읽어서 대문자를 소문자로 변환하는 프로그램*/

#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");

	char ch[30];
	int i=0;

	if(fp==NULL)
	{
		printf("error \n");
	}
	else{
		while(fgets(ch,30,fp))
		{
			while(ch[i]!='\0'){
				printf("%c",tolower(ch[i]));
				i++;
			}
			i=0;
		}
	}

	fclose(fp);
	return 0;
}

	
