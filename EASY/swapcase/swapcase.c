/*대문자는 소문자로 소문자는 대문자로 바꾸는 프로그램*/

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
				if(isalpha(ch[i]) && isupper(ch[i]))
				{
					printf("%c", tolower(ch[i]));
					i++;
				}
				else if(isalpha(ch[i]) && islower(ch[i]))
				{
					printf("%c", toupper(ch[i]));
					i++;
				}
				else
				{
					printf("%c", ch[i]);
					i++;
				}		
			}
			i=0;
		}
	}

	fclose(fp);
	return 0;
}
