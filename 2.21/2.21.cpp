#include <iostream>
#include<stdio.h>
void aa()
{
	for (int i = 0; i < 6; i++)
	{
		if (i < 3)printf(" ");
		else
		{
			printf("*");
		}
	}
	printf("\n");
	return;
}
void ab()
{
	for (int f = 0; f < 9; f++)
	{
		if (f == 1 || f == 7)printf("*");
		else printf(" ");
	}
	printf("\n");
	return;
}
void ac()
{
	for (int i = 0; i < 9; i++)
	{
		if (i == 0 || i == 8)printf("*");
		else printf(" ");
	}
	printf("\n");
	return;
}

void ba()
{
	for (int i = 0; i < 5; i++)
	{
		if (i == 4)printf("*");
		else printf(" ");
	}
	printf("\n");
}

void bb()
{
	for (int o = 0; o < 9; o++)
	{
		if (o == 5 || o == 3)printf("*");
		else printf(" ");
	}
	printf("\n");
}
void bc()
{
	for (int o = 0; o < 9; o++)
	{
		if (o == 6 | o == 2)printf("*");
		else printf(" ");
	}
	printf("\n");
}
void bd()
{
	for (int o = 0; o < 9; o++)
	{
		if (o == 7 | o == 1)printf("*");
		else printf(" ");
	}
	printf("\n");
}
void be()
{
	for (int o = 0; o < 9; o++)
	{
		if (o == 8 | o == 0)printf("*");
		else printf(" ");
	}
	printf("\n");
}
int main()
{
	for (int i = 0; i < 10; i++)printf("*");
	printf("\n");
	for (int o = 0; o < 8; o++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i == 0 || i == 9)printf("*");
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for (int i = 0; i < 10; i++)printf("*");
	printf("\n");
	aa();
	ab();
	for (int i = 0; i < 5; i++)
	{
		ac();
	}
	ab();
	aa();
	printf("\n");
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 5; j >= i; j--)
		{
			printf(" ");
		}
		for (int a = 0; a < (i * 2) - 1; a++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 6; i++)
	{
		for (int o = 0; o < 6; o++)
		{
			if (o == 5)printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	ba();
	bb();
	bc();
	bd();
	be();
	bd();
	bc();
	bb();
	ba();
	return 0;
}