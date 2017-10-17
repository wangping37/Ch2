#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float population = 6763;
	float newpop = population;
	float newpop2 = population;
	float rate = 0.0118;
	int year;
	printf("%15s%30s%25s\n", "Years from now", "Population(in millions)", "Increase(in millions)");
	for (year = 1; year <= 75; year++)
	{
		newpop2 = newpop;
		newpop = newpop * 1.0118;
		printf("%15d%30.2f%25.2f\n", year, newpop, newpop - newpop2);
	}
	system("pause");
	return 0;
}