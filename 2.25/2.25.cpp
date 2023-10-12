#include<stdio.h>
void aa()
{
	for (int i = 0; i < 9; i++)
	{
		if (i == 8 || i == 4)printf("P");
		else printf(" ");
	}
	printf("\n");

}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("D");
	}
	printf("\n");
	for (int i = 0; i < 2; i++)
	{

		for (int i = 0; i < 10; i++)
		{
			if (i == 9 || i == 0)printf("D");
			else printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 8 || i == 1)printf("D");
		else printf(" ");
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 || i == 0 || i == 8 || i == 1 || i == 2 || i == 7)printf(" ");
		else printf("D");
	}
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		if (i > 1)printf("J");
		else printf(" ");
	}
	printf("\n");
	printf(" J\n");
	printf("J\n");
	printf(" J\n");
	for (int i = 0; i < 9; i++)
	{
		if (i > 1)printf("J");
		else printf(" ");
	}
	printf("\n");
	for (int i = 0; i < 9; i++)
	{
		printf("P");
	}
	printf("\n");
	for (int i = 0; i < 3; i++)aa();

	for (int i = 0; i < 9; i++)
	{
		if (i == 7 || i == 6 || i == 5)printf("P");
		else printf(" ");
	}
}