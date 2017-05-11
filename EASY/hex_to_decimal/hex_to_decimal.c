/*16진수를 10진수로 바꾸기*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char ch[1024];
	char *cp;
	long hex;

	while(fgets(ch, 1024, fp))
	{
		hex=strtol(ch, &cp, 16);
		printf("%ld\n", hex);
	}

	fclose(fp);
	return 0;
}



