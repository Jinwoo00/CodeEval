#include <stdio.h>
#include <string.h>

void reversewords(char *front, char *back);

int main(int argc, char* argv[])
{
    FILE *fp = fopen(argv[1], "r");
    
	char ch[1024];
    char *cp=NULL;

    while(fgets(ch,1024,fp))
    {
    	cp=strtok(ch," ");
        if(cp!=NULL){
            cp=strtok(NULL,"\n");
            //    printf("%s ", cp);i
			reversewords(ch, cp);
       	}
    }

    fclose(fp);
    return 0;
}

void reversewords(char *front, char *back)
{
	char f[1024];
	char b[1024];

	strcpy(f, back);
	strcpy(b, front);

	printf("%s %s\n", f, b);
}
