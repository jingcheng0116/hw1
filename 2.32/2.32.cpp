#include <stdio.h>

int main() {
	double height, weight, bmi;

	printf("請輸入您的身高（公尺）：");
	scanf("%lf", &height);

	printf("請輸入您的體重（公斤）：");
	scanf("%lf", &weight);

	// 計算BMI值
	bmi = weight / (height * height);

	printf("您的BMI是：%lf\n", bmi);

	if (bmi < 18.5) {
		printf("您的BMI指數屬於過輕。\n");
	}
	else if (bmi < 24) {
		printf("您的BMI指數屬於正常。\n");
	}
	else if (bmi < 27) {
		printf("您的BMI指數屬於過重。\n");
	}
	else {
		printf("您的BMI指數屬於肥胖。\n");
	}

	return 0;
}
