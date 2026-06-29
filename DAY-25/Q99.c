#include <stdio.h>
#include <string.h>

int main()
{
	char str[50][50], temp[50];
	int i, j, number;

	printf("Total number of names: ");
	scanf("%d", &number);

	printf("\nEnter all names one by one below\n");
	for (i = 0; i < number; i++)
	{
		printf("%d: ", i + 1);
		scanf(" ");
		fgets(str[i], sizeof str[i], stdin);
	}
	for (i = 0; i <= number; i++)
	{
		for (j = i + 1; j <= number; j++)
		{
			if (strcmp(str[i], str[j]) > 0)
			{
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}

	printf("\nAlphabetically Sorted Names\n");
	for (i = 0; i <= number; i++)
	{
		printf("%d: %s",i+1 , str[i]);
		if (i + 1 == number)
		{
			break;
		}
	}
	return 0;
}