#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[255];

	printf("Enter a word to reverse: ");
	scanf("%s", str);

	for (int j = strlen(str); j >= 0; j--)
	{
		printf("%c", str[j]);
	}
	return 0;
}
