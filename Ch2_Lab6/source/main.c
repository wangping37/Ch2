#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int count;
	float total = 0;
	float amount = 0;
	float tax = 0;
	printf("Welcome to the Fair Tax Caculator\n");
	printf("\nHere are some common expense categories:");
	printf("\n1: Housing, 2: Food, 3:Clothing, 4: Transportation, 5: Education, \n6: Health care, 7: Vacations\n");
	for (count = 1; count <= 7; count++)
	{
		printf("Please input how much you paid for expenses in category %d:", count);
		scanf_s("%f", &amount);
		total += amount;
	}
	tax = total * 0.23;
	printf("Your total Fair tax would be $%.2f\n", tax);
	system("pause");
	return 0;
}