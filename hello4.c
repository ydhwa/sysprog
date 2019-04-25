#include <stdio.h>

int main(void)
{
	char* str = "Hello World\n";

	// FILE 구조체 선언
	FILE* fp = fopen("./hello4.txt", "w");
	fputs(str, fp);
	fclose(fp);

	return 0;
}
