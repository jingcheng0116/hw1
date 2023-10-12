#include <stdio.h>

int main() {
	double totalMileage, costPerUnit, mileagePerUnit, parkingCost, tollCost;
	double totalCost;

	// 輸入資訊
	printf("請輸入一整天的總里程數（公里）: ");
	scanf("%lf", &totalMileage);

	printf("請輸入每公升/加侖的汽油價格（台幣）: ");
	scanf("%lf", &costPerUnit);

	printf("請輸入平均每公升/加侖能行駛的公里數: ");
	scanf("%lf", &mileagePerUnit);

	printf("請輸入一天的停車費（台幣）: ");
	scanf("%lf", &parkingCost);

	printf("請輸入一天的通行費（過路費，台幣）: ");
	scanf("%lf", &tollCost);

	// 計算總花費
	double fuelCost = (totalMileage / mileagePerUnit) * costPerUnit;
	totalCost = fuelCost + parkingCost + tollCost;

	// 顯示結果
	printf("\n一天開車去工作的花費估計如下：\n");
	printf("汽油花費: %.2lf 台幣\n", fuelCost);
	printf("停車費: %.2lf 台幣\n", parkingCost);
	printf("通行費: %.2lf 台幣\n", tollCost);
	printf("總花費: %.2lf 台幣\n", totalCost);

	return 0;
}
