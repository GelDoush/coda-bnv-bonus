#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int answer;
	int result=1;
	int count;

	printf("Choose a number between 2 and 20 : ");
	scanf("%d", &answer);

	if (answer >= 2 && answer <= 20) {
		count = answer;
		while(count > 0) {
			result = result * count;
			count = count-1;
		}
		printf("%d \n", result);
	}
	else {
		printf("Invalid number\n");
	}
}
