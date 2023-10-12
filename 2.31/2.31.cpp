#include <stdio.h>

int main() {
	printf("數字\t平方\t立方\n");
	for (int i = 1; i <= 10; i++) {
		int square = i * i;
		int cube = i * i * i;
		printf("%d\t%d\t%d\n", i, square, cube);
	}
	return 0;
}
