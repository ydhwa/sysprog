#include <stdio.h>

int main(void) {
	int a, b;

	printf("정수 a 입력: ");
	scanf("%d", &a);
	printf("정수 b 입력: ");
	scanf("%d", &b);

	printf("%d + %d = %d 입니다.\n", a, b, (a + b));

	return 0;
}
