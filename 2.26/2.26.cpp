#include <stdio.h>

int main() {
	int num1, num2;

	// 提示用户输入第一个数
	printf("請輸入第一個數: ");
	scanf("%d", &num1);

	// 提示用户输入第二个数
	printf("請輸入第二個數: ");
	scanf("%d", &num2);

	// 检查第一个数是否是第二个数的倍数
	if (num2 != 0 && num1 % num2 == 0) {
		printf("%d 是 %d 的倍數。\n", num1, num2);
	}
	else {
		printf("%d 不是 %d 的倍數。\n", num1, num2);
	}

	return 0;
}
