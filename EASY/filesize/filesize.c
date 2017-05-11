#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE *fp = fopen(argv[1], "r");

	long len;

	fseek(fp, 0L, SEEK_END);//파일의 끝으로 이동

	len = ftell(fp); //파일의 현재위치 표시

	printf("%d\n", (int)len);

	fclose(fp);

	return 0;
}
