#include <stdio.h>

int main() {
	int number;

	printf("請輸入一個整數：");
	scanf("%d", &number);

	if (number % 2 == 0) {
		printf("這個數是偶數。\n");
	}
	else {
		printf("這個數是奇數。\n");
	}

	return 0;
}
