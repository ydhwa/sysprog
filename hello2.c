#include<string.h>

int main(void)
{
	char* str = "Hello World\n";
	write(1, str, strlen(str));

	return 0;
}
