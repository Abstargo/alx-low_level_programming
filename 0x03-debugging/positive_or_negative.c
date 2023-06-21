#include "main.h"

void positive_or_negative(int i)
{
	printf("%d is ", i);

	if (i > 0)
	{
		printf("positive");
	}
	else if (i == 0)
	{
		printf("zero");
	}
	else
	{
		printf("negative");
	}
}
