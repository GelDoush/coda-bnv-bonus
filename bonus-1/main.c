#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int answer;
	int result;

	printf("Choose a number betwen 0 and 100 : ");
	scanf("%d", &answer);

	if (answer > 100 || answer < 0)
	{
		printf("invalid value\n");
	}
	else 
	{
		result = answer;
		result = (result/5)*5;
		while (result > 0)
		{
		printf("%d\n",result);
		result = result-5;
		}
	}
}
