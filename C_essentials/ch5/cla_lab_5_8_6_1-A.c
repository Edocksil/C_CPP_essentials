#include <stdio.h>
#include <string.h>

struct Family
{
	char father[50];
	char mother[50];
	char elderSister[50];
	char youngerBrother[50];
};

int main()
{
	struct Family family;

	strcpy(family.father, "Jhonathan Joestar\n");
	strcpy(family.mother, "Killer Queen\n");
	strcpy(family.elderSister, "Konosuba Ichigo\n");
	strcpy(family.youngerBrother, "Star Platinum\n");

	printf(family.father);
	printf(family.mother);
	printf(family.elderSister);
	printf(family.youngerBrother);

	return 0;
}
