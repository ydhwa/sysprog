#include <string.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	char* str = "Hello World\n";

	// O_CREAT: 없으면 생성해라
	// O_RDWR: 쓰기, 읽기 모드로 열어라
	int fd = open("./hello.txt", O_CREAT | O_RDWR);
	// maybe fd == 3
	write(fd, str, strlen(str));
	close(fd);

	printf("------->%d\n", fd);

	return 0;
}
